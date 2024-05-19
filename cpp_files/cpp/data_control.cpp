//This file is to load data from files and write data to files and save them into specific Arrays
#include <iostream>
#include <string>
#include <fstream>
#include "../headers/data_control.h"
using namespace std;

//open user data files
ifstream uidfile("../csv_data_files\\UserData\\id.csv");
ifstream upassfile("../csv_data_files\\UserData\\pass.csv");
ifstream urolefile("../csv_data_files\\UserData\\role.csv");
ifstream uemailfile("../csv_data_files\\UserData\\email.csv");
ifstream ufnamefile("../csv_data_files\\UserData\\firstname.csv");
ifstream ulnamefile("../csv_data_files\\UserData\\lastname.csv");
ifstream uohfile("../csv_data_files\\UserData\\officehours.csv");
ifstream udepfile("../csv_data_files\\UserData\\department.csv");

//open user courses data files
ifstream c1file("../csv_data_files\\UserData\\Courses\\course1.csv");
ifstream c1gfile("../csv_data_files\\UserData\\Courses\\course1grades.csv");
ifstream c2file("E:\\Programmming\\USM Final\\csv_data_files\\UserData\\Courses\\course2.cvs");
ifstream c2gfile("../csv_data_files\\UserData\\Courses\\course2grades.csv");
ifstream c3file("E:\\Programmming\\USM Final\\csv_data_files\\UserData\\Courses\\course3.csv");
ifstream c3gfile("../csv_data_files\\UserData\\Courses\\course3grades.csv");
ifstream c4file("E:\\Programmming\\USM Final\\csv_data_files\\UserData\\Courses\\course4.csv");
ifstream c4gfile("../csv_data_files\\UserData\\Courses\\course4grades.csv");



//open university data files
ifstream depfile("../csv_data_files\\Faculties Data\\All Dep.csv");
ifstream facfile("../csv_data_files\\Faculties Data\\Faculties.csv");

//open courses data files
ifstream cname("../csv_data_files\\Couses Data\\coursesName.csv");
ifstream ccode("../csv_data_files\\Couses Data\\coursesCode.csv");
ifstream ccredit("../csv_data_files\\Couses Data\\coursesCredit.csv");
ifstream cdep("../csv_data_files\\Couses Data\\coursesDep.csv");

//set arrays to all data
int idarr[50];
string passarr[50];
string rolearr[50];
string emailarr[50];
string fnamearr[50];
string lnamearr[50];
int oharr[50];
string udeparr[50];

string course1arr[50];
int course1garr[50];
string course2arr[50];
int course2garr[50];
string course3arr[50];
int course3garr[50];
string course4arr[50];
int course4garr[50];

string deparr[100];
string facarr[10];

string cnamearr[100];
string ccodearr[100];
int ccreditarr[100];
string cdeparr[100];

void data_control::load_user_data() {
    for (int i = 0; i < 50; i++) {
        uidfile >> idarr[i];
        if (uidfile.eof()) {
            break;
        }
    }
    uidfile.close();

    for (int i = 0; i < 50; i++) {
        upassfile >> passarr[i];
        if (upassfile.eof()) {
            break;
        }
    }
    upassfile.close();

    for (int i = 0; i < 50; i++) {
        urolefile >> rolearr[i];
        if (urolefile.eof()) {
            break;
        }
    }
    urolefile.close();

    for (int i = 0; i < 50; i++) {
        uemailfile >> emailarr[i];
        if (uemailfile.eof()) {
            break;
        }
    }
    uemailfile.close();

    for (int i = 0; i < 50; i++) {
        ufnamefile >> fnamearr[i];
        if (ufnamefile.eof()) {
            break;
        }
    }
    ufnamefile.close();

    for (int i = 0; i < 50; i++) {
        ulnamefile >> lnamearr[i];
        if (ulnamefile.eof()) {
            break;
        }
    }
    ulnamefile.close();

    for (int i = 0; i < 50; i++) {
        uohfile >> oharr[i];
        if (uohfile.eof()) {
            break;
        }
    }
    uohfile.close();

    for (int i = 0; i < 50; i++) {
        getline(udepfile, udeparr[i]);
        if (udepfile.eof()) {
            break;
        }
    }
    udepfile.close();

}

