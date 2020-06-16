#include<stdio.h>
int lcm(int a,int b);
int main()
{
int num 1,num 2, Lcm;
printf("Enter any two numbers to find Lcm:");
scanf("%d%d",&num 1,&num 2);
if(num 1>num 2)
Lcm=lcm(num 1,num 2);
printf("Lcm of %d and %d=%d,num 1,num 2,Lcm);
return 0;
}
int Lcm(int a,int b)
{
static int multiple =0;
multiple +=b;
if(( multiple %a==0)&&(multiple %b==0))
{
return multiple;
}
else
{
return Lcm(a,b);
}
}
