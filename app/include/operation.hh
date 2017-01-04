#ifndef OPERATION_HH
#define OPERATION_HH

template <class T> class Operations {
  public: virtual T operator()(const T &a, const T &b) = 0;
};

#endif