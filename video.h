//
// Created by Linarmode on 6/16/2025.
//

#ifndef VIDEO_H
#define VIDEO_H

#include <string>
using namespace std;

class video {
protected:
    int ID;
    string name;
    double length;
    string genre;
    double ratings;
public:
    video();
    video(int, string, double, string, double);
    virtual ~video() = default;
    virtual void mostrarVideo();
    virtual double getRatings();
    virtual void setRatings(double);
    virtual string getGenre();
};



#endif //VIDEO_H
