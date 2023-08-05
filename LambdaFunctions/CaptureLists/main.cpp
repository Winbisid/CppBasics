#include <iostream>

int main(){
/*
    //Capture by value : what we have in the lambda function is a copy
    int c {42};

    auto func = [c](){
        std::cout << "Inner value : " << c << "\n";
    };

    for(size_t i{}; i < 5 ; ++i){
        std::cout << "Outer value : " << c << "\n";
        func();
        ++c;
    }
*/
/*
    //Capture by reference : Working on the original outside value
    int c {42};

    auto func = [&c](){
        std::cout << "Inner value : " << c << "\n";
    };

    for(size_t i{}; i < 5 ; ++i){
        std::cout << "Outer value : " << c << "\n";
        func();
        ++c;
    }
*/
/*
    //Capture by value : what we have in the lambda function is a copy
    int a {10};
    int b {20};
    int result = a + b;

    auto func = [result](){
        std::cout << "Inner value : " << result << "\n";
    };

    for(size_t i{}; i < 5 ; ++i){
        std::cout << "Outer value : " << result << "\n";
        func();
        ++ result;
    }
*/
/*
    //I was trying to check if i can directly use the variables(a,b) by reference in the lambda instead of storing their computation in a 'result' variable
    //Capture by reference : Working on the original outside value
    int a {10};
    int b {20};

    auto func = [&a, &b](){
        std::cout << "Inner value : " << (a+b) << "\n";
    };

    for(size_t i{}; i < 5 ; ++i){
        int result = a+b;
        std::cout << "Outer value : " << result << "\n";
        func();
        ++result;
    }
*/


return 0;
}