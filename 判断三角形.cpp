#include<stdio.h> 
int main()
{
	int n,i;
	int a,b,c;
	scanf ("%d\n",&n);
	for (i=0;i<n;i++) {
		scanf ("%d %d %d",&a,&b,&c);
		 if (a==0&&b==0&&c==0) {
			printf ("No\n");
		}
		else if (a*b*c==0) {
			printf("No\n");
		}
		else if (a<0||b<0||c<0) {
			printf ("No\n");
		}
		else if (a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a) {
			printf ("Yes\n");
		}
		else {
			printf("No\n");
		}
	}
	return 0;
}
