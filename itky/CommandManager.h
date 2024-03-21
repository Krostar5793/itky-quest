#pragma once

#include <iostream>
#include <string>
#include <map>
#include <algorithm>
#include <fstream>

#include "MessageManager.h"

class CommandManager {
  private:
    CommandManager() = default;
    ~CommandManager() = default;

  public:
    CommandManager(const CommandManager&) = delete;
    CommandManager(const CommandManager&&) = delete;
    CommandManager& operator=(const CommandManager&) = delete;
    CommandManager& operator=(const CommandManager&&) = delete;

    void command(const char* cmd) const;

    static CommandManager* getInstance();
};
