#include <iostream>
int main()
{
//Print I love C++ 10 times
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

//Using for loop with initialization inside the loop. (The scope of the iterator is local)
//Bad practice if you want to change the loop value later.
/*
for (unsigned x {10}; x < 10 ; ++x){
    std::cout << x << ": I love C++" << std::endl;
    }
*/

//Using for loop with initialized variables outside the loop for better code flexibility (if you want to change the value later)
size_t i {};        //Iterator defined outside scope
const size_t count {10};  //Test defined outside scope. 

for (i; i<count ; ++i){
    std::cout << i << ": I love C++" << std::endl;
    }

std::cout << "Loop is done" << std::endl;

return 0;
}