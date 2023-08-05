#include <iostream>
/*
//Too much code copying for function overloads
int max(int a, int b){
    return (a > b) ? a : b;
}
std::string max(const std::string &a,const std::string &b){
    return (a > b) ? a : b;
}
long long int max(long long int a, long long int b){
    return (a > b) ? a : b;
}
*/
/*
//Function template to simplify above code
template<typename T> 
T max(T a, T b){
    return (a > b) ? a : b;
}
*/
template<typename T, typename T1> 
T max(T a, T1 b){
    return (a > b) ? a : b;
}

template<typename T, typename T1> 
T multiply(T a, T1 b){
    return a*b;
}

int main(){

    double x{8.52};
    int y{7};

        auto result = max(x, y);
        std::cout << "result : " << result << "\n"; 


    std::string first{"Hello"};
    std::string second{"World"};

        auto result1 = max(first, second);
        std::cout << "result1 : " << result1 << "\n"; 


        result = multiply(x,y); 
        std::cout << "result3 : " << result << "\n"; 

/*
//The type must be supported by the template
auto result2 = multiply(x,second);  //Since 'second' cannot be multiplied, ERROR!!
std::cout << "result2 : " << result2 << "\n"; 
*/
/*
//ERROR!!  It stores the address and compares them instead of the value at the address.
//So an address which is bigger lexographically than another address will be outputted as the 'max' in this case even though the value stored there might be smaller.
    int a=34;
    int b=78;
    int *p_a{&a};
    int *p_b{&b};

        auto result4 = max(p_a, p_b);
        std::cout << "result4 : " << *result4 << "\n"; 
*/

return 0;
}
