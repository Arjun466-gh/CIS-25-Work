#include <iostream>

using namespace std;

int main() {
    int score;
    
    // Take input from user
    cout << "Enter the student's score: ";
    cin >> score;

    // Grade evaluation
    if (score < 60) {
        cout << "Fail" << endl;
    } else if (score >= 60 && score <= 69) {
        cout << "Pass" << endl;
    } else if (score >= 70 && score <= 89) {
        cout << "Good" << endl;
    } else {
        cout << "Excellent" << endl;
    }

    return 0;
}
