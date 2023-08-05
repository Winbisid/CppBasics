#include <iostream>

void say_age (int *age);    //Declaration

int main()
{
    int age{23};    //Local
    std::cout << "age - before : " << age << "\n";
    say_age(&age);  //Argument
    std::cout << "age - after : " << age << "\n";
return 0;
}

void say_age (int *age){    //Parameter
    ++(*age);
    std::cout << "Hello! You are " << *age << " years old.\n";
}