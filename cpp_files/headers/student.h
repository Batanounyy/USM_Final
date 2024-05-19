#include <iostream>
#include <string>
#include "user.h"
#ifndef USM_FINAL_STUDENT_H
#define USM_FINAL_STUDENT_H
using namespace std;
int num();
class student {
private:
    string fname;
    string lname;
    string department;
    int gpa;
    int token;
public:
    student();
    int gettoken(int id);
    void setdata();
    string getfname();
    string getlname();
    string getdepartment();
    string getcourses();

    int calulategpa();
    void viewtranscript();

    int gettoken();
    void updategrades();

    void enrollcourse();

    void logout();

};


#endif //USM_FINAL_STUDENT_H
