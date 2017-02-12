#include <iostream>
#include "employee.hpp"

Employee::Employee(std::string name, int id, std::string title, float wage = 0)
  : UniversityPerson(name, id), title(title), wage(wage) {}


std::string Employee::get_title() {
  return this->title;
}


float Employee::get_monthly_pay(float hours_worked) {
  return hours_worked * this->wage;
}
