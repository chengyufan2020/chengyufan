#include <stdio.h>
#include <string.h>
//字符串单词逆序并输出
void wordnixu(char *start,char *end);
char* setence(char *str);
void wordnixu(char *start,char *end)//一个单词字符逆序，不包括空格字符
{
	char jiaohuan;
	while(start<end)
	{
		jiaohuan=*start;
		*start++=*end;//尽量使代码简洁
		*end--=jiaohuan;
	}
}
char* setence(char *str)//1、句子的单词先内部逆序/2、之后再把句子看做单词整体逆序即可得到逆序单词输出
{
	char *start=str;//指向串内部单词首字符
	char *p=str;//指向串的首地址，作为整体逆序的首地址
	while(*str!='\0')
	{
		if(*str==' '||*str=='.')
		{
			wordnixu(start,str-1);//串内单词内部逆序
			start=++str;//指向下一个单词的首地址,需要特别注意地址的操作++，与--
		}
		else { 
			str++; } 
	}
	wordnixu(start,str-1);//把最后一个单词逆序逆序
	return p;//返回首地址
}
int main()
{
	char str[100];
	gets(str);//接受空格字符，其实也可以用scanf（"%^c"）接受
	printf("%s\n",setence(str));
	return 0;
}
