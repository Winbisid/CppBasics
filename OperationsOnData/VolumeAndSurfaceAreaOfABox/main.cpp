#include <iostream>

int main()
{
    //Area of a cuboid
double length, width, height, area, totalSurfaceArea;

std::cout << "Enter the length of the box" << std::endl;
std::cin >> length;

std::cout << "Enter the width of the box" << std::endl;
std::cin >> width;

std::cout << "Enter the height of the box" << std::endl;
std::cin >> height;

area = length*width*height;
std::cout << "The area of a cuboid with length " << length
<< ", width " << width << ", and height " << height << " is " <<
area << std::endl;

//Volume || Total surface area of  a cuboid
totalSurfaceArea =  2*length*width + 2*width*height + 2*length*height;
std::cout << "The total surface area of a cuboid with length " << length
<< ", width " << width << ", and height " << height << " is " <<
totalSurfaceArea << std::endl;

return 0;
}