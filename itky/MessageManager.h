#pragma once

#include <iostream>
#include <string>
#include <fstream>

#include "FileNotFoundError.h"

class MessageManager {
  private:
    MessageManager() = default;
    ~MessageManager() = default;

    void printTextFile(const std::string fileName);

  public:
    MessageManager(const MessageManager&) = delete;
    MessageManager(const MessageManager&&) = delete;
    MessageManager& operator=(const MessageManager&) = delete;
    MessageManager& operator=(const MessageManager&&) = delete;

    static MessageManager* getInstance();

    void help();
    void version();
};
