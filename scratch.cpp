#include <iostream>
#include "universityperson.hpp"
#include "employee.hpp"
#include "instructor.hpp"

void give_raise(Employee& employee, float percent_raise) {
  employee.pay_rate *= (1.0 + percent_raise);
}


bool operator==(const UniversityPerson& p1, const UniversityPerson& p2) {
  return p1.id == p2.id;
}


int main() {
  UniversityPerson person("Luke Skywalker", 933123456);
  std::cout << "person: " << person.get_name() << "\t" << person.get_id()
    << std::endl;
  std::cout << std::endl;

  Employee employee("Darth Vader", 933654321, "Director of HR", 31.5);
  std::cout << "employee: " << employee.get_name() << "\t" << employee.get_id()
    << std::endl;
  std::cout << "\ttitle: " << employee.get_title() << std::endl;
  std::cout << "\tmonthly pay: " << employee.get_monthly_pay(160) << std::endl;
  std::cout << std::endl;

  // give_raise(employee, 0.10);
  // std::cout << "employee (after raise): " << employee.get_name() << "\t" << employee.get_id()
  //   << std::endl;
  // std::cout << "\ttitle: " << employee.get_title() << std::endl;
  // std::cout << "\tmonthly pay: " << employee.get_monthly_pay(160) << std::endl;
  // std::cout << std::endl;
  //
  // UniversityPerson person2("Luke Skywalker", 933111111);
  // std::cout << "person == person2? " << (person == person2) << std::endl;

  Instructor instructor("Princess Leia", 933111111, "CS Instructor", 1000000, 9);
  std::cout << "instructor: " << instructor.get_name() << "\t" << instructor.get_id()
    << std::endl;
  std::cout << "\ttitle: " << instructor.get_title() << std::endl;
  std::cout << "\tmonthly pay: " << instructor.get_monthly_pay(160) << std::endl;
  std::cout << std::endl;
}
