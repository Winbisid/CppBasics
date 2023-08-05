#include <iostream>

int main()
{

bool red_light {true};
bool green_light {false};

if (red_light){

std::cout << "STOP! It's a red light." << std::endl;
}else{
    std::cout << "The light is green. GO through!" << std::endl;
}

if (green_light){

std::cout << "GO. It's green." << std::endl;
}else{
    std::cout << "Stop! RED!" << std::endl;
}

//Printing out a bool
//1 -->> true
//0 -->> false
// std::boolalpha converts the default 1 & 0 to their words true and false
std::cout  << std::endl;

std::cout << std::boolalpha;
std::cout << "red_light is " << red_light << std::endl;
std::cout << "green_light is " << green_light << std::endl;


    return 0;
}
