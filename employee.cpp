#include <iostream>
#include "employee.hpp"

Employee::Employee(std::string name, int id, std::string title, float wage)
  : UniversityPerson(name, id), title(title), wage(wage) {}

float Employee::get_monthly_pay() {
  return 160 * this->wage;
}
