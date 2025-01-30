#ifndef CHARACTERISTIC_HPP
#define CHARACTERISTIC_HPP
#include <iostream>
#include <ostream>
#include <string>
namespace characteristic {

#define MIN_VALUE 1
#define MAX_VALUE 20

class Characteristic {
private:
  std::string name;
  unsigned int value = MIN_VALUE;

public:
  Characteristic() = default;
  Characteristic(std::string name);
  Characteristic(std::string name, unsigned int value);

  void set_name(std::string name);
  void set_value(unsigned int value);

  std::string get_name() const { return this->name; }
  unsigned int get_value() const { return this->value; }

  bool check_wirh_complexity(const unsigned int given_complexity) const;
  bool check_with_privilage(const unsigned int given_complexity) const;
  bool check_with_interference(const unsigned int given_complexity) const;

  void increase_value(const unsigned int additional_value);

  friend std::ostream &operator<<(std::ostream &stream,
                                  const Characteristic &characteristic);
};

} // namespace characteristic

#endif
