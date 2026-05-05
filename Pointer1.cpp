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
    collegeStudent mhs{1}; 
    mhs.showStudentId(); 

    collegeStudent &refMhs = mhs; 
    refMhs.studentId = 2; 
    mhs.showStudentId();

    collegeStudent *pMhs = &mhs; 
    pMhs->studentId = 3; 
    pMhs->showStudentId();
    return 0;
}