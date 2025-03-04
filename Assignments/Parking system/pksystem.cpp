#include <iostream>
#include <memory>
#include <limits>

using namespace std;

class Car {
public:
    Car(string model) : model(model) {}
    void display() { cout << "Car: " << model << endl; }
private:
    string model;
};

void moveCar(unique_ptr<Car>& from, unique_ptr<Car>& to) {
    if (!from) {
        cout << "No car in this spot.\n";
        return;
    }
    to = move(from);
    cout << "Car moved to new spot.\n";
}

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
    unique_ptr<Car> spot1 = make_unique<Car>("Tesla");
    unique_ptr<Car> spot2 = nullptr;

    cout << "Move car from spot 1 to spot 2? (1: Yes, 2: No)\n";
    int choice = getValidInput(1, 2);
    
    if (choice == 1) {
        moveCar(spot1, spot2);
    }

    if (!spot1 && !spot2) {
        cout << "Car removed from parking.\n";
    }
    
    return 0;
}
