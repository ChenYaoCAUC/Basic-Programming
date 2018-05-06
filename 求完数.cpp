#include <stdio.h>

int factorsum( int number );
void PrintPN( int m, int n );
	
int main()
{
    int i, m, n;

    scanf("%d %d", &m, &n);
    if ( factorsum(m) == m ) printf("%d is a perfect number\n", m);
    if ( factorsum(n) == n ) printf("%d is a perfect number\n", n);
    PrintPN(m, n);

    return 0;
}
int factorsum( int number )
{
  int i,sum=0;
  if(number==1)
  sum=1;
  else
  {
  for(i=1;i<=number/2;i++)
  {
    if(number%i==0)
    sum=sum+i;  
  }
  }
  return sum;
}
void PrintPN( int m, int n )
{
  int i,count=0,j;
  for(i=m;i<=n;i++)
  {
    if(factorsum(i)==i)
    {
      count=1;
      printf("%d = 1",i);
      for(j=2;j<=i/2;j++)
      {
        if(i%j==0)
        {
          printf(" + %d",j);
        }
      }
      printf("\n");
    }
  }
  if(count==0)
  printf("No perfect number");
}