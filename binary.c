int decimalToBinary(int n)
{
   if(n==0)
     return 0;
  else
    return (n%2 + 10*decimalToBinary(n/2));
}
int main()
{
  int n;
  scanf("%d",&n);
  printf("%d",decimalToBinary(n));
}