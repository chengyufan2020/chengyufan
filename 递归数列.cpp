#include<stdio.h>
	int Fib(int n){
	if (n==0){
		return 0;
	}
	 else if (n==1||n==2){
	 	return 1;
	 }
	   else {
	   	return Fib(n-1)+Fib(n-2);
	   }
} 
int main(){
	int n,i;
	scanf ("%d",&n);
	for(i=1;i<=n;i++){
		printf ("%d ",Fib(i));
	}
	return 0;
}
