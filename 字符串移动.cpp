#include<stdio.h>  
#include<string.h>  
#include<assert.h>   
#define MAX_LEN 20  
#pragma warning(disable:4996)
void RightLoopMove(char *pStr, unsigned short steps)
{
	assert(pStr);
	char arr[MAX_LEN] = { 0 };
	int n = strlen(pStr) - steps;
	strcpy(arr, pStr + n);     //需要移位的字符拷给arr  
	strcpy(arr + steps, pStr);   //再把剩下的字符拷给arr  
	*(arr + strlen(pStr)) = '\0';   //上一步会多拷steps个字符，加\0的同时也解决了这个问题。  
	strcpy(pStr, arr);       //arr里的字符拷给源串  
}

int i;
int main()
{
	char arr[200];
	scanf("%d\n",&i);
	gets(arr);
	RightLoopMove(arr, i);
	printf("%s\n", arr);
	return 0;
}
