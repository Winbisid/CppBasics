#include <iostream>

void say_age(int age);

int main(int argc, char **argv)
{

    int age {23};   //Local

    std::cout << "Age - before : " << age << ", &age : " << &age << "\n";
    say_age(age);   //Argument
    std::cout << "Age - after : " << age << ", &age : " << &age << "\n";



return 0;
}

void say_age(int age){  //Parameter
    ++age;
    std::cout << "You are now " << age << " years old, &age : " << &age << "\n";
}