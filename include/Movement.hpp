#include <vector>
#include <iostream>
#pragma once
using std::vector, std::endl, std::cout;
class Movement{
    private: 
        int headPosition;
        vector<int> position;
    public:
        Movement();
        void getMovement(int angle, vector<int>positions);
        void printPosition();
        void moveForward(double distance);
        void turn(double angle);
};