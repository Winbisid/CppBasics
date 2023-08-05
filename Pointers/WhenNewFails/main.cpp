#include <iostream>

int main()
{
//Try to allocate an insanely huge array in one go
//Unhandled new failure : CRASH!
// int *lots_of_ints1 {new int[100000000000000000]};   //Error about exceeding array size

/*
//Use a huge loop to try and exhaust the memory capalities of your system.
//When new fails, your program is going to forcefully terminate
for (size_t i {}; i < 100000000000; ++i){
    int *lots_of_ints2 {new int [100000000]};
}
*/
/*
//Handling the exception : 
for (size_t i {}; i < 100; ++i){
    
try{
    int *lots_of_ints2 {new int [100000000000]};

}catch(std::exception&ex){

    std::cout << "Something went wrong : " << ex.what() << std::endl;
            }
        }
*/

//std::nothrow
for (size_t i {}; i < 100; ++i){
    int *lots_of_ints2 {new(std::nothrow)int [10000000000]};

    if (lots_of_ints2 != nullptr) {
        std::cout << "Data allocated" << std::endl;
    }else{
        std::cout << "Data allocation failed" << std::endl;

    }
}

std::cout << "Program went well" << std::endl;

return 0;
}