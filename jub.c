// Write a program to calculate the simple interest......

// #include <stdio.h>
// int main(){

// float p, r, t;
// printf("Enter the principle amount : ");
// scanf("%f", &p);

// printf("Enter the rate of interest : ");
// scanf("%f", &r);

// printf("Enter the time : ");
// scanf("%f", &t);
// printf("The simple interest is : %f",(p * r * t)/100);

// return 0;
// }

#include <stdio.h>
int main(){

float p, r, t;
printf("Enter principle, rate and time : ");
scanf("%f%f%f", &p,&r,&t);


printf("The simple interest is : %f%f%f",(p * r * t)/100);

return 0;
}