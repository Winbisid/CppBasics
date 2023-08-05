#include <iostream>

//Function prototypes or declarations
int max (int a, int b);
int min (int a, int b);
int incr_mult (int, int);

int main()
{
//Find max
int c{5};
int d{7};
int result = max (c, d);
std::cout << "The max is " << result << "\n";

//Find min
c = 15;
d = 23;
result = min (c, d);
std::cout << "The min is " << result << "\n";

//Find multiplication result after increment
c = 24;
d = 39;
result = incr_mult (c, d);
std::cout << "The result of increment and multiplication is " << result << "\n";

return 0;
}

//Function definitions
//max function
int max (int a, int b){
    if(a>b){
        return a;
    }else{
        return b;
    }
}

//min function
int min (int a, int b){
    if(a<b){
        return a;
    }else{
        return b;
    }
}

//increment and multiply function
int incr_mult (int a, int b){
return ((++a)*(++b));
}
