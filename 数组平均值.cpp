#include<stdio.h>
int main() {
	int n,i; 
	int a[100];
	float sum=0.00;
	scanf ("%d",&n);
	for (i=0;i<n;i++){
		scanf ("%d",&a[i]);
		sum=sum+a[i];
	}
	printf ("%.2f\n",sum/n);
	return 0;
}
