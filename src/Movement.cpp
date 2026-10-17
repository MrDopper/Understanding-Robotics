#include "Movement.hpp"

Movement::Movement(){
    headPosition = 0;
    position = {0, 0};
}
void Movement::getMovement(int angle, vector<int>position){
    this->headPosition = angle;
    this->position = position;
}
void Movement::printPosition(){
    cout << "the current head position is: " << headPosition << endl;
    cout << "the current x position is: " << position[0] << "the current y position is: " << position[1] << endl;
}
