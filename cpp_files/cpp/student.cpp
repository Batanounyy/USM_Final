#include <iostream>
#include <string>
#include "../headers/data_control.h"
#include "../headers/student.h"
#include "../headers/user.h"
using namespace std;
data_control data1;
int tokenn=0;

string extern fnamearr[50];
string extern lnamearr[50];
string extern udeparr[50];

string extern course1arr[50];
string extern course2arr[50];
string extern course3arr[50];
string extern course4arr[50];

int extern course1garr[50];
int extern course2garr[50];
int extern course3garr[50];
int extern course4garr[50];

int student::gettoken(int id) {

    int extern idarr[50];
    for (int i = 0; i < 51; i++) {
        if (id == idarr[i]) {
            tokenn=i;
            return i;
        }
    }
}

student::student(){
    fname = "";
    lname = "";
    department = "";
    gpa = 0;
}

void student::setdata(){
    data_control data;
    data.load_user_courses_data();
    fname = fnamearr[tokenn];
    lname = lnamearr[tokenn];
    department = udeparr[tokenn];

    }

string student::getfname(){
    return fname;
}

string student::getlname(){
    return lname;
}

string student::getdepartment(){
    return department;
}

string student::getcourses(){
    setdata();
    return course1arr[tokenn] + " - " + course2arr[tokenn] + " - " + course3arr[tokenn] + " - " + course4arr[tokenn];
}

int student::calulategpa() {
    setdata();
    user user1;

    int total = course1garr[tokenn] + course2garr[tokenn] + course3garr[tokenn] + course4garr[tokenn];
    gpa = total / 4;
    return gpa;

}

void student::viewtranscript(){
    data_control data;
    data.load_user_courses_data();

    setdata();
    user user1;
    cout << "Course 1: " << course1arr[tokenn] << " Grade: " << course1garr[tokenn] << endl;
    cout << "Course 2: " << course2arr[tokenn] << " Grade: " << course2garr[tokenn] << endl;
    cout << "Course 3: " << course3arr[tokenn] << " Grade: " << course3garr[tokenn] << endl;
    cout << "Course 4: " << course4arr[tokenn] << " Grade: " << course4garr[tokenn] << endl;

    gpa = calulategpa();
    cout << "GPA: " << gpa << endl;


}

void student::updategrades() {
    data_control data;
    user user1;

    cout << "Enter the grade for course 1: " << course1arr[tokenn] << endl;
    cout << "Current Credit: " << course1garr[tokenn] << " New Credit: ";
    cin >> course1garr[tokenn];
    cout << "Enter the grade for course 2: " << course2arr[tokenn] << endl;
    cout << "Current Credit: " << course2garr[tokenn] << " New Credit: ";
    cin >> course2garr[tokenn];
    cout << "Enter the grade for course 3: " << course3arr[tokenn] << endl;
    cout << "Current Credit: " << course3garr[tokenn] << " New Credit: ";
    cin >> course3garr[tokenn];
    cout << "Enter the grade for course 4: " << course4arr[tokenn] << endl;
    cout << "Current Credit: " << course4garr[tokenn] << " New Credit: ";
    cin >> course4garr[tokenn];

    data.write_grade_data();



}

void student::logout() {
    fname = "";
    lname = "";
    department = "";
    gpa = 0;
}

void student::enrollcourse() {
    user user1;
    data_control data;

    cout << "Enter the course you want to enroll in: ";
    string course;
    cin >> course;
    if (course1arr[tokenn] == " ") {
        course1arr[tokenn] = course;
    } else if (course2arr[tokenn] == " ") {
        course2arr[tokenn] = course;
    } else if (course3arr[tokenn] == " ") {
        course3arr[tokenn] = course;
    } else if (course4arr[tokenn] == " ") {
        course4arr[tokenn] = course;
    } else {
        cout << "You are already enrolled in 4 courses" << endl;
    }

    data.write_c3c4_data();
}

