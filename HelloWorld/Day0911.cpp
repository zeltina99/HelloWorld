#define _CRT_SECURE_NO_WARNINGS

#include "Day0909.h"
#include "Day0910.h"
#include "Day0911.h"
#include <stdio.h>
#include <fstream>
#include <string>

const char* DirectoryName = ".\\Data\\";

void Day0911()
{
/*
	① 미로 탈출 게임을 수정하여 맵 데이터파일에서 읽은 내용을 기반으로 맵 만들기
		- 데이터 파일 구조
		  - 첫줄은 가로 길이와 세로 길이가 저장되어 있다.
		   - ex) 20, 10 ⇒ 가로 20, 세로 10
		   - 두번째 줄 부터는 미로의 각 셀을 콤마(,)로 구분하여 셀의 타입을 나타낸다.
			- 콤마(,),
		   - \n으로 다음 줄로 이동한다.
*/
	std::string Data;
	
	ReadMapFile("MapData.txt", Data);
	ParseMapData(Data);
	MazeMapGame();
	ClearMaze();
}

bool ReadMapFile(const char* MapFileName, std::string& OutDataString)
{
	char FilePath[256];		// FilePath라는 문자열의 배열을 선언

	strcpy(FilePath, DirectoryName);	//DirectoryName을 전역변수로 선언했고, 그걸 문자열의 포인터로 선언했으니까, 그 안에 있는 .\\Data\\ 문자열을 FilePath에 복사한다.
	strcat(FilePath, MapFileName);		//MapFileName을 상수이자 문자열의 포인터(배열)로 파라메터를 설정했고, 그 안에 있는 문자열을 FilePath에 복사한다.

	std::ifstream InputFile(FilePath);	// 그렇게 합쳐진 파일의 이름을 열어라

	if (!InputFile.is_open())	// 일단 이 파일이 있는지 확인하는 함수이자, 파일이 없으면 출력해야함
	{
		printf("파일을 열 수 없습니다.\n");
		printf("[%s] 경로를 확인하세요.\n", FilePath);
		return false;

	}

	OutDataString = std::string((std::istreambuf_iterator<char>(InputFile)),
		std::istreambuf_iterator<char>());	// 그 파일에 있는 문자열의 맨 앞에 있는 문자부터 맨 끝까지 OutDataString에 복사해서 넣는다.

	return true;
}

bool ParseMapData(std::string& DataString)
{
	char Source[512];
	char* Current = Source;
	strcpy(Source, DataString.c_str());

	// 첫째 줄 처리
	// 라인 분리하기
	char* LinePtr = GetLine(&Current);	// 줄 바꿈 발견하면 널 문자 넣고 다음 줄로 가고 이걸 반복하다가 줄 바꿈이 없어지는 순간이 오면 그 자리에 널 문자 넣고 끝낸다. 한 줄로 다 나눴다.

	// 라인 파싱하기
	int SizeNumber[2] = { 0 };			// 일단 미로가 2차원 배열이니까, 가로에 들어갈 배열과 세로에 들어갈 배열 따라서 크기를 [2]로 뒀다.
	ParseLineData(LinePtr, 2, SizeNumber);

	/* 위에 코드들은 전부 맵 파일에 있는 문자열들을 한 줄로 나누고 그 줄에서 또 숫자로 하나씩 파싱하는 작업을 한 코드고 */

	/* 밑에 코드들은 위에서 한 작업을 통해 맵의 크기를 알았으니까 다시 그 크기의 맞게 맵을 만든다.*/
	// 한 줄씩 다 나누고, 그리고 그 줄에서도 다 숫자별로 파싱했으니까, 자연스럽게 맵의 크기를 알게 됨 => Maze 생성
	MazeWidth = SizeNumber[0];	// 가로 생성
	MazeHeight = SizeNumber[1];	// 세로 생성

	Maze = new int* [MazeHeight];
	for (int y = 0; y < MazeHeight; y++)
	{
		Maze[y] = new int[MazeWidth];
	}

	int HeightIndex = 0;
	while ((*Current) != '\0')
	{
		LinePtr = GetLine(&Current);
		ParseLineData(LinePtr, MazeWidth, Maze[HeightIndex]);
		HeightIndex++;

		if (HeightIndex >= MazeHeight)
		{
			break;
		}
		
	}

	return true;
}

char* GetLine(char** InOutSource)
{
	char* Result = (*InOutSource);
	int Index = FindCharIndex((*InOutSource), '\n');

	if (Index == -1)
	{
		(*InOutSource) = (*InOutSource) + (FindCharIndex(*InOutSource, '\0'));	// 널 문자 (\0)까지 포인터를 옮겨서 읽을 줄이 없다고, 한 마디로 끝내자고 하는 거다.
	}
	else
	{
		*((*InOutSource) + Index) = '\0';		// 줄 바꿈 (\n)이 있으면 널 문자(\0)로 바꿔라
		(*InOutSource) = (*InOutSource) + Index + 1;	// InOutSource의 포인터를 다음 줄 시작위치로 옮겨라	// 포인터는 포인터 + 1 을 하면 그 데이터의 크기만큼 커진다.
	}

	return Result;
}

void ParseLineData(const char* LineData, int ArraySize, int* OutArray)
{
	const char* LinePointer = LineData;
	int SizeIndex = 0;
	while ((*LinePointer) != '\0')
	{
		int Result = 0;
		while ((*LinePointer) != ',' && (*LinePointer) != '\0')
		{
			Result = Result * 10 + (*LinePointer) - '0';	// ex) 3이 LinePointer에 들어오면 아직 3은 문자열이니까 같은 문자열의 0으로 빼서 아스키 - 아스키 = 아스키 해서 진짜 3을 넣는다.
			LinePointer++;
		}
		OutArray[SizeIndex] = Result;
		SizeIndex++;

		if (ArraySize <= SizeIndex)
		{
			break;
		}

		if ((*LinePointer < '0') || (*LinePointer > '9'))
		{
			LinePointer++;
		}
	}

}

void ClearMaze()
{
	if (Maze != nullptr)
	{
		for (int i = 0; i < MazeHeight; i++)
		{
			delete[] Maze[i];	//배열의 들은 실제값도 초기화
			Maze[i] = nullptr;	//배열의 들은 실제값도 초기화
		}
		delete[] Maze;		//배열도 초기화
		Maze = nullptr;		//배열도 초기화
	}


}
