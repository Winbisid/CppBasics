#include <iostream>
int main()
{
//Print I love C++ ten times
/*
std::cout << "I love C++" << std::endl;
std::cout << "I love C++" << std::endl;
std::cout << "I love C++" << std::endl;
std::cout << "I love C++" << std::endl;
std::cout << "I love C++" << std::endl;
std::cout << "I love C++" << std::endl;
std::cout << "I love C++" << std::endl;
std::cout << "I love C++" << std::endl;
std::cout << "I love C++" << std::endl;
std::cout << "I love C++" << std::endl;
*/

//do while loop : runs the body first before running the test.
const unsigned COUNT {10};
size_t i {14}; //Iterator declaration

do{
    std::cout << "[" << i << "] : I love C++" << std::endl;
    ++i; //Incrementation
} while(i<COUNT);

std::cout << "Loop finit!" << std::endl;


return 0;
}