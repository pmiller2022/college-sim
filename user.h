#ifndef USER_H
#define USER_H

typedef enum {
    WINTER,
    SPRING,
    SUMMER,
    FALL
} Season;

class User {
public:
    string name;
    int money;
    Season season;
    int year;

    vector<Student> stus;
    vector<Professor> pros;

    User(string n, int m, Season s, int y);

    void GameLoop();

};

#endif