#include <stdio.h>
int main(){
    int a, b, c;
    printf("> Enter any 3 numbers :\t");
    scanf("%d%d%d",&a,&b,&c);
if(a > b)
{
    if(a > c)
    {
        printf("%d is greater than %d & %d. ",a, b, c);
    }
    else
    {
        printf("%d is greater than %d & %d.",c, a, b);
    }
    
}
else
{
    if(b>c){
        printf("%d is greater than %d & %d. ",b, a, c);
    }
    else{
        printf("%d is greater than %d & %d. ",c, a, b);
    }
    
}

return 0;

}