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
        static int num ;
	
       	 Area()
	 {   
	        num++ ;
	 }
        // Get number of objects
	int getNumOfObject()
	{
               return Area::num ;
	}
};
int Area::num = 0 ;
int main()
{
    cout << "Area of square with edge = 2 is: " << Area::cal(2.0);
    cout << "\nArea of rectangle with height = 2, width = 3 is :"<<Area::cal(2,3);
    cout << "\nArea of circle with radius = 2 is: "<<Area::cal(2);
    Area object1 ;
    Area object2 ;
    Area object3 ;
    cout << "Number of objects is : " << object3.getNumOfObject() <<endl ;
    return 0;
}
