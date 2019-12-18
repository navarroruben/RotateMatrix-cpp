// Ruben Navarro
// 12/18/2019
// definitions.cpp
// CTCI - Rotate Matrix 90
// Rotates a Matrix 90 Degrees in place

#include <vector>
#include <iostream>

void displayMatrix(std::vector<std::vector<char>> v) {
    for (int i = 0; i < v.size(); ++i) {
        for (int x = 0; x < v.size(); ++x) {
            std::cout << v[i][x] << " ";
        }
        std::cout << std::endl;
    }
}

void rotate90(std::vector<std::vector<char>>& matr) {

    int n = matr.size();
    for (int layer = 0; layer < n / 2; ++layer) {
        int first = layer;
        int last = n - 1 - layer;
        for (int i = first; i < last; ++i) {
            int offset = i - first;

            int top = matr[first][i];

            // left -> top
            matr[first][i] = matr[last - offset][first];

            // bottom -> left
            matr[last - offset][first] = matr[last][last - offset];

            // right -> bottom
            matr[last][last - offset] = matr[i][last];

            // top -> right
            matr[i][last] = top;
        }
    }
}

