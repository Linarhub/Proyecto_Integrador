//
// Created by Linarmode on 6/16/2025.
//

#ifndef SERIE_H
#define SERIE_H

#include "video.h"
#include <vector>

class serie : public video{
protected:
    vector<int> episodes;
    vector<double> ratingsEp;
    vector<string> epTitle;
    vector<int> season;
public:
    serie();
    ~serie() override = default;
    serie(vector<int> episodes, vector<double> ratingsEp, vector<string> epTitle, vector<int> season, int ID, string name, double length,
        string genre, double ratings) : video( ID, name, length, genre, ratings) {};
    void mostrarVideo() override;
    void promedioCapítulos();
    double getRatings() override;
};



#endif //SERIE_H
