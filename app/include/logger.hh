#ifndef LOGGER_H
#define LOGGER_H

#include <iostream>
#include <ostream>
#include <string>
#include <time.h>

class Logger {
public:
  Logger(std::ostream& stream = std::cout);
  // Type of std::cout
  typedef std::basic_ostream<char, std::char_traits<char> > CoutType;
  // Type of end
  typedef CoutType& (*StandardEndLine)(CoutType&);
  // Operator overload for std::endl
  Logger& operator<<(StandardEndLine manip);
  
  template<typename T> Logger& operator<< (const T& data) {
    log << data;
    return *this;
  }

  // function that takes a custom stream, and returns it
  typedef Logger& (*LoggerManipulator)(Logger&);
  // take in a function with the custom signature
  Logger& operator<<(LoggerManipulator manip);
  // Custom endl
  static Logger& endl(Logger& _log) {
    // print a new line
    _log.log << std::endl;
    return _log;
  }

private:
  std::ostream& log;
};
#endif