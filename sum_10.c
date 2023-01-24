#include <stdio.h>
int main(){
int n,sum, average;
printf("> Enter a number : ");
scanf("%d",&n);

sum = (n*(n+1))/2;          /*    Matheatical formula (n*(n+1))/2     */
average = sum/n;

printf("> The sum of %d numbers is : %d",n,sum);

printf("\n> The average of %d numbers is : %d",n,average);

return 0;

}