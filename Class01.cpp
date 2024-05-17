#include <iostream>

class Log {
public:
  // const int LogLevelError = 0;
  // const int LogLevelWarning = 1;
  // const int LogLevelInfo = 2;

  enum Level {
    LevelError = 0, Warning, LevelInfo
  };

private:
  Level m_LogLevel = LevelInfo;

public:
  void SetLevel(Level level) {
    m_LogLevel = level;
  }

  void Error(const char* message) {
    if (m_LogLevel >= LevelError)
      std::cout << "[ERROR]: " << message << std::endl;
  }

  void Warn(const char* message) {
    if (m_LogLevel >= Warning)
      std::cout << "[WARNING]: " << message << std::endl;
  }

  void Info(const char* message) {
    if (m_LogLevel >= LevelInfo)
      std::cout << "[INFO]: " << message << std::endl;
  }
};

void Class01() {
  Log log;
  // log.SetLevel(Log::LevelError);
  log.Warn("Hello");
  log.Info("Hello");
  log.Error("Hello");
}
