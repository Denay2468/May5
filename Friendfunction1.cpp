#include <iostream>
#include <string>
using namespace std;
class collegeStudent
{
private:
    string name;
public:
    friend void setName(collegeStudent &a, string);
};

void setName(collegeStudent &a, string b)
{
    a.name = b;
    cout << a.name;
}

int main()
{
    collegeStudent joko;
    setName(joko, "Kairi Kumar");
    return 0;
}