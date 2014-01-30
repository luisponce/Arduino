/*
  IO.cpp - library for basic Input/Output
  Created by Luis Ponce, January 29, 2014
 */

#include "Arduino.h"
#include "IO.h"

IO :: IO(int serial){
  _serial = serial;
}

void IO :: init(){
  Serial.begin(_serial);
}

int IO :: recv(){
  if(Serial.available()){
    return (int) Serial.read() - 48;
  }

  return -1;
}

void IO :: wrt(String s) {
  Serial.println(s);
}

void IO :: wrt(int s){
  Serial.println(s);
}
