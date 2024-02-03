#pragma once
#include <vector>
#include <raylib.h>

class Grid
{
private: // Fields
    int numRows;
    int numCols;
    int cellSize;
    std::vector<Color> colors;

private: // Methods
    bool IsRowFull(int row);
    void ClearRow(int row);
    void MoveRowDown(int row, int numRows);

public: // Fields
    int grid[20][10];

public: // Methods and Constructor
    Grid();
    void Draw();
    int ClearFullRows();
    bool IsCellOutside(int row, int column);
    void Initilaize();
    void Print();
    bool IsCellEmpty(int row, int column);
};