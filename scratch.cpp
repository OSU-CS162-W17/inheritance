#include <iostream>
#include "universityperson.hpp"
#include "employee.hpp"

int main() {
  UniversityPerson person("Luke Skywalker", 933123456);
  std::cout << "person: " << person.get_name() << "\t" << person.get_id()
    << std::endl;

  Employee employee("Darth Vader", 933654321, "Director of HR", 31.5);
  std::cout << "employee: " << employee.get_name() << "\t" << employee.get_id()
    << std::endl;
  std::cout << "\ttitle: " << employee.get_title() << std::endl;
  std::cout << "\tmonthly pay: " << employee.get_monthly_pay(160) << std::endl;
}
