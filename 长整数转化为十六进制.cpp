#include <stdio.h>
#define MAXN 10

void f( long int x, char *p );

int main()
{
    long int x;
    char s[MAXN] = "";

    scanf("%ld", &x);
    f(x, s);
    printf("%s\n", s);

    return 0;
}
#include <string.h>
void f( long int x, char *p )
{
  char table[16]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
  long int n=(x>=0)?x:-x;
  if(x==0) {
    p[0]='0';
    return;
  }
  int i=0;
  while(n!=0)
  {
    p[i]=table[n%16];
    i++;
    n/=16;
  }
  if(x<0) {
  	p[i]='-';
  }
  int t=strlen(p);
  for(int i=0;i<t/2;i++) {
    char temp=p[i];
    p[i]=p[t-i-1];
    p[t-i-1]=temp;
  }
}