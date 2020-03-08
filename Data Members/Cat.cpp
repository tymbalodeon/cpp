#include <iostream>
#include "Data.h"

using namespace std;

void Cat::speak() {
  if(happy) {
    cout << "Meow!" << endl;
  } else {
    cout << "Ssss!" << endl;
  }
}

void Cat::makeHappy() {
  happy = true;
}

void Cat::makeSad() {
  happy = false;
}
