#include<stdio.h>
int main(){
    int num1, num2, rem, gcd, lcm;
    
    printf("Enter two positive value :");
    scanf("%d %d", &num1, &num2);
    
    int a = num1;
    int b = num2;
    
    while(b != 0){
        rem = a%b;
        a = b;
        b = rem;      
    }
    gcd = a;
    printf("The GCD value is : %d\n", gcd);
    
    lcm = (num1 * num2)/gcd;
    printf("The LCM value is : %d\n", lcm);
    return 0;
}