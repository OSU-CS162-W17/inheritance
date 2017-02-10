#include "universityperson.hpp"

#ifndef EMPLOYEE_HPP
#define EMPLOYEE_HPP

class Employee : public UniversityPerson {
private:
  std::string title;
  float wage;
public:
  Employee(std::string name, int id, std::string title, float wage);
  float get_monthly_pay();
};

#endif
