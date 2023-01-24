#include <stdio.h>
int main(){
    int x, y;
    printf("Enter a number : ");
    scanf("%d",&x);
    // x = 9;
    y = 1;

    do{
        printf("%d x %d = %d\n",x,y,x*y);
        y++;
    }
    while(y<=10);
    return 0;
}