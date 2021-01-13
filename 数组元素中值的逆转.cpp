#include<stdio.h>
#include<stdlib.h> 
void inVert (int *s,int num){
	int *t,k;
	t=s+num;
	while (s<t){
		k=*s;
		*s=*t;
		*t=k;
		s++;
		t--;
	}
}
int main(){
	int i,n=10,a[10]={1,2,3,4,5,6,7,8,9,10};
	inVert(a,n-1);
	for (i=0;i<10;i++){
		printf ("%d ",a[i]);
	}
	printf ("\n");
	return 0;
}
