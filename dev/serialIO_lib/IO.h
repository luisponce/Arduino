/*
  IO.h - library for basic Input/Output
  Created by Luis Ponce, January 29, 2014
 */

#ifndef IO_h
#define IO_h

#include "Arduino.h"
#include <string>

class IO {
 public:
  IO(int serial);
  void init();
  int recv();
  void wrt(String s);
  void wrt(int s);
 private:
  int _serial;
};

#endif
