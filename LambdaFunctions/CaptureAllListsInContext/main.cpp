#include <iostream>

int main(){
/*
    //Capture all by value
    int c {42};

    auto func = [=](){
        std::cout << "Inner value : " << c << "\n";
    };

    for(size_t i {}; i < 5 ; ++i){
        std::cout << "Outer value : " << c << "\n";
        func();
        ++c;
    }
*/
/*
    //Capture all by reference
    int c {42};

    auto func = [&](){
        std::cout << "Inner value : " << c << "\n";
    };

    for(size_t i {}; i < 5 ; ++i){
        std::cout << "Outer value : " << c << "\n";
        func();
        ++c;
    }
*/
    int a {42};
    double b {24.121};

    auto func = [&](){
        std::cout << "Inner value (a) : " << a << "\n";
        std::cout << "Inner value (b) : " << b << "\n";
    };

    for(size_t i {}; i < 5 ; ++i){
        std::cout << "Outer value : " << a << "\n";
        std::cout << "Outer value : " << b << "\n";
        func();
        ++a;
        ++b+=0.5;
    }
return 0;
}