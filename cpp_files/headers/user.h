//(h)This file is for Users Data

#include <iostream>
#include <string>
#ifndef USM_FINAL_USER_H
#define USM_FINAL_USER_H
using namespace std;

class user {
private:
    int ID;
    string role;
    string email;
    string password;
    bool loggedin;
    int dlocation;

public:
    user();

    int validate(int id, string pass);

    void setdlocation(int d);
    int getdlocation();

    int getid();

    string getpass();

    string getrole();

    string getemail();

    bool getloggedin();

    void changepass();

    void logout();


};


#endif //USM_FINAL_USER_H
