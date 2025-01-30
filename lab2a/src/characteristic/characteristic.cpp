#include "characteristic.hpp"
#include <stdexcept>

namespace characteristic {
Characteristic::Characteristic(std::string name) : Characteristic() {
  if (name.empty())
    throw std::invalid_argument(
        "Name of characteristic has not any data inside.");

  this->name = name;
}

Characteristic::Characteristic(std::string name, unsigned int value)
    : Characteristic(name) {
  if (value < MIN_VALUE || value > MAX_VALUE)
    throw std::invalid_argument("Value is out of range");

  this->value = value;
}

void Characteristic::set_name(std::string name) {
  if (name.empty())
    throw std::invalid_argument(
        "Name of characteristic has not any data inside.");
  this->name = name;
}

void Characteristic::set_value(unsigned int value) {
  if (value < MIN_VALUE || value > MAX_VALUE)
    throw std::invalid_argument("Value is out of range");
  this->value = value;
}

void Characteristic::increase_value(const unsigned int additional_value) {
  if (this->value + additional_value > MAX_VALUE)
    throw std::logic_error("Can not add this value. Will be out of range.");

  this->value += additional_value;
}

unsigned int get_rand_value() {
  srand(time(NULL));
  return (rand() % 20) + 1;
}

bool Characteristic::check_wirh_complexity(
    const unsigned int complexity_value) const {
  bool result = false;
  unsigned int value_from_cube = get_rand_value();
  if (value_from_cube == MIN_VALUE)
    return false;
  else if (value_from_cube == MAX_VALUE)
    return true;
  if (value_from_cube + this->value >= complexity_value)
    result = true;
  return result;
}

bool Characteristic::check_with_privilage(
    const unsigned int complexity_value) const {
  bool result = false;
  unsigned int value_from_cube_1 = get_rand_value();
  unsigned int value_from_cube_2 = get_rand_value();
  unsigned int value_from_cube{
      std::max<unsigned>(value_from_cube_1, value_from_cube_2)};
  if (value_from_cube == MIN_VALUE)
    return false;
  else if (value_from_cube == MAX_VALUE)
    return true;
  if (value_from_cube + this->value >= complexity_value)
    result = true;
  return result;
}

bool Characteristic::check_with_interference(
    const unsigned int complexity_value) const {
  bool result = false;
  unsigned int value_from_cube_1 = get_rand_value();
  unsigned int value_from_cube_2 = get_rand_value();
  unsigned int value_from_cube{
      std::min<unsigned>(value_from_cube_1, value_from_cube_2)};
  if (value_from_cube == MIN_VALUE)
    return false;
  else if (value_from_cube == MAX_VALUE)
    return true;
  if (value_from_cube + this->value >= complexity_value)
    result = true;
  return result;
}

} // namespace characteristic
