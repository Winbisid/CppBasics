#include <iostream>

int main()
{
    /*
//Declaring and naming a lambda function and calling it with its name
auto test = [](){
    std::cout << "Hello World!\n";
};
test();
*/
/*
//Declaring a lambda function and calling it directly without naming
[](){
    std::cout << "Hello World!\n";
}();
*/
/*
//Declaring a lambda function in a statement and calling its return value directly
std::cout << "result : " << [](double a, double b) {
return (a+b);
}(12.1,5.7) << "\n";
*/
/*
//Lambda function that takes parameters
[](double a, double b)->double {
    std::cout << "a+b : "<< (a+b) << "\n";
}(12.1,5.7);
*/
/*
//Lambda function with name/handle that takes parameters so that it can be called multiple times
auto sum = [](double a, double b) {
    std::cout << "a+b : "<< (a+b) << "\n";
    // return (a+b);
};
sum(12.3,12.7);
sum(34,3.34);
*/
/*
//Lambda function that returns value
auto sum = [](double a, double b) {
    return (a+b);
};
std::cout << sum(12.32,12.7) <<"\n";
std::cout << sum(34,3.34) <<"\n";

auto result = [](double a, double b) {
    return (a+b);
}(5.35,32.7);
std::cout << "result : " << result << "\n";
*/
/*
auto result = [](double a, double b) {
    return (a+b);
};
auto func = result(35,7.34);
auto func1 {result(53.4,73.5)};

std::cout << "result1 : " << func << "\n";
std::cout << "result2 : " << func1 << "\n";
std::cout << "direct call : " << result(5,2) << "\n";
*/

//Lambda function whose return type is specified
auto result = [](double a, double b) ->int{
    return (a+b);
};
auto result1 = [](double a, double b){
    return (a+b);
};

std::cout << "result : " << result(5.4,22.5) << "\n";
std::cout << "result1 : " << result1(5.4,22.5) << "\n";

std::cout << "sizeof(result) : " << sizeof(result) << "\n";
std::cout << "sizeof(result1) : " << sizeof(result1) << "\n";

return 0;
}