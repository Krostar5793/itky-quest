#pragma once

#include <string>
#include <map>
#include <functional>

using CommandFunctionType = std::function<void()>;

class CommandListManager {
  private:
    CommandListManager();
    ~CommandListManager();

    static std::map<std::string, CommandFunctionType> commandList;
    void createCommandList();

  public:
    static CommandListManager* getInstance();
    const std::map<std::string, CommandFunctionType>& getCommandList();
};
