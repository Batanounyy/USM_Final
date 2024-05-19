//(h)This file is to Control University Data


#include <iostream>
#include <string>
#ifndef USM_FINAL_UNIVERSITY_H
#define USM_FINAL_UNIVERSITY_H
using namespace std;

class university {
private:
    string const Name = "university of Sciences and Technology";
    string const Location = "5th Settelment ,Cairo, Egypt";
    string const Phone = "01000000001";
    string Collages[10];
    string Departments[100];

public:
    university();

    void setCollages();
    void setDepartments();

    string addCollages();
    string addDepartments();

    void getCollages();
    void getDepartments();

    string getName();
    string getLocation();
    string getPhone();
};


#endif //USM_FINAL_UNIVERSITY_H
