#include <utility>

#include <utility>

//
// Created by liyu on 19-4-28.
//

#include "Student.h"

Student::Student() {
    stu_name = nullptr;
    stu_id = nullptr;
    stu_program_grade = 0.0;
    stu_signal_process_grade = 0.0;
    stu_data_structure_grade = 0.0;
}

Student::~Student() = default;

void Student::set_name(string name) {
    this->stu_name = std::move(name);
}

string Student::get_name() {
    return this->stu_name;
}

void Student::set_id(string id) {
    this->stu_id = std::move(id);
}

string Student::get_id() {
    return this->stu_id;
}

void Student::set_program_grade(double grade) {
    this->stu_program_grade = grade;
}

double Student::get_program_grade() {
    return this->stu_program_grade;
}

void Student::set_signal_process_grade(double grade) {
    this->stu_signal_process_grade = grade;
}

double Student::get_signal_process_grade() {
    return this->stu_signal_process_grade;
}

void Student::set_data_structure_grade(double grade) {
    this->stu_data_structure_grade = grade;
}

double Student::get_data_structure_grade() {
    return this->stu_data_structure_grade;
}

int Student::get_sum() {
    return 0;
}

double Student::get_average() {
    return 0;
}



