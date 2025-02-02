#include <iostream>
#include <iomanip>
using namespace std;

void convertCurrency(double amount, double rate) {
    cout << fixed << setprecision(2);
    cout << "Converted amount: " << amount * rate << endl;
}

int main() {
    double usdToEur = 0.92, usdToGbp = 0.78, usdToJpy = 110.15;
    double eurToUsd = 1.09, gbpToUsd = 1.28, jpyToUsd = 0.0091;
    double amount, rate = 0;
    int from, to;

    cout << "Enter amount: ";
    cin >> amount;

    cout << "Select currency to convert from (1-USD, 2-EUR, 3-GBP, 4-JPY): ";
    cin >> from;

    cout << "Select currency to convert to (1-USD, 2-EUR, 3-GBP, 4-JPY): ";
    cin >> to;

    if (from == to) {
        cout << "Same currency selected. No conversion needed." << endl;
        return 0;
    }

    switch (from) {
        case 1: 
            rate = (to == 2) ? usdToEur : (to == 3) ? usdToGbp : usdToJpy;
            break;
        case 2: 
            rate = (to == 1) ? eurToUsd : (to == 3) ? (eurToUsd * usdToGbp) : (eurToUsd * usdToJpy);
            break;
        case 3: 
            rate = (to == 1) ? gbpToUsd : (to == 2) ? (gbpToUsd * usdToEur) : (gbpToUsd * usdToJpy);
            break;
        case 4: 
            rate = (to == 1) ? jpyToUsd : (to == 2) ? (jpyToUsd * usdToEur) : (jpyToUsd * usdToGbp);
            break;
        default:
            cout << "Invalid currency selection." << endl;
            return 1;
    }

    convertCurrency(amount, rate);
    return 0;
}
