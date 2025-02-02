#include <iostream>

using namespace std;

int main() {
    int age;
    
    // Get input from user
    cout << "Enter your age: ";
    cin >> age;

    // Classify age group
    if (age < 12) {
        cout << "Child" << endl;
    } else if (age >= 12 && age <= 19) {
        cout << "Teen" << endl;
    } else if (age >= 20 && age <= 64) {
        cout << "Adult" << endl;
    } else {
        cout << "Senior" << endl;
    }

    return 0;
}
