#include <iostream>
#include "instructor.hpp"

Instructor::Instructor(std::string name, int id, std::string title, float pay_rate, int appt_length)
  : Employee(name, id, title, pay_rate), appt_length(appt_length) {
  }

float Instructor::get_monthly_pay(float hours_worked) {
  return this->get_pay_rate() / this->appt_length;
}

std::string Instructor::get_title() {
  std::cout << "Getting pay rate: " << Employee::get_pay_rate() << std::endl;
  return Employee::get_title() + "*";
}
