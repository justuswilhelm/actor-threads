#include <iostream>
#include <memory>
#include <string>
#include <thread>
#include <vector>

#include "actor.hh"
#include "registry.hh"


int main() {
  std::cout << "Hello" << std::endl;
  AT::registry.add(std::make_shared<AT::Actor>("Fizz"));
  AT::registry.add(std::make_shared<AT::Actor>("Buzz"));
  AT::registry.add(std::make_shared<AT::Actor>("Iterator"));
  AT::registry.start();
  AT::registry.wait();
  return 0;
}
