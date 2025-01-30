#ifndef PARAMETER_HPP
#define PARAMETER_HPP

#include <string>

namespace parameter {

enum D_20 : int { MinValue = 1, MaxValue = 20 };

enum Limits : int { Min = 1, Max = 20 };

enum class Modes {
  Complexity,
  Benefit,
  Interference,
};

class Parameter {
private:
  std::string name_;
  int value_ = Limits::Min;

  bool is_valid(int value) const;

public:
  Parameter() = default;
  explicit Parameter(std::string name);
  Parameter(std::string name, int value);

  std::string get_name() const;
  void set_name(std::string name);

  int get_value() const;
  void set_value(int value);

  bool check_with_complexity(int complexity) const;
  bool check_with_benefit(int complexity) const;
  bool check_with_interference(int complexity) const;

  Parameter &operator+=(int changing);
};
} // namespace parameter
#endif
