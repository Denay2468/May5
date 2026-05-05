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

void student::displayAll(person &a)
{
    cout << id << endl << a.name;
}
void person::setName(string pName)
{
    name = pName;
}
void student::setId(int pId)
{
    id = pId;
}