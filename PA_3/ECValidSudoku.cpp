#include <string>
#include <vector>

bool ECValidSudoku(const std::vector<std::vector<std::string>> &board) {
    // A valid Sudoku board must be exactly 9 by 9.
    if (board.size() != 9) {
        return false;
    }
    for (const auto &row : board) {
        if (row.size() != 9) {
            return false;
        }
    }

    // Check that every cell is either "." or one digit from "1" to "9".
    for (const auto &row : board) {
        for (const auto &cell : row) {
            if (cell == ".") {
                continue;
            }
            if (cell.size() != 1 || cell[0] < '1' || cell[0] > '9') {
                return false;
            }
        }
    }

    // Check every row for repeated digits.
    for (int row = 0; row < 9; ++row) {
        bool seen[9] = {false};
        for (int col = 0; col < 9; ++col) {
            if (board[row][col] != ".") {
                int digit = board[row][col][0] - '1';
                if (seen[digit]) {
                    return false;
                }
                seen[digit] = true;
            }
        }
    }

    // Check every column for repeated digits.
    for (int col = 0; col < 9; ++col) {
        bool seen[9] = {false};
        for (int row = 0; row < 9; ++row) {
            if (board[row][col] != ".") {
                int digit = board[row][col][0] - '1';
                if (seen[digit]) {
                    return false;
                }
                seen[digit] = true;
            }
        }
    }

    // Check each 3 by 3 box for repeated digits.
    for (int boxRow = 0; boxRow < 9; boxRow += 3) {
        for (int boxCol = 0; boxCol < 9; boxCol += 3) {
            bool seen[9] = {false};
            for (int row = boxRow; row < boxRow + 3; ++row) {
                for (int col = boxCol; col < boxCol + 3; ++col) {
                    if (board[row][col] != ".") {
                        int digit = board[row][col][0] - '1';
                        if (seen[digit]) {
                            return false;
                        }
                        seen[digit] = true;
                    }
                }
            }
        }
    }

    return true;
}
