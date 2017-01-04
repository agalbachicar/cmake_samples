#include <iostream>

#include "appConfig.hh"
#include "lib.hh"
#include "logger.hh"

int main(int argc, char **argv) {
  double a = 2.0;
  double b = 5.0;
  Logger log;

  log << argv[0] << "." << app_VERSION_MAJOR << "." << app_VERSION_MINOR << std::endl;
  
  Operations<double> *op;

  op = new Sum<double>;
  log << a << " + " << b << " = " << (*op)(a,b) << std::endl;
  delete op;

  op = new Subtraction<double>;
  log << a << " - " << b << " = " << (*op)(a,b) << std::endl;
  delete op;
  
  op = new Product<double>;
  log << a << " * " << b << " = " << (*op)(a,b) << std::endl;
  delete op;
  
  op = new Division<double>;
  log << a << " / " << b << " = " << (*op)(a,b) << std::endl;
  delete op;

  return 0;
}