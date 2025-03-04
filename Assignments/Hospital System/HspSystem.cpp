#include <iostream>
#include <memory>
#include <vector>
#include <limits>

using namespace std;

class PatientRecord {
public:
    PatientRecord(string name) : name(name) {}
    void display() { cout << "Patient: " << name << endl; }
    ~PatientRecord() { cout << "Patient record deleted from the system.\n"; }
private:
    string name;
};

int getValidInput(int min, int max) {
    int input;
    while (true) {
        cout << "Enter a number (" << min << "-" << max << "): ";
        if (cin >> input && input >= min && input <= max) {
            return input;
        } else {
            cout << "Invalid input! Try again.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    }
}

int main() {
    shared_ptr<PatientRecord> patient = make_shared<PatientRecord>("John Doe");
    vector<shared_ptr<PatientRecord>> doctors;

    cout << "How many doctors are viewing the record? (1-5):\n";
    int numDoctors = getValidInput(1, 5);

    for (int i = 0; i < numDoctors; i++) {
        doctors.push_back(patient);
    }

    cout << "Doctor wants to stop seeing patient? (1: Yes, 2: No)\n";
    int choice = getValidInput(1, 2);
    
    if (choice == 1 && !doctors.empty()) {
        doctors.pop_back();
        cout << "One doctor removed.\n";
    }

    if (doctors.empty()) {
        cout << "All doctors removed. ";
    }

    return 0;
}
