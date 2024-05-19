#include <iostream>
#include <string>
#include "../headers/data_control.h"
#include "../headers/university.h"
#include "../headers/course.h"
#include "../headers/user.h"
#include "../headers/staff.h"
#include "../headers/student.h"
#include "../headers/menu.h"
university university;
using namespace std;
user user1;
student student;
staff staff;
int id;
string pass;
void menu::startmenu() {
    cout << "Welcome" << endl;
    cout << university.getName() << endl << endl;
    MMenu();
}

void menu::MMenu() {
    cout << "---Main Menu---" << endl;
    cout << "Choose option: " << endl;
    cout << "1] Login" << endl;
    cout << "2] University Info" << endl;
    cout << "3] Software Info" << endl;
    cout << "4] Exit" << endl;
    int value;
    cin >> value;
    switch (value) {
        case 1:
            while (user1.getloggedin()==false) {
                cout << "Login" << endl;
                cout << "Enter ID (go back to main menu enter 0)" << endl;
                cin >> id;
                if (id == 0) {
                    MMenu();
                }
                cout << "Enter Password"<< endl;
                cin >> pass;
                user1.validate(id, pass);
            }
            if (user1.getrole()=="Student") {

                StuMenu();
            }
            else if (user1.getrole()=="Staff") {

            }
            break;
        case 2:
            cout << "---University Info---" << endl;
            cout << "University Name: "<< university.getName() << endl;
            cout << "University Location: "<< university.getLocation() << endl;
            cout << "University Phone: "<< university.getPhone() << endl;
            UniMenu();
        case 3:
            cout << "---Software Info---" << endl;
            cout << "This software is made by: " << endl;
            cout << "-] Abdelrahman ElBatanounyy: 232403" << endl;
            cout << "-] Saif Islam: 230647" << endl <<endl;
            cout << "It took us alot of time, hope you like it" << endl;
            cout << "Github Link: " << endl;
            cout << "_______________" << endl<< endl<< endl<< endl;
            MMenu();
        case 4:
            cout << "---Exit---" << endl;
            cout << "goodbye..." << endl;
            exit(0);
        default:
            cout << "Invalid Input" << endl;
            MMenu();

    }
}

void menu::UniMenu() {
    cout << "Choose option: " << endl
            << "1] Collages" << endl
            << "2] Departments" << endl
            << "3] Back" << endl;
    int value;
    cin >> value;
    switch (value) {
        case 1:
            university.setCollages();
            university.getCollages();
            UniMenu();
        case 2:
            university.setDepartments();
            university.getDepartments();
            UniMenu();
        case 3:
            MMenu();

        default:
            cout << "Invalid Input" << endl;
            UniMenu();
    }

}
void menu::StuMenu() {
    data_control data;
    data.load_user_courses_data();
    student.gettoken(id);
    student.setdata();
    cout << "---Student Menu---" << endl;
    cout << "Choose option: " << endl;
    cout << "1] View Transcript" << endl;
    cout << "2] Update Grades" << endl;
    cout << "3] Calculate gpa" << endl;
    cout << "4] Enroll Course" << endl;
    cout << "5] Profile" << endl;
    cout << "6] Logout" << endl;
    int value;
    cin >> value;
    switch (value) {
        case 1:
            student.viewtranscript();
            StuMenu();
        case 2:
            student.updategrades();
            StuMenu();
        case 3:
            cout << "gpa: " <<student.calulategpa();
            StuMenu();
        case 4:
            student.enrollcourse();
            StuMenu();
        case 5:
            cout << "First Name: " << student.getfname() << endl;
            cout << "Last Name: " << student.getlname() << endl;
            cout << "Department: " << student.getdepartment() << endl;
            cout << "Courses: " << student.getcourses() << endl;
            cout << "GPA: " << student.calulategpa() << endl;
            StuMenu();
        case 6:

            student.logout();
            user1.logout();
            MMenu();
        default:
            cout << "Invalid Input" << endl;
            StuMenu();
    }
}
void menu::StaffMenu() {
    data_control data;
    data.load_user_courses_data();
    staff.gettoken(id);
    staff.setdata();
    cout << "---Staff Menu---" << endl;
    cout << "Choose option: " << endl;
    cout << "1] View Courses" << endl;
    cout << "2] Edit Courses" << endl;
    cout << "3] Edit Office Hours" << endl;
    cout << "4] Profile" << endl;
    cout << "5] Logout" << endl;
    int value;
    cin >> value;
    switch (value) {
        case 1:
            cout << "Courses: " << student.getcourses() << endl;
            StaffMenu();
        case 2:
            cout << "Edit Courses";
            staff.enrollcourse();
            StaffMenu();
        case 3:
            cout << "Edit Office Hours";
            staff.updateoh();
            StaffMenu();
        case 4:
            cout << "Profile";
            cout << "First Name: " << student.getfname() << endl;
            cout << "Last Name: " << student.getlname() << endl;
            cout << "Department: " << student.getdepartment() << endl;
            StaffMenu();
        case 5:

            staff.logout();
            user1.logout();
            MMenu();
        default:
            cout << "Invalid Input" << endl;
            StuMenu();
    }
}
