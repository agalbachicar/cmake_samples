#ifndef SUM_HH
#define SUM_HH

#include "operation.hh"

template <class T> class Sum : public Operations<T>{
  public: T operator()(const T &a, const T &b) {
  	return a + b;
  }
};

#endif