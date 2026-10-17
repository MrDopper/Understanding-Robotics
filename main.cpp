#include "Movement.hpp"
int main(){
    Movement robotMovement;
    robotMovement.getMovement(5,{10, 5});
    robotMovement.printPosition();
    return 0; 
}
