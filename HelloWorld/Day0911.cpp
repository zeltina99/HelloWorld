#define _CRT_SECURE_NO_WARNINGS

#include <fstream>
#include <stdio.h>
#include <string>
#include "Day0909.h"
#include "Day0910.h"
#include "Day0911.h"

const char* DirectoryName = ".\\Data\\";


bool ReadMapFile(const char* MapFileName, std::string& OutDataString)
{
	//const char* FilePath = ".\\Data\\TestData.txt";
	char FilePath[256];
	//MyStringCopy(DirectoryName, FilePath);
	//MyStringCat(FilePath, MapFileName);
	strcpy(FilePath, DirectoryName);
	strcat(FilePath, MapFileName);

	std::ifstream InputFile(FilePath);
	if (!InputFile.is_open())	// 파일이 열렸는지 확인하는 함수
	{
		printf("파일을 열 수 없습니다.\n");
		printf("[%s] 경로를 확인하세요.\n", FilePath);
		return false;
	}

	OutDataString = std::string((std::istreambuf_iterator<char>(InputFile)),
		std::istreambuf_iterator<char>());	//InputFile에 있는 글자들을 모두 읽어서 FileContents에 저장하기

	

	//printf("파일 내용은 다음과 같습니다.\n");
	//printf("%s\n", FileContents.c_str());	// FileContents안에 있는 문자열을 const char*로 돌려주는 함수	

	return true;
}

bool ParseMapData(std::string& DataString)
{
	char Source[512];
	strcpy(Source, DataString.c_str());

	// 라인 분리하기
	char Line[128];
	char* Current = GetNextLine(Source);
	strcpy(Line, Source);

	// 라인 파싱하기
	int SizeNumbers[2] = { 0 };
	ParseLineData(Line, 2, SizeNumbers);
	
	//printf("Size : %d, %d\n", SizeNumbers[0], SizeNumbers[1]);

	// 맵의 크기를 알았다.		=> Maze 생성
	MazeWidth = SizeNumbers[0];
	MazeHeight = SizeNumbers[1];

	Maze = new int* [MazeHeight];
	for (int y = 0; y < MazeHeight; y++)
	{
		Maze[y] = new int[MazeWidth];
	}

	//Current가 \0이 될 때까지 반복
	//Current = GetNextLine(Current);		// 한줄 잘라내고
	//ParseLineData(Line, MazeWidth, Maze[Index]);	// 파싱해서 데이터 넣고

	return false;
}

char* GetNextLine(char* Source)
{
	int Index = FindCharIndex(Source, '\n');
	if (Index == -1)
	{
		return Source + FindCharIndex(Source, '\0');	// 마지막 줄 처리
	}
	*(Source + Index) = '\0';
	return Source + Index + 1;
	//return strtok(Source, "\n") + 1;
}

void ParseLineData(char* LineData, int Size, int* OutArray)
{
	char* LinePointer = LineData;
	int SizeIndex = 0;
	while ((*LinePointer) == '\0')
	{
		int Result = 0;
		while ((*LinePointer) != ',' && (*LinePointer) != '\0')
		{
			Result = Result * 10 + (*LinePointer) - '0';	// 숫자 만들기
			LinePointer++;
		}
		OutArray[SizeIndex] = Result;	// 숫자 결과 저장
		SizeIndex++;

		if (Size <= SizeIndex)	// 배열 크기이상으로 넣는 것을 방지
		{
			break;
		}

		if (*LinePointer < '0' || *LinePointer > '9')	// 숫자 외에는 스킵
			LinePointer++;
	}

}

void InitializeMaze()
{
	std::string Data;
	ReadMapFile("MapData.txt", Data);

	ParseMapData(Data);
}

void ClearMaze()
{
	if (Maze != nullptr)
	{
		for (int i = 0; i < MazeHeight; i++)
		{
			delete[] Maze[i];
			Maze[i] = nullptr;
		}
		delete Maze;
		Maze = nullptr;
	}
}

void Day0911()
{
	InitializeMaze();

	ClearMaze();
}