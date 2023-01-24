#include <stdio.h>
int main()
{
int a[10],i,n,f,k;

printf("Enter array size : ");
scanf("%d",&n);

printf("Enter the elements of array : \n");
for(i=0;i<n;i++)
{
      scanf("%d",&a[i]);
}
  printf("Enter a key which you found : \n");
  scanf("%d",&k);
f=0;
for(i=0;i<n;i++)
{
    if(a[i]==k)
    {
      f=1;
      break;
    }
}
if(f==1)
{
  printf("%d key is found in the array at position %d",k,f+1);
}
else
{
  printf("%d key is not found in the array",k);

}
return 0;
}
