//
// Created by apert on 1/2/2024.
//
#include "Basics.h"
#include <iostream>

// Demo 0 main function and hello world?
void mainProgram(int argc, char *argv[]) {
  std::cout << "Number of arguments: " << argc << std::endl;

  // Print each argument
  for (int i = 0; i < argc; ++i) {
    std::cout << "Argument " << i << ": " << argv[i] << std::endl;
  }
  std::cout << std::endl;
}

// Creating a namespace named 'example'
namespace example {
  void showMessage() {
    std::cout << "Hello from the example namespace!" << std::endl;
  }
}

// Demo 1 variables
void variables() {
  bool boolVar = true;
  char charVar = 'A';
  int intVar = 42;
  float floatVar = 3.14f;
  double doubleVar = 2.71828;
  long long longLongVar = 1234567890123456LL;
  short shortVar = 32767;

  std::cout << "boolVar: " << sizeof(boolVar) << " bytes" << std::endl;
  std::cout << "charVar: " << sizeof(charVar) << " bytes" << std::endl;
  std::cout << "intVar: " << sizeof(intVar) << " bytes" << std::endl;
  std::cout << "floatVar: " << sizeof(floatVar) << " bytes" << std::endl;
  std::cout << "doubleVar: " << sizeof(doubleVar) << " bytes" << std::endl;
  std::cout << "longLongVar: " << sizeof(longLongVar) << " bytes" << std::endl;
  std::cout << "shortVar: " << sizeof(shortVar) << " bytes" << std::endl;
}

// TO-DO Try-ME
void variables(bool tryMe) {
  // Let's write some code!
}

// Demo 2 operators and control flows
void fillMyBottle(){
  std::cout << "Let's play fill my bottle (bottle size = 24 oz)" << std::endl;
  float liquid = 0, bottleSize = 24 , percentageFilled = 0, spilled = 0;
  while (liquid <= bottleSize){

  }
  std::cout << "It spilled about " << "" << std::endl;
}