#include <iostream>
#include <cstring>

template <typename T> T maxim(T a, T b);
// template <>
// const char *maxim<const char *>(const char *a, const char *b);

int main(){

int a{10};
int b{23};
double c{34.7};
double d{23.4};
std::string e{"Hello"};
std::string f{"World"};

auto max_int = maxim(a,b);
auto max_double = maxim(c,d);
auto max_str = maxim(e,f);

std::cout << "max_int : " << max_int << "\n";
std::cout << "max_double : " << max_double << "\n";
std::cout << "max_str : " << max_str << "\n";

const char *g {"wild"};
const char *h {"animal"};

std::cout << "max(const char*) : " << maxim(g,h) << "\n";

return 0;
}
template <typename T> T maxim(T a, T b){
    return (a>b)? a:b;
}
// template <>
// const char *maxim<const char *>(const char *a, const char *b){
//     return (std::strcmp(a,b)>0) ? a:b;
// }