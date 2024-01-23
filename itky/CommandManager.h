#pragma once

#include <iostream>
#include <string>
#include <map>
#include <algorithm>
#include <fstream>

#include "MessageManager.h"

#include "FileNotFoundError.h"
#include "UnknownCommandError.h"

#include "utils/commandList.cpp"

class CommandManager {
  private:
    CommandManager() = default;
    ~CommandManager() = default;

  public:
    CommandManager(const CommandManager&) = delete;
    CommandManager(const CommandManager&&) = delete;
    CommandManager& operator=(const CommandManager&) = delete;
    CommandManager& operator=(const CommandManager&&) = delete;

    void command(const std::string cmd) const;

    static CommandManager* getInstance();

};
