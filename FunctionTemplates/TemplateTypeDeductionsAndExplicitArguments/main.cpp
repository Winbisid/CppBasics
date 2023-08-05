#include <iostream>

template <typename T> T max(T a, T b){
    return (a>b) ? a:b;
}

int main(){

    int a{10};
    int b{23};
    double c{34.7};
    double d{23.4};
    std::string e{"Hello"};
    std::string f{"World"};


// auto maximum = max<double>(a,b);

//Explicit template arguments
auto maximum = max<double>(a,c);

std::cout << "max : " << maximum << std::endl;

return 0;
}