#include<stdio.h>
int main()
{
	int T,m,n,i,u;
	int a,b,c;
	scanf ("%d",&T) ;
	for (i=0;i<T;i++) {
		int x=0;
		scanf ("%d %d",&m,&n);
		if (m>=100&&m<=999&&n>=100&&n<=999){
		for (u=m;u<n;u++) {
			a=u/100;
			b=u/10%10;
			c=u%10;
			if (a*a*a+b*b*b+c*c*c==u){
				printf ("%d ",u);
				x=1;
			}
		} 
		if (x==0) {
			printf("-1\n");
		}
	}
}
	return 0;
 } 
