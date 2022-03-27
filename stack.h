#pragma once

#include <cstdlib>

template <typename T>
class stack { 
private:
    const static size_t CAPACITY = 100; 
    T data[CAPACITY];
    size_t count; 
public: 
  stack () {count =0;}                
  bool empty () { return count == 0; }
  void pop() {
    if (count == 0)
      throw "Stack Underflow";
    count --;}
  void push (const T& val) {
    if (count == CAPACITY)
      throw "Stack Overflow"; 
    data[count++] = val;}
  size_t size() {return count;}
  T& top() { return data[count-1]; } 
}; 