#include <stdio.h>
int GCD(int a, int b)
{
  if(a==0)
   return b;
  if(b==0)
   return a;
  if(a<0 || b<0)
    return a*(-1);
  if(a>b)
    return GCD(a-b,b);
  return GCD(a,b-a);
}
int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    printf("%d",GCD(x,y));
    return 0;
}