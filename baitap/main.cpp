#include <iostream>
#include <conio.h>
using namespace std;
class Area
{
public:
        // Area of square
        static double cal(double a)
        {
            return a*a;
        }
        // Area of Rectangle
        static double cal(double a, double b)
        {
            return a*b;
        }
        // Area of Circle
        static double cal(int a)
        {
            return a*a*3.14;
        }
};

int main()
{
    cout << "Area of square with edge = 2 is: " << Area::cal(2.0);
    cout << "\nArea of rectangle with height = 2, width = 3 is :"<<Area::cal(2,3);
    cout << "\nArea of circle with radius = 2 is: "<<Area::cal(2);
    return 0;
}
