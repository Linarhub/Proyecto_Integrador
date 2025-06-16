//
// Created by Linarmode on 6/16/2025.
//

#include "video.h"

#include <iostream>
#include <stdexcept>
#include <utility>
#include <bits/ostream.tcc>

video::video() {
    ID = 0;
    name = "Super Duper Fly II";
    length = 1.2;
    genre = "accion";
    ratings = 3.7;
}
video::video(int id, string name, double length, string genre, double ratings) {
    if (id <= 0) {
        throw invalid_argument("Invalid ID");
    }
    this->ID = id;
    this->name = move(name);
    if (length < 0) {
        throw invalid_argument("Invalid length");
    }
    this->length = length;
    if (genre != "accion" && genre != "misterio" && genre != "drama") {
        throw invalid_argument("Invalid genre");
    }
    this->genre = genre;
    if (ratings < 0) {
        throw invalid_argument("Invalid rating");
    }
    if (ratings > 5) {
        throw invalid_argument("Invalid rating");
    }
    this->ratings = ratings;
}
void video::mostrarVideo() {
    cout << "ID: " << ID << endl;
    cout << "Name: " << name << endl;
    cout << "Length: " << length << endl;
    cout << "Genre: " << genre << endl;
    cout << "Ratings: " << ratings << endl;
}
double video::getRatings() {
    return ratings;
}
void video::setRatings(double rat) {
    ratings = rat;
}
string video::getGenre() {
    return genre;
}