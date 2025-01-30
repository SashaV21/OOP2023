#include "../characteristic/characteristic.hpp"
#include <iostream>
#define CATCH_CONFIG_MAIN
#include "catch.hpp"

using namespace characteristic;

TEST_CASE("TEST INIT") {
  SECTION("DefaultConstructor") {
    Characteristic a1;
    REQUIRE(a1.get_name() == "");
    REQUIRE(a1.get_value() == 1);
  }

  SECTION("Name_Only") {
    Characteristic a2{"A"};
    REQUIRE(a2.get_name() == "A");
    REQUIRE(a2.get_value() == 1);
  }

  SECTION("Name and value") {
    Characteristic a3{"B", 10};
    REQUIRE(a3.get_name() == "B");
    REQUIRE(a3.get_value() == 10);
  }
  SECTION("EXCEPTIONS") {
    REQUIRE_THROWS(Characteristic{""});
    REQUIRE_THROWS(Characteristic{"A", 200});
  }
}

TEST_CASE("SETTERS") {
  SECTION("Set name") {
    Characteristic a;
    a.set_name("A");
    REQUIRE(a.get_name() == "A");
  }
  SECTION("Set value") {
    Characteristic a;
    a.set_value(10);
    REQUIRE(a.get_value() == 10);
  }
  SECTION("Exception") {
    Characteristic a;
    REQUIRE_THROWS(a.set_name(""));
    REQUIRE_THROWS(a.set_value(200));
  }
}

TEST_CASE("INCREASE_VALUE") {
  SECTION("Increase") {
    Characteristic a{"A", 10};
    a.increase_value(5);
    REQUIRE(a.get_value() == 15);
  }
  SECTION("Exception") {
    Characteristic a{"A", 10};
    REQUIRE_THROWS(a.increase_value(20));
  }
}

/*TEST_CASE("Check with complexity") {
  SECTION("complexity") {
    Characteristic a{"A", 10};
    REQUIRE(a.check_wirh_complexity(9) == true);
  }
  SECTION("Exception") {
    Characteristic a{"A", 10};
    REQUIRE(a.check_wirh_complexity(1200) == false);
  }
}*/
