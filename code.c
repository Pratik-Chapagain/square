#include<stdio.h>
#include<conio.h>
int main()
{
  int n,b;
  printf("enter n:");
  scanf("%d",&n);
  if (n%2==0)
  b=n*n;
  else
  b=n*n*n;
  printf("ans=%d",b);
  return 0;
}