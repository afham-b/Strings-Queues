#pragma once 

#include <cstdlib>

template <typename T>
class stack { 
private:
    class node{
      public:
        T data;
        node* next; 
    };
    node* top;
    size_t count; 
public: 
  stack () {p_top = nullptr; count =0;}
  ~ stack () {while (!empty()) pop(); }
  bool empty () { return count == 0; }
  void pop() {
     node* p = p_top;
      p_top = p_top-> next; 
      delete p; 
      count --;}
  void push (const T& val) {
      node* p = new node; 
      p->data = val;
      p->next = p_top;
      p_top = p;
      couunt ++; }  
  size_t size() {return count;}
  T& top() { return p-top->data]; } 
};
