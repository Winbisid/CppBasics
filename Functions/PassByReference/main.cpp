#include <iostream>

void say_age(int &age);

int main()
{

int age {23};

std::cout << "age - before : " << age << ", &age : " << &age <<"\n";
say_age(age);
std::cout << "age - after : " << age << ", &age : " << &age << "\n";

return 0;
}

void say_age(int &age){
    ++age;
    std::cout << "Hello! You're  " << age  << " years old." << " &age : " << &age << "\n";
}