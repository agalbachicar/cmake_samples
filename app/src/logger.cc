#include "logger.hh"

Logger::Logger(std::ostream& stream): log(stream) {
}

Logger& Logger::operator<<(LoggerManipulator manip) {
  return manip(*this);
}

Logger& Logger::operator<<(StandardEndLine manip) {
  manip(std::cout);
  return *this;
}
