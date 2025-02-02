#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Title of the report
    cout << setw(30) << "Daily Report" << endl << endl;

    // Column Headers
    cout << left << setw(10) << "ID" << setw(15) << "Name" << right << setw(10) << "Balance" << endl;
    cout << "--------------------------------------" << endl;

    // Data Entries
    cout << left << setw(10) << setfill('0') << 1
         << setw(15) << setfill(' ') << "Alice"
         << right << setw(10) << fixed << setprecision(2) << "$1000.00" << endl;

    cout << left << setw(10) << setfill('0') << 2
         << setw(15) << setfill(' ') << "Bob"
         << right << setw(10) << fixed << setprecision(2) << "$530.25" << endl;

    cout << left << setw(10) << setfill('0') << 3
         << setw(15) << setfill(' ') << "Charlie"
         << right << setw(10) << fixed << setprecision(2) << "$2040.50" << endl;

    return 0;
}
