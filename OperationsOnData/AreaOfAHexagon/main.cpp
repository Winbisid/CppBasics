#include <iostream>
#include <cmath>
int main()
{

/*
Number of vertices: 6 
Number of edges: 6 
Internal angle: 120° 
Area = (3 √3(n)^2 ) / 2 
*/

double n {4};
double area = (3 * sqrt (3)/2 ) *n *n;

std::cout << "The area of a hexagon with " << n << " length is " <<
area << std::endl;

/*
// function for calculating
// area of the hexagon.

double hexagonArea(double s)
{
    return ((3 * sqrt(3) * (s * s)) / 2);     
}
  
// Driver Code
int main()
{
    // Length of a side 
    double s = 4; 
    cout << "Area : "
         << hexagonArea(s);
    return 0;
}
*/

return 0;
}