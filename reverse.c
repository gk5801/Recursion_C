#include <stdio.h>
int reverse(int n,int rev)
{
  if(n==0)
    return rev;
  else
   return reverse(n/10,rev*10 + n%10);
}
int main()
{
  int n;
  scanf("%d",&n);
  printf("%d",reverse(n,0));
  return 0;
}