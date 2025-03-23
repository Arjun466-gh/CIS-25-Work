#ifndef MOVIE_HPP
#define MOVIE_HPP

#include <iostream>
#include <string>
using namespace std;

struct MovieDetails {
    int duration;          
    float rating;          
    bool isPopular;
};

struct Movie {
    string title;
    string director;
    MovieDetails details;

    void input();  // function to take input with validation
    void print() const;
};

// Overload << operator
ostream& operator<<(ostream& out, const Movie& m);

#endif
