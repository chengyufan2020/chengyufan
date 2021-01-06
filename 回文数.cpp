#include <stdio.h>
int main()
{
    int n,m,k,i,z;
    scanf ("%d\n",&z);
	for (i=0;i<z;i++) {
    scanf("%d", &n);
    k=n;
    m=0;  //m将为n的反序数
    while(k>0)
    {
        m=m*10+k%10;
        k=k/10;
    } 
    if(m==n)  { //n等于其反序数，则为回文数
        printf("Yes\n"); }
    else {
    	printf ("No\n"); }
	}
    return 0;
}
