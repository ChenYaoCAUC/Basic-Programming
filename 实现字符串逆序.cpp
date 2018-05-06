#include <stdio.h>
#define MAXS 20

void f( char *p );
void ReadString( char *s ); /* 由裁判实现，略去不表 */

int main()
{
    char s[MAXS];

    ReadString(s);
    f(s);
    printf("%s\n", s);

    return 0;
}
void f( char *p )
{
  int x,y;
  char temp;
  x=0;
  y=strlen(p)-1;
  for(;x<y;x++,y--)
  {
    temp=p[x];
    p[x]=p[y];
    p[y]=temp;
  }
  return p;
}
// void f( char *p ) { 
//   int n=0;
//   char temp;
  // char *q=p;
  // for(;*q!='\0';q++)
  // {
  //   n++;
  // }
  // for(n=0;p[n]!='\0';n++) ;
  // int i=0,j=n-1;
//   for(;i<j;i++,j--) {
//     temp=p[i];
//     p[i]=p[j];
//     p[j]=temp;
// //   }
//   for(i=0;i<n/2;i++)
//   {
//     temp=p[i];
//     p[i]=p[n-i-1];
//     p[n-1-i]=temp;
//   }
// }
