#include <iostream>
#include <vector>

int main() {
    size_t rows, columns;
    std::cin >> rows >> columns;

    rows += 2;
    columns += 2;

    int mines;
    std::cin >> mines;

    std::vector<std::vector<char>> gameField(rows, std::vector<char>(columns, '0'));

    while (mines) {
        int x, y;
        std::cin >> x >> y;

        gameField[x][y] = '*';

        for (size_t i = (x - 1); i != (x + 2); ++i) {
            if (gameField[i][y + 1] != '*') {
                ++gameField[i][y + 1];
            }

            if (gameField[i][y - 1] != '*') {
                ++gameField[i][y - 1];
            }
        }

        if (gameField[x - 1][y] != '*') {
            ++gameField[x - 1][y];
        }

        if (gameField[x + 1][y] != '*') {
            ++gameField[x + 1][y];
        }

        --mines;
    }

    for (size_t i = 1; i != rows - 1; ++i) {
        for (size_t j = 1; j != columns - 1; ++j) {
            std::cout << gameField[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}