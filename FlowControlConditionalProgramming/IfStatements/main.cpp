#include <iostream>
int main()
{
int number1 {55};
int number2 {60};

bool result {number1 < number2}; //Expression yielding the condition 
std::cout << std::boolalpha << "result : " << result << std::endl;
std::cout << std::endl;

std::cout << "Free standing if statement" << std::endl;

//if(result)
if (result == true){
    std::cout << number1 << " is less than " << number2 << std::endl;
}

//if !(result)
if (!(result == true)){
    std::cout << number1 << " is NOT less than " << number2 << std::endl;
}

std::cout << "--------------------------------------------" <<std::endl;

std::cout << "if and else statement" << std::endl;

//if
if (result == true){
    std::cout << number1 << " is less than " << number2 << std::endl;
}
//else
else{
    std::cout << number1 << " is NOT less than " << number2 << std::endl;
}

std::cout << "--------------------------------------------" <<std::endl;

//Using the expression as a condition. The expression must evaluate to a bool (true/false)
std::cout << "expression as a condition" << std::endl;

if (number1 < number2){
    std::cout << number1 << " is less than " << number2 << std::endl;
}else{
    std::cout << number1 << " is NOT less than " << number2 << std::endl;
}
std::cout << std::endl;

//Traffic light 
bool red = false;
bool green {true};
bool yellow {false};
bool police_stop {true};

if (red){
    std::cout << "STOP" << std::endl;
} 
if (yellow){
    std::cout << "Slow down" << std::endl;
}
if (green){
    std::cout << "GO" << std::endl;
}

std::cout << "--------------------------------------------" <<std::endl;

//Nested Conditions
std::cout << "Police officer stops(verbose)" << std::endl;

if (green){
    if(police_stop){
        std::cout << "STOP" << std::endl;
    }else{
        std::cout << "GO" << std::endl;
    }
}

std::cout << "--------------------------------------------" <<std::endl;

//Nested alternatives
if (green && !police_stop){
        std::cout << "GO" << std::endl;
    }else{
        std::cout << "STOP" << std::endl;
}

return 0;
}
