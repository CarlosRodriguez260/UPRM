#include <vector>

class Cube
{
private:
    double side1;


public:
    // Getters
    double getSide1() { return side1; }


    // Setters
    void setSide1(double s1) { side1 = s1; }


    Cube(double s1)
    {
        side1 = s1;
    }


    double getArea()
    {
        double area = 6 * pow(this->getSide1(), 2);
        return area;
    }


    double ifBigger()
    {
        if(getArea() > 1000)
        {
            return true;
        }
        else
        {
            return false;
        }
    }


};