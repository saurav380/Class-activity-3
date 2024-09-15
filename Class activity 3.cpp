#include <iostream>
#include <cstdlib>
#include <ctime>

int main(){

    std::srand(std::time(0));
    
    const int minvalue = 1;
    const int maxvalue = 6;
    
    //Generate two random values between 1 and 6

    int dice1= (std::rand() %(maxvalue-minvalue+1))+minvalue;
    int dice2= (std::rand() %(maxvalue-minvalue+1))+minvalue;

    std::cout<<"Dice 1:"<<dice1<<std::endl;
    std::cout<<"Dice 2:"<<dice2<<std::endl;

    return 0;
 
}