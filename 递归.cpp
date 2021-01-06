#include<stdio.h>
 int fact(int i,int j,int o)
 {
 	if (i>=2) { 
  return o+fact(i-1,j,o); }
    else  {
  return j; }
 }
  int main()
  {
  int n,a,k;
  scanf ("%d %d %d",&n,&a,&k);
  if (0<n<=100&&0<a<=100&&0<k<=100&&n>=2){
  printf("%d\n",fact(n,a,k)); }
  else {
  	printf("Wrong Number\n");
  }
  return 0; 
}
