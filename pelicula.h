//
// Created by Linarmode on 6/16/2025.
//

#ifndef PELICULA_H
#define PELICULA_H

#include "video.h"
#include <string>
using namespace std;

class pelicula : public video{
public:
    pelicula();
    pelicula(int ID, string name, double length, string genre, double ratings) : video( ID, name, length, genre, ratings) {};
    void mostrarVideo() override;
    double operator+(pelicula const& p);
    double getRatings() override;
};



#endif //PELICULA_H
