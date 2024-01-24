#include "CommandListManager.h"
#include "MessageManager.h"

std::map<std::string, CommandFunctionType> CommandListManager :: commandList;

CommandListManager :: CommandListManager() {
  createCommandList();
}

CommandListManager :: ~CommandListManager() {}

void CommandListManager :: createCommandList() {
  static MessageManager* messageManager = MessageManager :: getInstance();
  // commandList[nullptr] = { []() { messageManager->help(); } };
  commandList["help"] = { []() { messageManager->help(); } };
  commandList["--help"] = { []() { messageManager->help(); } };
  commandList["version"] = { []() { messageManager->version(); } };
  commandList["--version"] = { []() { messageManager->version(); } };
}

CommandListManager* CommandListManager :: getInstance() {
  static CommandListManager _instance;
  return &_instance;
}

const std::map<std::string, CommandFunctionType>& CommandListManager :: getCommandList() {
  return this->commandList;
}
