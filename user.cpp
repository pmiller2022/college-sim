#include <iostream>
#include <string>
#include <vector>
using namespace std;

#include "student.h"
#include "user.h"

User::User(string n, int m, Season s, int y) : name(n), money(m), season(s), year(y) 
{}

void User::GameLoop() {
    cout << "yo";
}

int main(int argc, char* argv[]){
    User u("user", 100, WINTER, 2025);

    u.GameLoop();

    return 0;
}