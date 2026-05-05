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

int main()
{
    person joko;
    joko.setName("Joko Susilo");
    student joko_student;
    joko_student.setId(1);
    joko_student.displayAll(joko);
    return 0;
}