void data_control::load_user_courses_data() {
    for (int i = 0; i < 50; i++) {
        getline(c1file, course1arr[i]);
        if (c1file.eof()) {
            break;
        }
    }
    c1file.close();

    for (int i = 0; i < 50; i++) {
        c1gfile >> course1garr[i];
        if (c1gfile.eof()) {
            break;
        }
    }
    c1gfile.close();

    for (int i = 0; i < 50; i++) {
        getline(c2file, course2arr[i]);
        if (c2file.eof()) {
            break;
        }
    }
    c2file.close();

    for (int i = 0; i < 50; i++) {
        c2gfile >> course2garr[i];
        if (c2gfile.eof()) {
            break;
        }
    }
    c2gfile.close();

    for (int i = 0; i < 50; i++) {
        getline(c3file, course3arr[i]);
        if (c3file.eof()) {
            break;
        }
    }
    c3file.close();

    for (int i = 0; i < 50; i++) {
        c3gfile >> course3garr[i];
        if (c3gfile.eof()) {
            break;
        }
    }
    c3gfile.close();

    for (int i = 0; i < 50; i++) {
        getline(c4file, course4arr[i]);
        if (c4file.eof()) {
            break;
        }
    }
    c4file.close();

    for (int i = 0; i < 50; i++) {
        c4gfile >> course4garr[i];
        if (c4gfile.eof()) {
            break;
        }
    }
    c4gfile.close();
}

void data_control::load_university_data() {
    for (int i = 0; i < 100; i++) {
        getline(depfile, deparr[i]);
        if (depfile.eof()) {
            break;
        }
    }
    depfile.close();

    for (int i = 0; i < 10; i++) {
        getline(facfile, facarr[i]);
        if (facfile.eof()) {
            break;
        }
    }
    facfile.close();
}

void data_control::load_courses_data() {
    for (int i = 0; i < 100; i++) {
        getline(cname, cnamearr[i]);
        if (cname.eof()) {
            break;
        }
    }
    cname.close();

    for (int i = 0; i < 100; i++) {
        getline(ccode, ccodearr[i]);
        if (ccode.eof()) {
            break;
        }
    }
    ccode.close();

    for (int i = 0; i < 100; i++) {
        ccredit >> ccreditarr[i];
        if (ccredit.eof()) {
            break;
        }
    }
    ccredit.close();

    for (int i = 0; i < 100; i++) {
        getline(cdep, cdeparr[i]);
        if (cdep.eof()) {
            break;
        }
    }
    cdep.close();
}


void data_control::write_fac_data() {
    ofstream facfile("../csv_data_files\\Faculties Data\\Faculties.csv");

    for (int i = 0; i < 10; i++) {
        facfile << facarr[i] << endl;
    }
    facfile.close();


}

void data_control::write_dep_data() {
    ofstream depfile("../csv_data_files\\Faculties Data\\All Dep.csv");

    for (int i = 0; i < 100; i++) {
        depfile << deparr[i] << endl;
    }
    depfile.close();


}

void data_control::write_ccredit_data() {
    ofstream creditfile("../csv_data_files\\Couses Data\\coursesCredit.csv");

    for (int i = 0; i < 100; i++) {
        creditfile << ccreditarr[i] << endl;
    }
    creditfile.close();


}

void data_control::write_grade_data() {
    ofstream grade1file("../csv_data_files\\UserData\\Courses\\course1grades.csv");

    for (int i = 0; i < 50; i++) {
        grade1file << course1garr[i] << endl;
    }
    grade1file.close();

    ofstream grade2file("../csv_data_files\\UserData\\Courses\\course2grades.csv");

    for (int i = 0; i < 50; i++) {
        grade2file << course2garr[i] << endl;
    }
    grade2file.close();

    ofstream grade3file("../csv_data_files\\UserData\\Courses\\course3grades.csv");

    for (int i = 0; i < 50; i++) {
        grade3file << course3garr[i] << endl;
    }
    grade3file.close();

    ofstream grade4file("../csv_data_files\\UserData\\Courses\\course4grades.csv");

    for (int i = 0; i < 50; i++) {
        grade4file << course4garr[i] << endl;
    }
    grade4file.close();


}

void data_control::write_c3c4_data(){
    ofstream c3file("../csv_data_files\\UserData\\Courses\\course3.csv");

    for (int i = 0; i < 50; i++) {
        c3file << course3arr[i] << endl;
    }
    c3file.close();

    ofstream c4file("../csv_data_files\\UserData\\Courses\\course4.csv");

    for (int i = 0; i < 50; i++) {
        c4file << course4arr[i] << endl;
    }
    c4file.close();


}

void data_control::write_oh_data(){
    ofstream ohfile("../csv_data_files\\UserData\\officehours.csv");

    for (int i = 0; i < 50; i++) {
        ohfile << oharr[i] << endl;
    }
    ohfile.close();


}