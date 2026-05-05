#include <iostream>
#include <string>
using namespace std;

class Kite; 

class Rhombus
{ 
    private:
    float side;
    float diagonal1;
    float diagonal2;

    public:
    void input()
    {
        cout << "=== Rhombus Input ===" << endl;
        cout << "Enter side length  : ";
        cin >> side;
        cout << "Enter diagonal 1   : ";
        cin >> diagonal1;
        cout << "Enter diagonal 2   : ";
        cin >> diagonal2;
    }

    float getArea()
    {
        return (diagonal1 * diagonal2) / 2;
    }
};