#include <stdio.h>
int main()
{
    int a[2][3],i,j;
    printf("Enter numbers in matrix : ");
    for(i = 0;i < 2; i ++)
    {
        for(j =0;j<3;j++)
            scanf("%d",&a[i][j]);

    }
    

    printf("Display is matrix form");
    printf("\n");
    for(i = 0;i<2;i++)
    {
        for(j=0;j<3;j++)
            printf("%4d",a[i][j]);
            printf("\n");
    }

}
