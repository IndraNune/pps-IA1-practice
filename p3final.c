#include<stdio.h>
int input_n()
{
  int n;
  printf("enter the value of n");
  scanf("%d",&n);
  return n;
}
int add_n(int n)
{
  int sum=0,i;
  for(i=1;i<=n;i++)
  {
    sum=sum+i;
  }
  return sum;
}
int output(int n,int sum)
{
  printf("the sum of numbers is %d",sum);
}
int main()
{
  int n,sum;
  n= input_n();
  sum= add_n(n);
  output(n,sum);
  return 0;
}