#include "../include/Table.hpp"
#include <stdexcept>
#include <tuple>
#include <type_traits>

namespace table {

Table::Table(std::string *names, int size) {
  if (names == nullptr)
    throw std::invalid_argument("Array of names is empty.");
  parameter::Parameter *data = new parameter::Parameter[size];
  for (int i = 0; i < size; i++) {
    if (names[i].empty()) {
      delete[] data;
      throw std::invalid_argument("Name of parameter is empty.");
    }
    data[i] = parameter::Parameter{names[i]};
  }
  this->data_ = data;
}

Table::Table(std::string name, int value) {
  parameter::Parameter param{name, value};
  this->size_ = 1;
  this->data_ = new parameter::Parameter[this->size_];
  this->data_[0] = param;
}

Table::Table(const Table &other) {
  delete[] this->data_;
  this->size_ = other.size_;
  if (other.data_) {
    std::copy(other.data_, other.data_ + other.size_, this->data_);
  } else {
    this->data_ = nullptr;
  }
}

Table::Table(Table &&other) {
  std::swap(this->data_, other.data_);
  std::swap(this->size_, other.size_);
}

Table &Table::operator=(const Table &other) {
  if (this != &other) {
    delete[] this->data_;
    this->size_ = other.size_;
    if (other.data_) {
      std::copy(other.data_, other.data_ + other.size_, this->data_);
    } else {
      this->data_ = nullptr;
    }
  }
  return *this;
}

Table &Table::operator=(Table &&other) noexcept {
  if (this != &other) {
    std::swap(this->data_, other.data_);
    std::swap(this->size_, other.size_);
  }
  return *this;
}

parameter::Parameter &Table::operator[](std::string name) {
  int result;
  for (int i = 0; i < this->size_; i++) {
    if (this->data_[i].get_name() == name) {
      result = i;
      break;
    }
  }
  return this->data_[result];
}

bool Table::operator()(const parameter::Parameter &param, int complexity,
                       parameter::Modes mode) {
  bool result = true;

  if (mode == parameter::Modes::Complexity)
    result = param.check_with_complexity(complexity);
  else if (mode == parameter::Modes::Benefit)
    result = param.check_with_benefit(complexity);
  else
    result = param.check_with_interference(complexity);

  return result;
}

} // namespace table
