/*
  IO.h - library for basic Input/Output
  Created by Luis Ponce, January 29, 2014
 */

#ifndef IO_h
#define IO_h

class IO {
 public:
  IO(int serial);
  int recv();
  void wrt(String s);
}

#endif
