//Alex Ryan 
//Aodhan Shaw

#include <iostream>
#include <fstream>
#include <string>

struct Operators{     //Creation of struct with all attributes
    std::string org;
    std::string name;
    std::string role;
    int armor;
    int speed;
    int difficulty;
    std::string primary;
    std::string primary2;
    std::string secondary;
};

void showOperators(int numOp, Operators *Op); //function prototype
void seachOperators(int numOp, Operators *Op);
//std::string compareNames(int numOp, Operators *Op);
int main(){  //Beginning of main

std::ifstream file("input.txt"); //Opening file
int numOp; 
//Operators recordOperators;
file >> numOp;

Operators* Op = new Operators[numOp];
for (int i = 0; i < numOp; i++){
    file >> Op[i].org;
    file >> Op[i].name;
    file >> Op[i].role;
    file >> Op[i].armor;
    file >> Op[i].speed;
    file >> Op[i].difficulty;
    file >> Op[i].primary;
    file >> Op[i].primary2;
    file >> Op[i].secondary;
}
showOperators(numOp, Op);
delete[] Op;  //deleting the memory stored on heap
}

void showOperators(int numOp, Operators *Op){ //This function prints the info.

for (int i = 0; i < numOp; i++){
    std::cout << Op[i].org << ' ';
    std::cout << Op[i].name << ' ';
    std::cout << Op[i].role << ' ';
    std::cout << Op[i].armor << ' ';
    std::cout << Op[i].speed << ' ';
    std::cout << Op[i].difficulty << ' ';
    std::cout << Op[i].primary << ' ';
    std::cout << Op[i].primary2 << ' ';
    std::cout << Op[i].secondary << std::endl;
}
}

void searchOperators(int numOp, Operators *Op){
  int count;
  std::string operatorChoice; 

  for (int i = 0; i < numOp; i++){

    std::cout << Op[i].name << ' ';

    if(count < 5){
      std::cout << '\n';
      count = 0;
    }
  }

  std::cout << "What Operator would you like to learn about? ";
  std::cin >> operatorChoice;

compareNames(numOp, Op, operatorChoice)
}

std::string compareNames(int numOp, Operators *Op, std::string operatorChoice){

}

