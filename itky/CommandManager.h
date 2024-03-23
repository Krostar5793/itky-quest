#pragma once

#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <algorithm>
#include <fstream>

#include "MessageManager.h"

class CommandManager {
  private:
    std::vector<std::string>::iterator params_it;
    std::vector<std::string>::iterator params_it_end;

  private:
    CommandManager() = default;
    ~CommandManager() = default;

  public:
    CommandManager(const CommandManager&) = delete;
    CommandManager(const CommandManager&&) = delete;
    CommandManager& operator=(const CommandManager&) = delete;
    CommandManager& operator=(const CommandManager&&) = delete;

    void command(std::vector<std::string>);

    void help();
    void version();
    void edit();
    void view();

    static CommandManager* getInstance();
};
