#include "actor.hh"

namespace AT {
Actor::Actor(std::string name) : name(name) {}

void Actor::start() {
  std::cout << "Starting thread " << name << std::endl;
  thread = std::thread(loop, this);
}

void Actor::wait() { thread.join(); }
}
