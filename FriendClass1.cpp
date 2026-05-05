#include <iostream>
#include <string>
using namespace std;

class student;
class person
{
private:
    string name;

public:
    void setName(string pName);
    friend class student;
};