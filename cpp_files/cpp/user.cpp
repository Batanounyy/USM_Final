//This file is to load data from files and write data to files and save them into specific Arrays
#include <iostream>
#include <string>
#include "../headers/data_control.h"
#include "../headers/user.h"
using namespace std;

user::user() {
    ID=-1;
    role = "non";
    email = "";
    password = "";
    loggedin = false;
    dlocation = -1;
}

void user::logout() {
    ID=-1;
    role = "non";
    email = "";
    password = "";
    loggedin = false;
    dlocation = -1;
}

int user::validate(int id, string pass) {
    data_control data;
    data.load_user_data();

    int extern idarr[50];
    string extern passarr[50];
    string extern rolearr[50];
    string extern emailarr[50];

    for (int i = 0; i < 51; i++) {
        if (id == idarr[i] && pass == passarr[i]) {
            cout << "Logged in as " << idarr[i] << endl;
            user::ID = idarr[i];
            user::role = rolearr[i];
            user::email = emailarr[i];
            user::loggedin = true;
            setdlocation(i);
            return i;
        }
    }
    cout << "Invalid ID or Password";
    return -1;
}

void user::setdlocation(int d) {
    dlocation = d;

}

int user::getdlocation() {
    return dlocation;
}






int user::getid() {
    return ID;
}
string user::getrole() {
    return role;
}
string user::getemail() {
    return email;
}
string user::getpass() {
    return password;
}
bool user::getloggedin() {
    return loggedin;
}

