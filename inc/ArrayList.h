//
// Created by apert on 1/16/2024.
//

#ifndef CPPWORKSHOP_ARRAYLIST_H
#define CPPWORKSHOP_ARRAYLIST_H

#include <iostream>
#include <vector>
#include "List.h"

// Child ArrayList class inheriting from List
template <typename T>
class ArrayList : public List<T> {
 private:
  std::vector<T> elements;

 public:
  void addElement(T value) {
    elements.push_back(value);
  }

  void printList() const override {
    std::cout << "Printing ArrayList: ";
    for (const T& element : elements) {
      std::cout << element << " ";
    }
    std::cout << std::endl;
  }
};


#endif //CPPWORKSHOP_ARRAYLIST_H
