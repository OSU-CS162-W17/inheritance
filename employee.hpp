#include "universityperson.hpp"

#ifndef EMPLOYEE_HPP
#define EMPLOYEE_HPP

class Employee : public UniversityPerson {
private:
  std::string title;
  float wage;
public:
  Employee(std::string name, int id, std::string title, float wage);
  std::string get_title();
  float get_monthly_pay(float hours_worked);
};

#endif
