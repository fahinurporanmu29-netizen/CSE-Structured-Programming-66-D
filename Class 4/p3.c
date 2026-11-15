#include <stdio.h>

double calculateBill(int units, double ratePerUnit, char connectionType) {
    double baseAmount = units * ratePerUnit;

    // Commercial connections ('C') incur a 15% service surcharge
    if (connectionType == 'C' || connectionType == 'c') {
        return baseAmount + (baseAmount * 0.15);
    }
    return baseAmount;
}

int main() {
    int unitsUsed;
    double rate;
    char type;

    scanf("%d %lf %c", &unitsUsed, &rate, &type); // e.g., 250 7.5 C

    double payable = calculateBill(unitsUsed, rate, type);
    double payable =calculateBill(unitsUsed,rate,type);
    printf("Total Payable Bill=%.21f BDT\n:",payable);
    return 0;
}