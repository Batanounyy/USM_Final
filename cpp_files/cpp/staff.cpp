#include <iostream>
#include <string>
#include "../headers/data_control.h"
#include "../headers/staff.h"
#include "../headers/user.h"
using namespace std;

int tokennn=0;

string extern fnamearr[50];
string extern lnamearr[50];
string extern udeparr[50];
int extern oharr[50];
string extern course1arr[50];
string extern course2arr[50];
string extern course3arr[50];
string extern course4arr[50];

int staff::gettoken(int id) {

    int extern idarr[50];
    for (int i = 0; i < 51; i++) {
        if (id == idarr[i]) {
            tokennn=i;
            return i;
        }
    }
}

staff::staff(){
    fname = "";
    lname = "";
    department = "";
    ohours = 0;
}

void staff::setdata(){
    data_control data;
    data.load_user_courses_data();
    fname = fnamearr[tokennn];
    lname = lnamearr[tokennn];
    ohours = oharr[tokennn];

}

string staff::getfname(){
    return fname;
}

string staff::getlname(){
    return lname;
}

string staff::getdepartment(){
    return department;
}

int staff::getoh(){
    return ohours;
}

void staff::updateoh(){
    data_control data;
    cout << "Enter the new office hours: ";
    int oh;
    cin >> oh;
    oharr[tokennn] = oh;
    data.write_oh_data();
}

string staff::getcourses(){
    setdata();
    return course1arr[tokennn] + " - " + course2arr[tokennn] + " - " + course3arr[tokennn] + " - " + course4arr[tokennn];
}



void staff::logout() {
    fname = "";
    lname = "";
    department = "";
}

void staff::enrollcourse() {
    user user1;
    data_control data;

    cout << "Enter the course you want to enroll in: ";
    string course;
    cin >> course;
    if (course1arr[tokennn] == " ") {
        course1arr[tokennn] = course;
    } else if (course2arr[tokennn] == " ") {
        course2arr[tokennn] = course;
    } else if (course3arr[tokennn] == " ") {
        course3arr[tokennn] = course;
    } else if (course4arr[tokennn] == " ") {
        course4arr[tokennn] = course;
    } else {
        cout << "You are already enrolled in 4 courses" << endl;
    }

    data.write_c3c4_data();
}