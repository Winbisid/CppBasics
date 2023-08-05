#include <iostream>

int main()
{
    /*
//Non const reference
std::cout << "Non const reference : " << std::endl;
int age {27};
const int& ref_age {age}; //Can't make a reference const if you wan't to change it's valuer later

std::cout << "age : " << age << std::endl;
std::cout << "ref_age : " << ref_age << std::endl;

//Can modify original value through reference
ref_age++;

std::cout << "age : " << age << std::endl;
std::cout << "ref_age : " << ref_age << std::endl;
std::cout << std::endl;
*/

//Simulating reference behaviour with pointers
const int *const p_age {&age};

*p_age = 45;



return 0;
}