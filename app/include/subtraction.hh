#ifndef SUBTRACTION_HH
#define SUBTRACTION_HH

#include "operation.hh"

template <class T> class Subtraction : public Operations<T>{
  public: T operator()(const T &a, const T &b) {
  	return a - b;
  }
};

#endif