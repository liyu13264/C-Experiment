//
// Created by liyu on 19-4-28.
//

#ifndef C__EXPERIMENT_STUDENT_H
#define C__EXPERIMENT_STUDENT_H
#pragma once
#include <string>
#include <map>
using namespace std;
class Student{
public:
    Student();
    ~Student();
    void set_name(string name);
    string get_name();
    void set_id(string id);
    string get_id();
    void set_program_grade(double grade);
    double get_program_grade();
    void set_signal_process_grade(double grade);
    double get_signal_process_grade();
    void set_data_structure_grade(double grade);
    double get_data_structure_grade();
    static int get_sum();
    static double get_average();
private:
    string stu_name;
    string stu_id;
    double stu_program_grade;
    double stu_signal_process_grade;
    double stu_data_structure_grade;
    static int sum;
    map<string, double> Map;
};

#endif //C__EXPERIMENT_STUDENT_H
