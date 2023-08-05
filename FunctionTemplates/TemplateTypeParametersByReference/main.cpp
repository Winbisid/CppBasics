#include <iostream>

// template <typename T> T max(T a , T b); //Printing by value

template <typename T>const T& max(const T &a ,const T &b); //Printing by reference

int main(){

    double a{23.5};
    double b{15.2};
/*
    //Printing by value
    std::cout << "Out(before) &a : " << &a << "\n";
    auto result = max(a,b);
    std::cout << "Out(after) &a : " << &a << "\n";
*/

    //Printing by reference
    std::cout << "Out(before) &a : " << &a << "\n";
    auto result = max(a,b);
    std::cout << "Out(after) &a : " << &a << "\n";

return 0;
}
/*
template <typename T> T max(T a , T b){
    std::cout << "In &a : " << &a << "\n";
    return (a>b)? a:b;
}
*/

template <typename T>const T& max(const T& a ,const T& b){
    std::cout << "In &a : " << &a << "\n";
    return (a>b)? a:b;
}
