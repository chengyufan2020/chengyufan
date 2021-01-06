#include <stdio.h>
int judge_prime(int n)// 排除质数的情况
{
    int i;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
            break;
    }
    if(i>=n)
        return 1;
    else
		return 0;
}
 
int main()
{
    int n;
    scanf("%d",&n);
    if (n%2!=0||n<=6) {
    	printf ("ERROR\n");
	}
	else {
    for(int i=3;i<n;i++)
    {
        if(judge_prime(i)==1&&i%2==1&&judge_prime(n-i)==1&&(n-i)%2==1)//排除掉不符合条件的情况
        {
            printf("%d %d\n",i,n-i);
			}
        if(i>=n-i){
        	break;
		} }
    } 
    return 0; 
}
