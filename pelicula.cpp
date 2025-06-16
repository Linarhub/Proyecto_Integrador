//
// Created by Linarmode on 6/16/2025.
//

#include "pelicula.h"

#include <iostream>
#include <bits/ostream.tcc>

pelicula::pelicula() {
    ratings = 0;
}

void pelicula::mostrarVideo() {
    cout << "Película: " << name << endl;
    cout << "Calificación: " << ratings << endl;
}
double pelicula::operator+(pelicula const& p) {
    pelicula p2;
    double rating;
    rating = p2.ratings + p.ratings;
    return rating;
}
double pelicula::getRatings() {
    return ratings;
}