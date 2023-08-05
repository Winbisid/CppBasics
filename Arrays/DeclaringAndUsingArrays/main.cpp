#include <iostream>

int main()

{

// Declare an array of ints
int scores [10] ;

//Read data
// std::cout << "scores [0] : " << scores [0] << std::endl; 
/*
// Printing data out
for(size_t i {0}; i<10; ++i){
    std::cout << "scores [" << i << "] : " << scores[i] << std::endl;
}
*/

// Write data into an array
/*
scores [0] = {20};
scores [1] = {21};
scores [2] = {22};
scores [3] = {24};
scores [4] = {25};

for(size_t i {0}; i<10; ++i){
    std::cout << "scores [" << i << "] : " << scores[i] << std::endl;
}
*/ 

// Writing data in
/*
for(size_t i {0}; i<10; ++i){
    scores [i] = i*10;
}

// Printing data out
for(size_t i {0}; i<10; ++i){
    std::cout << "scores [" << i << "] : " << scores[i] << std::endl;
}
*/

// Writing data in and printing out at the same time/ in one loop
/*
for(size_t i {}; i<10; ++i){
    scores [i] = i*10;
    std::cout << "scores [" << i << "] : " << scores[i] << std::endl;
}*/

//Declare and initialize an array at the same time
/*
std::cout << "Declare and initialize at the same time" << std::endl;

double salaries[5] {12.7, 7.5, 13.2, 8.1, 9.3};

for(size_t i {0}; i < 5; ++i){
    std::cout << "salary[" << i << "] : " << salaries[i] << std::endl;
} 
*/

//Omit the size when declaring an array
/*
int class_sizes[]{10, 12, 15, 11, 18, 17, 56};

//Printing with a range based for loop
for(auto value : class_sizes){
    std::cout << "value : " << value << std::endl;
}

std::cout << "size of value is " << sizeof(class_sizes) << std::endl;
*/

//Read only arrays
/*
const int birds[]{10, 12, 15, 11, 18, 17, 56};
birds[2]=8; //Data cannot be modified because it is constant
*/

//Sum up score array, store result in sum
int score[]{2, 4, 6, 34, 56, 3};
int sum{};

for(int element : score){
    sum += element;
}
std::cout << "score sum : " << sum << std::endl;

return 0;
}