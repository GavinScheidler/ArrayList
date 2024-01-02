#include <iostream>
using namespace std;
#ifndef STUDENT_H_
#define STUDENT_H_


class ArrayList{

private:
//
// Private variables not meant to be publically accessed
//
  int capacity;
  int current;
  int* arr;

public:
//
// Forward declaration of variables meant for public use. 
//
  ArrayList();
  void push(int m);
  void erase(int m);
  string toString();

};

#endif
