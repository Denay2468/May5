#include <iostream>
using namespace std;

class student;
class person
{
public:
    void showStudentScore(student &x);
};

class student
{
private:
    int score;

public:
    student() { score = 100; }
    friend void person::showStudentScore(student &x);
};