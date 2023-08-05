#include <iostream>

void max_str(const std::string &input1, const std::string input2, std::string &output){
    if (input1 > input2){
        output = input1;
    }else{
        output = input2;
    }
}

void max_int(int input1, int input2, int &output){
    if (input1 > input2){
        output = input1;
    }else{
        output = input2;
    }
}

void max_double(double input1, double input2, double *output){
    if (input1 > input2){
        *output = input1;
    }else{
        *output = input2;
    }
}


int main()
{
/*
std::string out_str;
std::string string1("Alabama");
std::string string2("Bellevue");

max_str(string1, string2, out_str);
std::cout << "max_str : " << out_str << "\n";
*/
/*
int out_int;
int int1(45);
int int2(23);

max_int(int1, int2, out_int);
std::cout << "max_int : " << out_int << "\n";
*/

double out_double;
double double1(45.32);
double double2(23.455);

max_double(double1, double2, &out_double);
std::cout << "max_double : " << out_double << "\n";



return 0;
}