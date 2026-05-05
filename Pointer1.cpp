#include <iostream>
using namespace std;
class collegeStudent{
    public:
    int studentId;
    void showStudentId(){
        cout<<"Student ID = "<<studentId<<endl;
    }
};

int main (){
    collegeStudent mhs{1}; // Object mhs
    mhs.showStudentId(); //Member Access Operator

    collegeStudent &refMhs = mhs; //Pointer Reference refMhs
    refMhs.studentId = 2; //Member Access Operator
    mhs.showStudentId();

    collegeStudent *pMhs = &mhs; //pointer Dereference pMhs
    pMhs->studentId = 3; //Arrow Operator
    pMhs->showStudentId();
    return 0;
}