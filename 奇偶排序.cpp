#include <stdio.h>
int* quicksort(int a[100], int left,int right){
	int i, j, t, temp;
	if(left > right){
		return a;     //判断是否进行 
	}
	temp = a[left];    //确立基准数为最左边的数
	i = left;
	j = right;
	while(i != j){
		while(a[j] >= temp && i < j){    //从右向左边开始遍历 
			j--;
		}
		while(a[i] <= temp && i < j){    //从左向右边开始遍历
			i++;
		}
		if(i < j){                       //判断成立 进行交换 
			t = a[i];
			a [i] = a[j];
			a[j] = t;
		}
	}
	a[left] = a[i];
	a[i] = temp;
	quicksort(a, left, i - 1);    //递归，继续基准数左边的数排序 
	quicksort(a, i + 1, right);    //递归，继续基准数右边的数排序 
}
int main(){
	int n;
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		int m = 0, n = 0, x;
		int a[100] = {0}; 
		int b[100] = {0};
		while(scanf("%d", &x) == 1){
			if(x % 2 != 0){
				m++;
				a[m] = x;
			}else if(x % 2 == 0){
				n++;
				b[n] = x;
			}
			char test = getchar();
			if(test == '\n')
			break;
		}
		int *p = quicksort(a, 1, m);
		int *q = quicksort(b, 1, n);
		for(int i = 1; i <= m; i++){
			printf("%d ", a[i]);
		}
		for(int i = 1; i < n; i++){
			printf("%d ", b[i]);
		}
		printf("%d\n", b[n]);
	}
	return 0;
}
