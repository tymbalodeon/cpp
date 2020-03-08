/*
 * g++ -c [class file name]
 * g++ -c [main file name]
 * g++ [class.o] [main.o] -o [output name] 
 */
 
#include <iostream> 
#include "Cat.h" 

using namespace std;

int main() {
  
  Cat cat;
  
  cat.speak();
  cat.jump();
  
  return 0;
}
