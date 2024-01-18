// The content provided herein is intended solely for
// educational purposes. No part of this material may be
// reproduced, distributed, or sold without explicit permission.
// All rights to the content are reserved within the guidelines
// set forth by Eastern Washington University (EWU) and the ACM Club.
// Unauthorized use or distribution is strictly prohibited. Any
// requests for reproduction or distribution should be directed to
// the appropriate authorities at EWU or the ACM Club in accordance
// with their established guidelines and policies.

#include <iostream>
//#include <vector>
//#include <string>
//#include <fstream>
//#include <cmath>

#include "Basics.h"
#include "ArrayList.h"
#include "Stack.h"
#include "List.h"


#define BIGGER(x, y) (x > y ? x : y)

using namespace std;
//using namespace example;

// function header
void myFirstProgram();

int main (int argc, char* argv[]) {
//int main () {
  // Demo 0 main function
//  mainProgram(argc, argv);

  // TO-DO TryMe
//  showMessage();
  myFirstProgram();

  //Demo 1 Variables
//  variables();
//  variables(true);

  // Example usage
  auto* list1 = new ArrayList<int>();
  list1->addElement(42);
  list1->addElement(24);
  list1->printList();  // Calls ArrayList-specific printList()

  // Example usage with double
  Stack<double>* list2 = new Stack<double>();
  list2->push(3.14);
  list2->printList();  // Calls Stack-specific printList()

  delete list1;
  delete list2;


  auto x = 5;
  auto y = 5.6;
  auto z = x + y;
  printf("%f\n",z); // C language being used here

  return 0;
}

// TO-DO TryMe
// function body/definition
void myFirstProgram(){
  // uncommon the necessary code to make it run Clion building debugger helps!
  // write something you like Hello World!
  cout << "Hello World?" << endl;
}