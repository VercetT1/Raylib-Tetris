#pragma once
#include <vector>
#include <map>
#include "positions.h"
#include "colors.h"

class Block
{

public: // Methods and Constructor
    Block();
    void Rotate();
    void Draw(int offsetX, int offsetY);
    void Move(int rows, int columns);
    void UndoRotation();
    std::vector<Position> GetCellPosition();

public: // fields
    int id;
    std::map<int, std::vector<Position>> cells;

private: // fields
    int cellSize;
    int rotationState;
    std::vector<Color> colors;
    int rowOffset;
    int columnOffset;
};