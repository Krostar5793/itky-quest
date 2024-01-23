#include "CommandManager.h"

void CommandManager :: command(const std::string cmd) const {
  const std::map<std::string, std::string>::const_iterator it = ::commands.find(cmd);
  if ( it != ::commands.end() ) {
     static MessageManager* messageManager = MessageManager :: getInstance();
     if ( it->second == "help" )    messageManager->help();
     if ( it->second == "version" ) messageManager->version();
  } else {
    throw UnknownCommandError(UnknownCommandError().what() + cmd);
  }
}

CommandManager* CommandManager :: getInstance() {
  static CommandManager _instance;
  return &_instance;
}
