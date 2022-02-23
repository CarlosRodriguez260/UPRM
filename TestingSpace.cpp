// Testing Space

#include <iostream>
#include <math.h>
#include "Cube.h"

using namespace std;
int main()
{
    Cube cube1(10);
    cout << cube1.getArea() << endl;
    cout << cube1.ifBigger() << endl;
    return 0;
}