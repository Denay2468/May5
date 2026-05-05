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

void person::showStudentScore(student &x)
{
    cout << x.score;
}

int main()
{
    person budi;
    student pbudi;
    budi.showStudentScore(pbudi);
    return 0;
}