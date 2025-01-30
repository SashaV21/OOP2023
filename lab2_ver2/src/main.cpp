#include <exception>
#include <iostream>
#include <new>

#include "characteristic/table.hpp"
using namespace table;

#include <string>
using std::string;

int main() {
  try {

  } catch (const std::bad_alloc &ba) {
    std::cout << "Not enough memory" << std::endl;
    return 1;

  } catch (const std::exception &e) {
    std::cout << e.what() << std::endl;
    return 1;
  }
  return 0;
}
