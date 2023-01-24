// write a program to calculate the area of a right angle triangle....


// #include <stdio.h>
// int main(void){
//     float base, height;
//     printf("enter your base : ");
//     scanf("%f", &base);

//     printf("enter your height : ");
//     scanf("%f",&height);

//     printf("The area is : %f",0.5 * base * height);
//     return 0;
// }



#include <stdio.h>
int main(void){
    float base, height;
    printf("enter base and height : ");
    scanf("%f%f", &base,&height);

    
    printf("The area is : %f%f",0.5 * base * height);
    return 0;
}