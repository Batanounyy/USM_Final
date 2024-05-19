//(h)This file is to load data from files and write data to files and save them into specific Arrays

#include <iostream>
#include <string>
#ifndef USM_FINAL_DATA_CONTROL_H
#define USM_FINAL_DATA_CONTROL_H
using namespace std;
void readddd();
    class data_control {
    public:
        void load_user_data(); //load user data from file
        void load_user_courses_data(); //load user courses data from file
        void load_university_data(); //load university data from file
        void load_courses_data(); //load courses data from file

        void write_fac_data(); //write fac data to file
        void write_dep_data(); //write dep data to file
        void write_ccredit_data(); //write dep data to file
        void write_grade_data(); //write dep data to file
        void write_c3c4_data();
        void write_oh_data();
    };


#endif //USM_FINAL_DATA_CONTROL_H
