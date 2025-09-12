#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <fstream>
#include <string>
#include <random>
#include <iostream>
#include "Day0909.h"
#include "Day0910.h"
#include "Day0911.h"
#include "Day0912.h"

#define Wall 0
#define Path 1
#define Start 2
#define End 3

#define DirNone 0
#define DirUp 1
#define DirDown 2
#define DirLeft 4
#define DirRight 8

int** Maze = nullptr;
int MazeWidth = 0;
int MazeHeight = 0;



// 맵 파싱
void ParseMapData(const char* FileName)
{
    FILE* fp = nullptr;
    fopen_s(&fp, FileName, "r");
    if (fp == nullptr)
    {
        printf("Map file not found.\n");
        return;
    }

    fscanf_s(fp, "%d %d", &MazeWidth, &MazeHeight);
    Maze = new int* [MazeHeight];

    for (int y = 0; y < MazeHeight; y++)
    {
        Maze[y] = new int[MazeWidth];
        for (int x = 0; x < MazeWidth; x++)
        {
            fscanf_s(fp, "%d", &Maze[y][x]);
        }
    }

    fclose(fp);
}

void InitializeMaze()
{
    ParseMapData("MazeData.txt");
}

void ClearMaze()
{
    if (Maze)
    {
        for (int i = 0; i < MazeHeight; i++)
        {
            delete[] Maze[i];
        }
        delete[] Maze;
        Maze = nullptr;
    }
}

// 출력
void PrintMaze(int PlayerX, int PlayerY)
{
    if (Maze == nullptr) return;

    for (int y = 0; y < MazeHeight; y++)
    {
        for (int x = 0; x < MazeWidth; x++)
        {
            if (PlayerX == x && PlayerY == y)
                printf("P ");
            else if (Maze[y][x] == Wall)
                printf("# ");
            else if (Maze[y][x] == Path)
                printf(". ");
            else if (Maze[y][x] == Start)
                printf("S ");
            else if (Maze[y][x] == End)
                printf("E ");
            else
                printf("? ");
        }
        printf("\n");
    }
}

void FindStartPosition(int& OutStartX, int& OutStartY)
{
    OutStartX = 0;
    OutStartY = 0;
    if (Maze == nullptr) return;

    for (int y = 0; y < MazeHeight; y++)
    {
        for (int x = 0; x < MazeWidth; x++)
        {
            if (Maze[y][x] == Start)
            {
                OutStartX = x;
                OutStartY = y;
                return;
            }
        }
    }
}

bool IsEnd(int x, int y)
{
    return Maze[y][x] == End;
}

int PrintAvailableMoves(int x, int y)
{
    int dir = DirNone;
    if (y > 0 && Maze[y - 1][x] != Wall)
    {
        printf("위 ");
        dir |= DirUp;
    }
    if (y < MazeHeight - 1 && Maze[y + 1][x] != Wall)
    {
        printf("아래 ");
        dir |= DirDown;
    }
    if (x > 0 && Maze[y][x - 1] != Wall)
    {
        printf("왼쪽 ");
        dir |= DirLeft;
    }
    if (x < MazeWidth - 1 && Maze[y][x + 1] != Wall)
    {
        printf("오른쪽 ");
        dir |= DirRight;
    }
    printf("방향으로 이동 가능\n");
    return dir;
}

int GetMoveInput(int AvailableDir)
{
    printf("방향 입력 (WASD): ");
    char input = 0;
    scanf(" %c", &input);

    switch (input)
    {
    case 'w':
    case 'W':
        if (AvailableDir & DirUp)
            return DirUp;
        break;
    case 's':
    case 'S':
        if (AvailableDir & DirDown)
            return DirDown;
        break;
    case 'a':
    case 'A':
        if (AvailableDir & DirLeft)
            return DirLeft;
        break;
    case 'd':
    case 'D':
        if (AvailableDir & DirRight)
            return DirRight;
        break;
    default:
        break;
    }

    printf("이동 불가능한 방향입니다.\n");
    return DirNone;
}

void Maze0912_Practice()
{
    srand(static_cast<unsigned int>(time(nullptr)));

    InitializeMaze();

    PlayerStatus player;
    EnemyStatus enemy;
    enemy.EnemyHealth = static_cast<float>(rand() % 30 + 20);
    enemy.EAttackPower = static_cast<float>(rand() % 10 + 5);
    enemy.DropGold = rand() % 50 + 10;

    bool gameRunning = true;
    while (gameRunning)
    {
        PrintMaze(player.X, player.Y);

        int availableDir = PrintAvailableMoves(player.X, player.Y);
        int dir = GetMoveInput(availableDir);

        switch (dir)
        {
        case DirUp: player.Y--; break;
        case DirDown: player.Y++; break;
        case DirLeft: player.X--; break;
        case DirRight: player.X++; break;
        default: break;
        }

        int eventNum = rand() % 10;
        if (eventNum >= 8)
        {
            printf("적을 만났습니다!\n");

            while (player.PlayerHealth > 0 && enemy.EnemyHealth > 0)
            {
                printf("적의 체력: %.1f\n", enemy.EnemyHealth);
                enemy.EnemyHealth -= player.PAttackPower;

                if (enemy.EnemyHealth <= 0)
                {
                    printf("적을 물리쳤습니다! Gold +%d\n", enemy.DropGold);
                    player.PlayerGold += enemy.DropGold;
                    break;
                }

                player.PlayerHealth -= enemy.EAttackPower;

                if (player.PlayerHealth <= 0)
                {
                    printf("플레이어가 죽었습니다...\n");
                    gameRunning = false;
                    break;
                }
            }
        }

        if (player.PlayerGold >= 10)
        {
            printf("보상으로 체력을 회복할 수 있습니다. (y/n): ");
            char c = 0;
            scanf(" %c", &c);
            if (c == 'y' || c == 'Y')
            {
                player.PlayerHealth += 20.0f;
                player.PlayerGold -= 10;
                printf("체력이 회복되었습니다. 현재 체력: %.1f\n", player.PlayerHealth);
            }
        }

        if (IsEnd(player.X, player.Y))
        {
            printf("축하합니다! 미로를 탈출했습니다!\n");
            gameRunning = false;
        }
    }

    ClearMaze();
}