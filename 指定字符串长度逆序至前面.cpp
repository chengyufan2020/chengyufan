#include<stdio.h>
#include<string.h>
int main()
{
int ReverseAsWord(char *s1, char *s2) {
while (s1 < s2)	 {
char t = *s1;		
*s1 = *s2;		
*s2 = t;		
++s1;		
--s2;	
 } }	
//翻转函数
char *ReverseString(char *s){	
char *s1 = s;	
char *s2 = s;//将前（n -1 )个单词逆序	
while (*s2 != '\0')	
{		
if (*s2 == ' ')		
 {			
ReverseAsWord(s1, s2 - 1);			
++s2;			
s1 = s2;		
 }		
else			
++s2;	}//将最后一个单词逆序		
return s;
}
return 0;
}
