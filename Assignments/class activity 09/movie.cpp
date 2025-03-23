#include "Movie.hpp"

void Movie::input() {
    cout << "Enter movie title: ";
    getline(cin, title);
    while (title.empty()) {
        cout << "Title can't be empty. Enter again: ";
        getline(cin, title);
    }

    cout << "Enter director name: ";
    getline(cin, director);
    while (director.empty()) {
        cout << "Director can't be empty. Enter again: ";
        getline(cin, director);
    }

    cout << "Enter movie duration in minutes: ";
    while (!(cin >> details.duration) || details.duration <= 0) {
        cout << "Invalid input. Enter a positive number: ";
        cin.clear();
        cin.ignore(1000, '\n');
    }

    cout << "Enter movie rating (0.0 to 10.0): ";
    while (!(cin >> details.rating) || details.rating < 0 || details.rating > 10) {
        cout << "Invalid rating. Enter a value between 0.0 and 10.0: ";
        cin.clear();
        cin.ignore(1000, '\n');
    }

    cout << "Is the movie popular? (1 for Yes / 0 for No): ";
    while (!(cin >> details.isPopular)) {
        cout << "Enter 1 (Yes) or 0 (No): ";
        cin.clear();
        cin.ignore(1000, '\n');
    }

    cin.ignore(); 
}

void Movie::print() const {
    cout << *this;
}

// Overloaded stream insertion operator
ostream& operator<<(ostream& out, const Movie& m) {
    out << "Movie Title: " << m.title << "\n"
        << "Director: " << m.director << "\n"
        << "Duration: " << m.details.duration << " minutes\n"
        << "Rating: " << m.details.rating << "/10\n"
        << "Popular: " << (m.details.isPopular ? "Yes" : "No") << endl;
    return out;
}
