#include <stdio.h>
int main ()
{
	char ch;
	int len=0;
	ch=getchar();
	while (ch!='\n')
	{
		len++;
		ch=getchar();
	}
	printf ("%d\n",len);
	return 0;
	
	
	
	
 } 
