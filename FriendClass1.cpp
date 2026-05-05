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

class student
{
private:
    int id;

public:
    void setId(int pId);
    void displayAll(person &a);
};