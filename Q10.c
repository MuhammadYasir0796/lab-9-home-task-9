#include <stdio.h>
int hcf(int num1,int num2);
int lcm(int num1,int num2);
int main(){
    int num1,num2,chose;
    printf("Enter number #1: ");
    scanf("%d",&num1);
    printf("Enter number #2: ");
    scanf("%d",&num2);
    printf("\nChose from above\nPress 1 for HCF\nPress 2 for LCM\nChose: ");
    scanf("%d",&chose);
    switch (chose)
    {
    case 1:
        printf("%d",hcf(num1,num2));
        break;
    case 2:
        printf("%d",lcm(num1,num2));
        break;
    
    default:
        printf("Invalid input");
        break;
    }
    return 0;
}
int hcf(int num1,int num2){
    while (num2 != 0) {
        int temp = num2;
        num2 = num1 % num2;
        num1 = temp;
    }
    return num1; 
}
int lcm(int num1,int num2){
    int hcfL=hcf(num1,num2);
    return (num1*num2)/hcfL;
}