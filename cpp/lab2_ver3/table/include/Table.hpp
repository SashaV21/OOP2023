#ifndef TABLE_HPP
#define TABLE_HPP

#include "../../parameter/include/Parameter.hpp"

#include <string>

namespace table {

class Table {
private:
  int max_size_;
  int curr_size_;
  parameter::Parameter *data;

public:
  Table() = default;
  explicit Table(std::string *names);
  Table(std::string name, int value);
};

} // namespace table

#endif
