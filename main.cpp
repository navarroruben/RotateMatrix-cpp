// Ruben Navarro
// 12/18/2019
// main.cpp
// CTCI - Rotate Matrix 90
// Rotates a Matrix 90 Degrees in place

#include <iostream>
#include <vector>
#include "prototypes.h"

int main() {

    std::vector<std::vector<char>> matr {{'A','B','C'}, {'D', 'E', 'F'}, {'G', 'H', 'I'}};

    // check matrix is empty
   if (matr.empty()) {
       std::cout << "Error: Vector is empty!\n";
       return 0;
   }

   // checks if matrix is NxN
   if (matr.size() == 0 || matr[0].size() != matr.size()) {
       std::cout << "Error: Matrix is not NxN\n";
   }

    rotate90(matr);
    displayMatrix(matr);
    return 0;
}
