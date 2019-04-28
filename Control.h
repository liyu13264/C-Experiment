//
// Created by liyu on 19-4-28.
//

#ifndef C__EXPERIMENT_CONTROL_H
#define C__EXPERIMENT_CONTROL_H
#pragma once
#include "Student.h"

class Control: public Student{
public:
    Control();
    ~Control();
    void show_all_student();
    double get_average();
private:
    struct Stu{
        Student student;
        Student *pNext;
    };
};

#endif //C__EXPERIMENT_CONTROL_H
