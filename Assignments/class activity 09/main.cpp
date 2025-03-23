#include <iostream>
#include "Movie.hpp"
using namespace std;

int main() {
    Movie myMovie;
    myMovie.input();     // Take user input with validation
    cout << "\nMovie Info:\n";
    myMovie.print();     
    return 0;
}
