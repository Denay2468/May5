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