#include<stdio.h>
#include<math.h>
float square(float n)
{
float sr=sqrt(n);
return sr;
}
int main()
{
float n,sr;
printf("enter the no\n");
scanf("%f",&n);
 sr=square(n);
printf("square root of the number is %f\n",sr);
return 0;
}
