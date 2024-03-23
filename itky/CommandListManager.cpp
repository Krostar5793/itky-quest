#include "CommandListManager.h"
#include "CommandManager.h"
#include "MessageManager.h"

std::map<std::string, CommandFunctionType> CommandListManager :: commandList;

CommandListManager :: CommandListManager() {
  createCommandList();
}

CommandListManager :: ~CommandListManager() {}

void CommandListManager :: createCommandList() {
  static CommandManager* commandManager = CommandManager :: getInstance();
  commandList["-help"]      = { []() { commandManager->help(); } };
  commandList["--help"]     = { []() { commandManager->help(); } };
  commandList["-version"]   = { []() { commandManager->version(); } };
  commandList["--version"]  = { []() { commandManager->version(); } };
  commandList["edit"]       = { []() { commandManager->edit(); } };
  commandList["view"]       = { []() { commandManager->view(); } };
}

CommandListManager* CommandListManager :: getInstance() {
  static CommandListManager _instance;
  return &_instance;
}

const std::map<std::string, CommandFunctionType>& CommandListManager :: getCommandList() {
  return this->commandList;
}
