#ifndef TABLE_HPP
#define TABLE_HPP

#include "../../parameter/include/Parameter.hpp"

#include <istream>
#include <ostream>
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
  Table(const Table &other);
  Table(Table &&other);

  parameter::Parameter &operator[](std::string name);
  bool operator()(const parameter::Parameter &param, parameter::Modes mode);

  Table &operartor += (parameter::Parameter & param);
  Table &operator=(const Table &other);
  Table &operator=(Table &&other) noexcept;

  friend std::ostream &operator<<(std::ostream &s, const Table &table);
  friend std::istream &operator>>(std::istream &s, Table &other);
};

} // namespace table

#endif
