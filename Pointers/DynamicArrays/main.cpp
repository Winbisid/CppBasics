#include <iostream>

int main()
{
size_t size {10};

//Different ways to declare an array dynamically and how they're initialized

double *p_salaries {new double[size]};    //Salaries array will contain garbage values

int *p_students {new(std::nothrow) int[size]};  //Students will be initialized to 0(nullptr)

double *p_scores {new (std::nothrow) double[size]{1,2,3,4,5}};  //Allocating memory space for an array of size double 
                                                                //First 5 will be initialized to 1,2,3,4,5, and
                                                                //The rest will be 0s
//nullptr check and use allocated array                                                             
if(p_scores){
    std::cout << "size of scores (it's a regular pointer) : " << sizeof(p_scores) << std::endl;
    std::cout << "Successfully allocated memory for scores" <<std::endl;

    for(size_t i {}; i<size ; ++i){
        //Print out elements. Can use regular array access notation, or pointer arithmetic
        std::cout << "value : " << p_scores[i] << " : " << *(p_scores + i) << std::endl;
        }
    }
//Releasing memory(Array version)
delete[] p_scores;
p_scores = nullptr;

delete[] p_students;
p_students = nullptr;

delete[] p_salaries;
p_salaries = nullptr;

std::cout << "-----------------------------------------------------------" << std::endl;

//Dynamic vs Static arrays
//Static array
int scores [10]{1,2,3,4,5,6,7,8,9}; //Lives on the stack
std::cout << "size of int : " << std::size(scores) << std::endl;

for(auto s : scores){
    std::cout << "value : " << s << std::endl;
}
//Dynamic array
//Pointers initialized with dynamic arrays are different from static arrays :
//std::size doesn't work on them and they don't support range based for loops
double *temperature = new double [size]{10.0,20.0,30.0,40.0,50.0,60.0,70.0,80.0,90.0,100.0}; //Lives on the heap

//std::cout << "std::size(temperature) : " << std::size(temperature) << std::endl; //Error
/*
//Error : temperatures doesn't have array properties that are needed for the range based for loop to work
for (double temp : temperature){
    std::cout << "temperature : " << temp << std::endl;
}
//The dynamically allocated array has decayed into a pointer
*/

//Test : Using multidimensional array with new. Check which variable is called when the *address is called
// int test{1,2,3,4,5};
// int test1{2,4,6,8,9};
int test2 [2][5] = {1,2,3,4,5}{2,4,6,8,9};
int *p_test2 {new(std::nothrow) int {test2}};


return 0;
}