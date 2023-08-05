#include <iostream>
int main()
{
//if statements
int max;
int a {35};
int b {20};
std::cout << std::endl;

std::cout << "Using regular if " << std::endl;

if (a>b) {
    max = a;
}else{
    max = b;
}

std::cout << "max is " << max << std::endl;

//Using ternary operator
std::cout << std::endl;

std::cout << "Using ternary expression " << std::endl;

max = (a>b) ? a : b ;

std::cout << "max is " << max << std::endl;
std::cout << std::endl;

//Ternary initialization
std::cout << "speed" << std::endl;

bool fast = false;
int speed {fast ? 300 : 150}; //If fast, speed is 300. If not, speed is 150. Therefore speed = 150 

std::cout << "The speed is " << speed << std::endl;

return 0;
}