int lcm(int a,int b)
{
   static multiple=0;
   multiple+= b;
   if(multiple%a==0 && multiple%b ==0)
      return multiple ;
   else  
     return lcm(a,b);
}

int main()
{
int n1,n2;
scanf("%d %d",&n1,&n2);
if(n1>n2)
  lcm(n2,n1)
else 
  lcm(n1,n2)
}

