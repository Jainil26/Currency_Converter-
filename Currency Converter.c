#include <stdio.h>

int main(){
    float amount;
    int a;
    printf("---Welcome to Currency Converter---\n\n");
    printf("Press ENTER to start\n");
    getchar();

    printf("Enter the amount to convert : ");
    scanf("%f",&amount);
    printf("---Select Currency to convert---\n\n");
    printf("1) USD to INR\n2)EUR to INR\n3)Pound to INR\n");
    scanf("%d",&a);

   switch(a)
   {
        case 1: 
          printf("The amount in USD is %2.f",amount*83.0);
          break;
        case 2:
          printf("The amount in EUR is %2.f",amount*88.0);
          break;
        case 3:
          printf("The amount in POUND is %2.f",amount*107.0);
          break;
   }
   return 0;
}