//first include standard io
//second declare variables
//third make interface where user can input cost, tax, and tip
//fourth create "Bill" that shows all inputs
//fifth calculation for total and print total
#include <stdio.h>
int main(){
    float meal,tax,tip,total;

    printf("Enter meal cost:");
    scanf("%f", &meal);

    printf("Enter tax percentage:");
    scanf("%f", &tax);

    printf("Enter tip percentage:");
    scanf("%f", &tip);

    printf("\n$$$$$Bill$$$$$\n");
    printf("Cost: $%.2f\n",meal);
    printf("Tax: $%.2f\n",(tax/100)*meal);
    printf("Tip: $%.2f\n",(tip/100)*meal);

    total= meal + (tax/100)*meal + (tip/100)*meal;
    printf("Total: %.2f",total);

    return 0;
}