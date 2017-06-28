/*
 * Betribssicherheit
 * Aufgabe 2 Teil a
 * Robotorsteuerung in C++
 *
 *  
 * File:   cartCoord.h
 * Author: Rudolf
 *
 * Created on 22. Mai 2017, 23:12
 */

#ifndef CARTCOORD_H
#define CARTCOORD_H

class cartCoord {
public:
    cartCoord();
    cartCoord(double x, double y, double z);
    cartCoord(const cartCoord& orig);
    virtual ~cartCoord();
    
    void linear(const cartCoord& end, const cartCoord& *a_cC, int steps); 
    void printCoord();
    
    void setX(double x);
    void setY(double y);
    void setZ(double z);
    double getX();
    double getY();
    double getZ();
    
private:
    double x,y,z;
};

#endif /* CARTCOORD_H */

