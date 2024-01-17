//
// Created by apert on 1/16/2024.
//

#ifndef CPPWORKSHOP_LIST_H
#define CPPWORKSHOP_LIST_H

#include <iostream>

template <typename T>
class List {
 public:
  virtual void printList() const {
    std::cout << "Printing generic list" << std::endl;
  }

  virtual ~List() {}
};

#endif //CPPWORKSHOP_LIST_H
