//Control Courses

#include <iostream>
#include <string>
#ifndef USM_FINAL_COURSE_H
#define USM_FINAL_COURSE_H
using namespace std;

class course {
private:
    string course_name;
    string course_code;
    int course_credit;
    string department;
    int course_location;

public:
    course();
    void fcourselocation();
    void get_courseDetails();
    void update_courseCredit();


};


#endif //USM_FINAL_COURSE_H
