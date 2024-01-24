#include "CommandManager.h"
#include "MessageManager.h"
#include "CommandListManager.h"
#include "UnknownCommandError.h"

void CommandManager :: command(const char* cmd) const {
  CommandListManager* commandListManager = CommandListManager :: getInstance();
  MessageManager* messageManager = MessageManager :: getInstance();
  if ( cmd == nullptr ) {
    messageManager->help();
    return;
  }
  std::map<std::string, CommandFunctionType> commands(commandListManager->getCommandList());
  std::map<std::string, CommandFunctionType>::const_iterator it = commands.find(cmd);
  if ( it != commands.end() ) it->second();
  else throw UnknownCommandError(UnknownCommandError().what() + cmd);
}

CommandManager* CommandManager :: getInstance() {
  static CommandManager _instance;
  return &_instance;
}
