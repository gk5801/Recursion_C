int power(int base, int exp)
{
   if(exp==0) 
     return 1;
  if(exp==1)
    return base;
  else
    return base*power(base,exp-1); 
}
int main()
{
  int n;
  scanf("%d %d",&base,&exp);
  printf("%d",power(base,exp));
}