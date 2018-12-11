////////////////////////////
// Ethan Malenchek
// CS3560 Final
// 12/11/2018
////////////////////////////

#include <iostream>
#include <string>
#include <cstdlib>

int countLine(char* pName){
  int temp = 0;

  std::string newS = pName;

  while(std::getline(std::cin,newS)){
    temp++;
  }
  std::cout << temp;

  return temp;
}

int countChar(char* pName){
  int temp = 0;

  while(pName[temp] != 0){
    temp++;
  }
  std::cout << temp;

  return temp;
}

int main() {
  char* pName;

  std::cin >> pName;

  countLine(pName);

  std::cin >> pName;

  countChar(pName);


  return 0;
}
