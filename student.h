#ifndef STUDENT_H
#define STUDENT_H

class Student {
public:
    int id;
    float gpa;
    string state;

    Student(int i, float g, string s);
};

Student generate_student();

#endif