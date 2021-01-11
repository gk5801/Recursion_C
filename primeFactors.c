#include <stdio.h>
int prime(int n)
{
 int a; 
 for(a=2;a<=n;a++)
 {
  if(n%a==0)
  {
   printf("%d\n",a);
   prime(n/a);
   break;
  }
 }
}

int main()
{
   int no;
   scanf("%d",&no);
   prime(no);
   return 0;
}