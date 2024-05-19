#include <iostream>
#include <string>
#include "user.h"
#ifndef USM_FINAL_STAFF_H
#define USM_FINAL_STAFF_H
using namespace std;

class staff : public user{
private:
    string fname;
    string lname;
    string department;
    string courses[4];
    int ohours;
    int token;
public:
    staff();
    void setdata();
    string getfname();
    string getlname();
    string getdepartment();
    string getcourses();
    int getoh();
    void updateoh();
    void enrollcourse();


    int gettoken(int id);
    void logout();
};


#endif //USM_FINAL_STAFF_H
