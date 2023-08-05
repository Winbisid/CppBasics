#include <iostream>
#include <cmath>
/*
int countdown(int n){
    if(n==0){
    std::cout << "BlastOff!" << "\n";
    }else{    
    std::cout << n << "\n";
    return countdown(n-=1);   
    }
    return 0;
}
*/

//Try doing the above with a for loop
// int countdown(int n){
//     for(int i = 0; i < n ; ++i){
//         std::cout << n << "\n";
//     } 
// }
/*
void enter_bar(size_t age){
    if(age>=18){
        std::cout << "You're " << age << " years old. Please proceed.\n";
    } else{
        std::cout << "You're " << age << " years old. You're too young to continue.\n";
    }
    return ;
}*/

// int max(int a, int b); //Prototype of the function placed here so the compiler has access to it at the beginning
// void say_hello();

//Takes no parameters and returns something
/*
int lucky_number(){
    return 99;
}*/
//Parameters passed this way are scoped locally in the function.
//Changes to them are not visible outside the function. 
//What we have inside the function are actually copies of the arguments passed to the function.
double increment_multiply(double a, double b){
    std::cout << "Inside function, before increment : \n";
    std::cout << "a : " << a << "\n";
    std::cout << "b : " << b << "\n";

    double result =((a++)) * ((b++));

    std::cout << "Inside function, after increment : \n";
    std::cout << "a : " << a << "\n";
    std::cout << "b : " << b << "\n";
    return result;
}

int main()
{
/*
std::cout << countdown(5);

std::cout << 
enter_bar(floor(17.9));

for (size_t i = 0 ; i < 20 ; ++i){
    enter_bar(i);
}*/
/*
int result = max (23, 40);
std::cout << "max is " << result << "\n";*/

// say_hello();

/*
int result {0};
result= lucky_number();
std:: cout << "Lucky number is " << result << "\n";*/

double h{3.00};
double i{4.00};

    std::cout << "Outside function, before increment : \n";
    std::cout << "h : " << h << "\n";
    std::cout << "i : " << i << "\n";

    double incr_mult_result = increment_multiply(h, i);

    std::cout << "Outside function, after increment : \n";
    std::cout << "h : " << h << "\n";
    std::cout << "i : " << i << "\n";

return 0;
}
/*
//Function that takes multiple parameters and returns the result of the computation
int max(int a, int b){
    if (a>b){
        return a;
    }else{
        return b;
    }
}*/
/*
//Function that doesn't take parameters and returns nothing
void say_hello(){
    std::cout << "Hello there! " << "\n";
}*/