#include <iostream>
#include <vector>
#include <string>

void printRecursiveSquare(int size, char texture) {
    std::vector<std::string> grid(size, std::string(size, ' '));

    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            if (i == 0 || i == size - 1 || j == 0 || j == size - 1) {
                grid[i][j] = texture;
            } else {
                grid[i][j] = '.';
            }
        }
    }

    for (const auto& row : grid) {
        for (const auto& ch : row) {
            std::cout << ch << "     ";
        }
        std::cout << "\n";
    }
}

int main() {
    std::cout << "Фигура: \"Рекурсивный квадрат\"\n";
    int size;
    char texture;

    std::cout << "Размер: \t";
    std::cin >> size;
    std::cout << "Текстура: \t";
    std::cin >> texture;

    std::cout << "Результат:\n\n";

    printRecursiveSquare(size, texture);

    return 0;
}
