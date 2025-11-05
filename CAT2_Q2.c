/*
Name:Mwangi Samuel
Reg No.:CT100/G/26145/25
Description:Weekly pay calculator
*/
#include <stdio.h>

int main() {
    float hours, rate;
    float grossPay, taxes, netPay;
    float overtimeHours = 0.0;

    // User input
    printf("Enter total hours worked in a week: ");
    scanf("%f", &hours);

    printf("Enter hourly wage: ");
    scanf("%f", &rate);

    // gross pay calculation
    if (hours > 40) {
        overtimeHours = hours - 40;
        grossPay = (40 * rate) + (overtimeHours * rate * 1.5);
    } else {
        grossPay = hours * rate;
    }

    // Calculate taxes
    if (grossPay <= 600) {
        taxes = 0.15 * grossPay;
    } else {
        taxes = (0.15 * 600) + (0.20 * (grossPay - 600));
    }

    // Calculate net pay
    netPay = grossPay - taxes;

    // Results
    printf("\n PAY SLIP \n");
    printf("Hours Worked : %.2f\n", hours);
    printf("Hourly Wage  : $%.2f\n", rate);
    printf("Gross Pay    : $%.2f\n", grossPay);
    printf("Taxes        : $%.2f\n", taxes);
    printf("Net Pay      : $%.2f\n", netPay);

    return 0;
}
