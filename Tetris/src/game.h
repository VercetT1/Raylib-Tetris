#pragma once
#include "grid.h"
#include "blocks.cpp"

class Game
{
public:
    Game();
    ~Game();
    void Draw();
    void HandleInput();
    void MoveBlockDown();

public:
    bool gameOver;
    int score;
    Music music;

private:
    Grid grid;
    std::vector<Block> blocks;
    Block currentBlock;
    Block nextBlock;

private:
    bool IsBlockOutside();
    Block GetRandomBlock();
    std::vector<Block> GetAllBlocks();
    void MoveBlockLeft();
    void MoveBlockRight();
    void RotateBlock();
    void LockBlock();
    bool BlockFits();
    void Reset();
    void UpdateScore(int linesCleared,int moveDownPoints);
    Sound rotateSound;
    Sound clearSound;
};