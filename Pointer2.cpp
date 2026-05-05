#include <iostream>
using namespace std;

class collegeStudent
{
public:
    int studentId;
    void showStudentId()
    {
        cout << "Student ID = " << studentId << endl;
    }
};

int main()
{
    collegeStudent *mhs = new collegeStudent{1}; // pointer Object mhs
    mhs->studentId = 2;
    mhs->showStudentId();
    delete mhs;
    return 0;
}