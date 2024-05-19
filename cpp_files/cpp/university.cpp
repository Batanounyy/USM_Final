#include <filesystem>
#include <iostream>
#include <string>
#include <fstream>
#include "E:\Programmming\USM Final\cpp_files\headers\data_control.h"
#include "../headers/university.h"
using namespace std;

university::university() {
    Name;
    Location;
    Phone;
    Collages[10];
    Departments[100];
} //Constructor

string university::addCollages(){
    data_control data;
    data.load_university_data();
    string extern facarr[10];
    string name;
    cout << "Enter the name of the collage: ";
    cin >> name;
    for(int i = 0; i < 10; i++){
        if(facarr[i] == ""){
            facarr[i] = name;
            break;
        }
    }
    data.write_fac_data();
    return name;
}

string university::addDepartments(){
    data_control data;
    data.load_university_data();
    string extern deparr[100];
    string name;
    cout << "Enter the name of the department: ";
    cin >> name;
    for(int i = 0; i < 100; i++){
        if(deparr[i] == ""){
            deparr[i] = name;
            break;
        }
    }
    data.write_dep_data();
    return name;
}

void university::setCollages() {
    data_control data;
    data.load_university_data();
    string extern facarr[10];

    for(int i = 0; i < 10; i++){
        Collages[i] = facarr[i];
    }
}
void university::setDepartments(){
    data_control data;
    data.load_university_data();
    string extern deparr[100];

    for(int i = 0; i < 100; i++){
        Departments[i] = deparr[i];
    }

}

void university::getCollages(){
    int x;
    for(int i = 0; i < 10; i++){
        if(Collages[i] != ""){
            cout << i+1 << ". " << Collages[i] << endl;
            x = i+1;
        }
    }
    cout << "There are " << x << " collages in the university" << endl;
}
void university::getDepartments(){
    int x;
    for(int i = 0; i < 100; i++){
        if(Departments[i] != ""){
            cout << i+1 << ". " << Departments[i] << endl;
            x = i+1;
        }
    }
    cout << "There are " << x << " departments in the university" << endl;
}

string university::getName(){
    return Name;}
string university::getLocation(){
    return Location;}
string university::getPhone(){
    return Phone;}
