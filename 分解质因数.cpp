#include<stdio.h>
int main(){
	int k,z,x;
	scanf ("%d",&k);
	for (z=0;z<k;z++){
		scanf ("%d",&x);
		for (int i=2;i<=x;i++){
			while (x!=i){
				if ((x%i)==0){
					printf ("%d*",i);
					x=x/i;
				}
				else {
					break;
				}
			}
		}
		printf ("%d\n",x);
	}
	return 0;
} 
