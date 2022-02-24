#include<stdio.h>
int input_number()
{
 int x;
 printf("enter the value\n");
 scanf("%d",&x);
 return x;
}
int is_prime(int n)
{
  int count=0;
  for(int i=1;i<=n;i++)
  {
    if(n%i==0)
    count++;
  }
  return count;
}
void output(int n,int count)
{
  if(count>2)
  {
  printf("%d is not prime\n",n);
  }
  else
  {
  printf("%d is prime\n",n);
  }
}
int main()
{
  int x,y;
  x=input_number();
 y=is_prime(x);
  output(x,y);
  return 0;
}