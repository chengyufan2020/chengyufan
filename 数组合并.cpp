#include<stdio.h>
#define MAX 20000
//合并两个有序数组a,b，借助数组c
void MergeArray(int array1[], int len1, int array2[], int len2, int array3[], int len3)
{
	if (len3 < len1 + len2)
		return;
	int  index1 = 0, index2 = 0, index3 = 0;
	while (index1 < len1&&index2 < len2)
	{
		if (array1[index1] < array2[index2])
		{
			array3[index3++] = array1[index1++];
		}
		else
		{
			array3[index3++] = array2[index2++];
		}
	}
	while (index1 < len1)
	{
		array3[index3++] = array1[index1++];
	}
	while (index2 < len2) 
	{
		array3[index3++] = array2[index2++];
	}
	return;
 
}
 
 
int main()
{
	int m,n,z;
	scanf ("%d %d",&m,&n);
	int array1[m];
	for (z=0;z<m;z++) {
		scanf ("%d",&array1[z]);
	}
	int array2[n];
	for (z=0;z<n;z++) {
		scanf ("%d",&array2[z]);
	}
	int len1 = sizeof(array1) / sizeof(int);
	int len2 = sizeof(array2) / sizeof(int);
	int array3[MAX];
	MergeArray(array1, len1, array2, len2, array3, MAX);
	for (int i = 0; i < len1 + len2; i++)
	{
		printf("%d ", array3[i]);
	}
 return 0;
}
