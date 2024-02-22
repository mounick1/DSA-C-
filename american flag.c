#include<iostream>

int main() {
    const int width = 50;
    const int height = 13;

    for (int i = 0; i < height; ++i) {
        for (int j = 0; j < width; ++j) {
            if (i < 7 && j < 10) {
                std::cout << "*";
            }
            else {
                if ((i % 2 == 0 && j % 2 == 0) || (i % 2 == 1 && j % 2 == 1)) {
                    std::cout << "=";
                } else {
                    std::cout << " ";
                }
            }
        }
        std::cout << "\n";
    }

    return 0;
}
