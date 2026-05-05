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

     float getPerimeter()
    {
        return 4 * side;
    }

      void output()
    {
        cout << "\n=== Rhombus Output ===" << endl;
        cout << "Side length        : " << side << endl;
        cout << "Diagonal 1         : " << diagonal1 << endl;
        cout << "Diagonal 2         : " << diagonal2 << endl;
        cout << "Area               : " << getArea() << endl;
        cout << "Perimeter          : " << getPerimeter() << endl;
    }

     friend float getKitePerimeter(Kite &k);
};

class Kite
{
    private:
    float diagonal1;
    float diagonal2;
    float side1;
    float side2;

    public:
    void input()
    {
        cout << "=== Kite Input ===" << endl;
        cout << "Enter diagonal 1   : ";
        cin >> diagonal1;
        cout << "Enter diagonal 2   : ";
        cin >> diagonal2;
        cout << "Enter side 1       : ";
        cin >> side1;
        cout << "Enter side 2       : ";
        cin >> side2;
    }

     float getArea()
    {
        return (diagonal1 * diagonal2) / 2;
    }

        void output()
    {
        cout << "\n=== Kite Output ===" << endl;
        cout << "Diagonal 1         : " << diagonal1 << endl;
        cout << "Diagonal 2         : " << diagonal2 << endl;
        cout << "Side 1             : " << side1 << endl;
        cout << "Side 2             : " << side2 << endl;
        cout << "Area               : " << getArea() << endl;
        cout << "Perimeter          : " << getKitePerimeter(*this) << endl;
    }

    friend float getKitePerimeter(Kite &k);

};

float getKitePerimeter(Kite &k)
{
    return 2 * (k.side1 + k.side2);
}