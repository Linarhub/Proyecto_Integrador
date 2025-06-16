//
// Created by Linarmode on 6/16/2025.
//

#include "serie.h"

#include <iostream>
#include <bits/ostream.tcc>

serie::serie() {
    vector<int> episodes = {};
    vector<double> ratingsEp = {};
    vector<string> epTitle = {};
    vector<int> season = {};
}
void serie::mostrarVideo() {
    cout << "Serie: " << name << endl;
    cout << "Calificación: " << ratings << endl;
}
void serie::promedioCapítulos() {
    double totRatings = 0;
    for (int i = 0; i < ratingsEp.size(); i++) {
        totRatings += ratingsEp[i];
    }
    double promedio = totRatings / ratingsEp.size();
    cout << "La calificación promedio de los capítulos: " << promedio << endl;
}
double serie::getRatings() {
    return ratings;
}