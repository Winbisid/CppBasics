#include <iostream>

int main()

{

int scores[] {10, 12, 15, 11, 18, 17, 22, 23, 24, 34};
/*
//Can get the size with std::size
for (size_t i{0}; i < std::size(scores); ++i){
std::cout << "scores : " << scores[i] << std::endl;
}
*/

//Looping through an array using range based for loop
//You'll lose the indexes though so make sure you don't need those before using this
for (auto score : scores){
std::cout << "score : " << score << std::endl;
}  


return 0;
}