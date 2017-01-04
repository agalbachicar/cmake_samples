#ifndef PRODUCT_HH
#define PRODUCT_HH

#include "operation.hh"

template <class T> class Product : public Operations<T>{
  public: T operator()(const T &a, const T &b) {
  	return a * b;
  }
};

#endif