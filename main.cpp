/*
 * Betribssicherheit
 * Aufgabe 2 Teil a
 * Robotorsteuerung in C++
 *
 *   
 * File:   main.cpp
 * Author: Rudolf Baun
 *
 * Created on 22. Mai 2017, 11:39
 */
#include <vector>
#include <iostream>
#include "header/Vector.h"
#include "header/Robot.h"

#define SIZE 10

using namespace std;


int main(void) {
    
    Vector start (10.0,11.0,150.0);
    Vector end (20.0,-10.0,160.0);
    Robot robot (233.0, 147.0 ,60);
    std::vector<Vector> line;
    std::vector<MotorPos> motorPos;
    
    line = start.linear(end, SIZE);
    
    /*
    for(int i = 0; i < points.size(); i++) {
        std::cout << i+1 << std::endl;
        points[i].printCoord();
    }
    */
    
    motorPos = robot.inverse(line);
    
    robot.drive(motorPos);
    
    return 0;
}

