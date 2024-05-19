#include "../headers/course.h"
#include "E:\Programmming\USM Final\cpp_files\headers\data_control.h"


course::course(){
    course_name = " ";
    course_code = " ";
    course_credit = 0;
    department = " ";
    course_location = -1;


}

void course::fcourselocation(){
    string x;
    cin >> x;
    data_control data;
    data.load_courses_data();

    string extern ccodearr[100];
    string extern cnamearr[100];

    for (int i = 0; i < 100; i++) {
        if (x == ccodearr[i]) {
            course_location = i;
            break;
        }
    }
    if (course_location == 0) {
        cout << "Course Not Found" << endl;
    }

}

void course::get_courseDetails(){
    data_control data;
    data.load_courses_data();
    string extern ccodearr[100];
    string extern cnamearr[100];
    string extern cdeparr[100];
    int extern ccreditarr[100];
    cout << "Enter code of Course: ";
    fcourselocation();
    if(course_location != -1){
    cout << "Course Name: " << cnamearr[course_location] << endl;
    cout << "Course Code: " << ccodearr[course_location] << endl;
    cout << "Course Credits: " << ccreditarr[course_location] << endl;
    cout << "Course Department: " << cdeparr[course_location] << endl;}
    else{
        cout << "Course Not Found" << endl;
    }

}
void course::update_courseCredit(){
    data_control data;
    data.load_courses_data();
    int extern ccreditarr[100];
    string extern cnamearr[100];
    cout << "Enter code of Course: ";
    fcourselocation();
    if(course_location != -1){
        cout << "Course Name: " << cnamearr[course_location] << endl;
        cout << "Course Credits: " << ccreditarr[course_location] << endl;
        cout << "Enter New Credits: ";
        cin >> ccreditarr[course_location];
        cout << "Course Credits Updated" << endl;
        data.write_ccredit_data();
    }
    else{
        cout << "Course Not Found" << endl;
    }

}