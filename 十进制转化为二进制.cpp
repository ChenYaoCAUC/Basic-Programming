#include <stdio.h>

void dectobin( int n );

int main()
{
    int n;

    scanf("%d", &n);
    dectobin(n);

    return 0;
}
#include<string.h>
void dectobin( int n )
{
  int m,i=0;
  char a[80];
  if(n==0) {
    printf("0");
    return;
  }
  while(n!=0)
  {
    a[i]=n%2 + '0';
    n=n/2;
    i++;
  }
  a[i+1]='\0';
  m=strlen(a);
  for(i=m-1;i>=0;i--)
  {
    printf("%c",a[i]);
  }
}