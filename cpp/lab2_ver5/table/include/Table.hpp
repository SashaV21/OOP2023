#ifndef TABLE_HPP
#define TABLE_HPP

#include "../../parameter/include/Parameter.hpp"

#include <istream>
#include <ostream>
#include <string>

namespace table {

class Table {
private:
  int size_;
  parameter::Parameter *data_;

public:
  Table() = default;
  Table(std::string *names, int size);
  Table(std::string name, int value);

  Table(const Table &other);
  Table(Table &&other);

  ~Table() { delete[] this->data_; }

  Table &operator=(const Table &other);
  Table &operator=(Table &&other) noexcept;

  parameter::Parameter &operator[](std::string name);
  bool operator()(const parameter::Parameter &param, int complexity,
                  parameter::Modes mode);

  Table &operator+=(const parameter::Parameter &new_param);

  void sort_by_names();
  parameter::Parameter get_max(std::string *name);

  friend std::ostream &operator<<(std::ostream &s, const Table &table);
  friend std::istream &operator>>(std::istream &s, Table &other);
};

} // namespace table

#endif
