#include<stdio.h>
int main()
{
	int i,j,t,n,m;
	int a[20];
	scanf("%d",&m);
	if (m<1||m>20){
		return 0;
	}
	else   {
	for (n=0;n<m;n++) {
		scanf("%d",&a[n]);
	}
	for (j=0;j<m-1;j++) {
		for (i=0;i<m-1-j;i++) {
			if (a[i]*a[i]>a[i+1]*a[i+1]) {
				t=a[i];
				a[i]=a[i+1];
				a[i+1]=t;
			}
			
		}
	}
	
	printf ("%d\n",a[m-1]); } 
	return 0;
 } 
