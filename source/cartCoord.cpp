/*
 * Betribssicherheit
 * Aufgabe 2 Teil a
 * Robotorsteuerung in C++
 *
 *   
 * File:   cartCoord.cpp
 * Author: Rudolf
 * 
 * Created on 22. Mai 2017, 23:12
 */

#include "cartCoord.h"

cartCoord::cartCoord() {
    this->x = 0.0;
    this->y = 0.0;
    this->z = 0.0;
}

cartCoord::cartCoord(double x, double y, double z) {
    this->x = x;
    this->y = y;
    this->z = z;
}

cartCoord::cartCoord(const cartCoord& orig) {
    this->x = orig.x;
    this->y = orig.y;
    this->z = orig.z;
}

cartCoord::~cartCoord() {
}

