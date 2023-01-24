#include<stdio.h>
int main(){
    int n,a[20],i=0,j;

    printf("Enter decimal number : ");
    scanf("%d",&n);

    while(n!=0)
    {
        a[i]=n%8;
        n= n/8;
        i++;
    }
    printf("decimal to octal is : ");
    for(j=i-1;j>=0;j--)
        printf("%d",a[j]);
}