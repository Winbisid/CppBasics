#include <iostream>
int main()
{
//Print I love C++ ten times
/*
    std::cout << ": I love C++" << std::endl;
    std::cout << ": I love C++" << std::endl;
    std::cout << ": I love C++" << std::endl;
    std::cout << ": I love C++" << std::endl;
    std::cout << ": I love C++" << std::endl;
    std::cout << ": I love C++" << std::endl;
    std::cout << ": I love C++" << std::endl;
    std::cout << ": I love C++" << std::endl;
    std::cout << ": I love C++" << std::endl;
    std::cout << ": I love C++" << std::endl;
*/

//Using while loop
const size_t COUNT {10};
unsigned int i {}; //Iterator declaration

while (i<COUNT){
    std::cout << i << ": I love C++" << std::endl;
    ++i; //Incrementation
}
 std::cout << "Loop la baaya" << std::endl;

return 0;
}