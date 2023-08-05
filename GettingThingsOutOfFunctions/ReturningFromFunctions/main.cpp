#include <iostream>

int sum(int a, int b) {
    int result = a + b;
    std::cout << "In : &result(int) : " << &result << "\n";
    return result;
}

std::string add_string(std::string a, std::string b) {
    std::string result = a + b;
    std::cout << "In : &result(std::string) : " << &result << "\n";
    return result;
}

int main()
{
/*
//Makes a copy of the result at a different address
int a {34};
int b {16};
int result = sum(a,b);
std::cout << "Out : &result(int) : " << &result << "\n";
std::cout << "Sum : " << result << "\n";
*/

//Compiler optimizes this by storing the result in the same address as the one in the function to save space
//since strings are bigger in size. (Compiler returns by reference instead of by value)
std::string str_result = add_string(std::string("Hello "), std::string("World"));
std::cout << "Out : &result(std::string) : " << &str_result << "\n";
std::cout << "str_result : " << str_result << "\n";

return 0;
}