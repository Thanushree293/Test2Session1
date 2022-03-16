include<stdio.h>
int input_array_size()
{
  int n;
  printf("enter the number\n");
  scanf("%d",&n);
  return n;
}
void input_array(int n,int a[n])
{
  for(int i=1;i<=n;i++)
    {
     printf("%d+",n);
      scanf("%d",&n);
      }
}
void erotosthenes_sieve(int n, int a[n])
{
  for(int i=1;i<=n;i++)
    {
      if(n[i]!=0)
        printf("%d",&n[i]);
    }
}
void out_put(int n, int a[n])
{
  printf("\n");
}
int main()
{
  int n
 n=input_array_size();
 int a[n];
 erotosthenes_sieve( n, a[n]);
out_put(n,a[n]);
  return 0;
  }