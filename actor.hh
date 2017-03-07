#pragma once

#include <iostream>
#include <string>
#include <thread>
#include <vector>

namespace AT {
struct Actor {
  std::string name;
  std::thread thread;
  std::vector<std::string> inbox;
  Actor(std::string name);
  void start();
  void wait();
  std::shared_ptr<Actor> f();
  static void loop(Actor *actor) {
    std::cout << "Thread " << actor->name << " executing" << std::endl;
  }
};
}
