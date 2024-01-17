//
// Created by apert on 1/16/2024.
//

#ifndef CPPWORKSHOP_STACK_H
#define CPPWORKSHOP_STACK_H

#include <iostream>
#include <vector>
#include "List.h"

// Child Stack class inheriting from List
template <typename T>
class Stack : public List<T> {
 private:
  std::vector<T> stack;

 public:
  void push(T value) {
    stack.push_back(value);
  }

  void pop() {
    if (!stack.empty()) {
      stack.pop_back();
    }
  }

  void printList() const override {
    std::cout << "Printing Stack: ";
    for (const T& element : stack) {
      std::cout << element << " ";
    }
    std::cout << std::endl;
  }
};

#endif //CPPWORKSHOP_STACK_H
