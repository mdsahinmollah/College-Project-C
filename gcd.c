#include <stdio.h>
int main(){
int a, b, gcd;
printf("> Enter any two numbers : ");
scanf("%d%d",&a,&b);

if(a>b)
{
    for(int i = 1;i<= b;i++)
    {
        if(a % i == 0 && b % i == 0)
        gcd = i;
    }
}
if(b>a)
    {
        for(int i = 1;i<= a;i++)
        {
            if(a % i == 0 && b % i == 0)
            gcd = i;
        }
   
    }
    printf("\n> GCD of %d and %d is : %d ",a, b, gcd);

return 0;
}
