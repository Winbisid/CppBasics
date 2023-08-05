#include <iostream>
int main()
{
    int var1 {123}; //Declare and initialize
    std::cout << "var1: " << var1 << std::endl;

    var1 = 55; //Assign new value
    std::cout << "var1: " << var1 << std::endl;

std::cout << std::endl;
std::cout << "---------------------------" << std::endl;

    double var2 {44.55}; //Declare and initialize
    std::cout << "var2: " << var2 << std::endl;

    var2 = 99.99; //Assign new value
    std::cout << "var2: " << var2 << std::endl;

std::cout << std::endl;
std::cout << "---------------------------" << std::endl;

    bool state {true}; //Declare and initialize
    std::cout << std::boolalpha;

    std::cout << "state: " << state << std::endl;

    state = false; //Assign new value
    std::cout << "state: " << state << std::endl;
    
std::cout << std::endl;
std::cout << "---------------------------" << std::endl;

    //Auto type deduction
    //Careful about auto assignments
    auto var3 {333u};   //Declare and initialize with type deduction

    var3 = -22; //Assign negative number. DANGER! auto above is unsigned so only positive numbers
                //Compiler puts in garbage value
                
    std::cout << "var3: " << var3 << std::endl;

    return 0;
}