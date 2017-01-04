#ifndef DIVISION_HH
#define DIVISION_HH

#include "operation.hh"

template <class T> class Division : public Operations<T>{
  public: T operator()(const T &a, const T &b) {
  	return a / b;
  }
};

#endif