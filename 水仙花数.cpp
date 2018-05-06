#include <stdio.h>

int narcissistic( int number );
void PrintN( int m, int n );

int main()
{
    int m, n;

    scanf("%d %d", &m, &n);
    if ( narcissistic(m) ) printf("%d is a narcissistic number\n", m);
    PrintN(m, n);
    if ( narcissistic(n) ) printf("%d is a narcissistic number\n", n);

    return 0;
}
#include<math.h>
int narcissistic( int number )
{
  int n=0,sum=0,m,p,q;
  p=number;
  q=number;
  while(number!=0)
  {
   n++;
   number=number/10;
  }
  while(p!=0)
  {
    m=p%10;
    sum=sum+pow(m,n);
    p=p/10;
  }
  if(sum==q)
  return 1;
  else
  return 0;
}
void PrintN( int m, int n )
{
  int i;
  for(i=m+1;i<n;i++)
  {
    if(narcissistic(i)) 
    printf("%d\n",i);
  }
}