#pragma once
#include <string>

// 플레이어 상태
struct PlayerStatus
{
    float PlayerHealth = 100.0f;
    float PAttackPower = 15.0f;
    int PlayerGold = 0;
    int X = 0;
    int Y = 0;

    PlayerStatus()
    {
        FindStartPosition(X, Y);
    }
};

// 적 상태
struct EnemyStatus
{
    float EnemyHealth;
    float EAttackPower;
    int DropGold;
};

void Maze0912_Practice();

void ParseMapData(const char* FileName);
void InitializeMaze();
void PrintMaze(int PlayerX, int PlayerY);
void FindStartPosition(int& OutStartX, int& OutStartY);
bool IsEnd(int x, int y);
int PrintAvailableMoves(int x, int y);
int GetMoveInput(int AvailableDir);

