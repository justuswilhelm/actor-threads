#include "registry.hh"

namespace AT {
  void Registry::start() {
    for (auto actor : *this) {
      actor.second->start();
    }
  }

  void Registry::wait() {
    for (auto actor : *this) {
      actor.second->wait();
    }
  }

  void Registry::add(std::shared_ptr<Actor> actor) {
    this->emplace(actor->name, actor);
  }
}
