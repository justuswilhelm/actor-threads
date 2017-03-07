#pragma once

#include <map>
#include <memory>
#include "actor.hh"

namespace AT {
struct Registry : std::map<std::string, std::shared_ptr<Actor>> {
  void start();
  void wait();
  void add(std::shared_ptr<Actor>);
};
static Registry registry;
}
