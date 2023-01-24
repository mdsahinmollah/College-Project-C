#include<stdio.h>
int main(){
    int n,a[20],i=0,j;

    printf("Enter decimal number : ");
    scanf("%d",&n);

    while(n!=0)
    {
        a[i]=n%16;
        n= n/16;
        i++;
    }
    printf("decimal to hexa is : ");
    for(j=i-1;j>=0;j--)

        if(a[j]<10)
            printf("%d",a[j]);
        else
            printf("%c",a[j]+55);
}