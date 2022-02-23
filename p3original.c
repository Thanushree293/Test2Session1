#include<stdio.h>
int input_number()
{
  int x;
  printf("enter the number\n");
    scanf("%d",&x);
    return x;
}
  int is_prime(int n)
  {
    int count=0;
    for(int i=1;i<=n;i++)
    {
    if(n%i==1);
      count++;
    }
    return count;
    }
void output(int n,int count)
  {
   if(count>2)
    {
      printf("%d is not a prime number\n",n);
    }
    else
    {
      printf("%d is a prime number\n",n);
    }
  }
  int main()
  {  
    int a,prime;
    a=input_number();
    prime=is_prime(a);
    output(a,prime);
    return 0;
  }