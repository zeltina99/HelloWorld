#pragma once
#include <string>
void Day0910_String();


/// <summary>
/// TargetString에서 TargetCharacter가 몇번째 있는지 찾아주는 함수
/// </summary>
/// <param name="TargetString">찾아질 문자열</param>
/// <param name="TargetCharacter">찾을 글자</param>
/// <returns>-1이면 못찾음, 그 외는 TargetCharacter의 인덱스</returns>
int FindCharIndex(const char* TargetString, const char TargetCharacter);

void Practice0910_Practice1();
void Practice0910_Practice2();
void Practice0910_Practice3();
void Practice0910_Practice4();
void Practice0910_Practice5();
void Practice0910_Practice6();
void Practice0910_Practice7();

void SimpleParser(char* Source, const char Delimiter);
int ParseNextNumber(const std::string& line, int& index);

void ReadFile();
/// <summary>
/// 문자열의 길이를 측정하는 함수
/// </summary>
/// <param name="Target">문자열이 들어감</param>
/// <returns>길이 값이 나옴</returns>
int MyStringLength(const char* Target);


/// <summary>
/// 문자열을 복사하는 함수
/// </summary>
/// <param name="Source">복사 될 문자열</param>
/// <param name="Destination">복사하고나서 출력할 문자열</param>
void MyStringCopy(const char* Source, char* Destination);


/// <summary>
/// 문자열을 합치는 함수
/// </summary>
/// <param name="Source">소스가 앞에 먼저 나오고</param>
/// <param name="Destination">데스티네이션이 뒷 문장으로 붙는다.</param>
void MyStringCat(char* Source, const char* Destination);



/// <summary>
/// 문자열 두개를 비교하는 함수
/// </summary>
/// <param name="String1">첫번째 문자열</param>
/// <param name="String2">두번째 문자열</param>
/// <returns>리턴 값이 두 문자열이 같으면 0, 첫번째가 작으면 음수, 두번째가 작으면 양수</returns>
int MyStringCompare(const char* String1, const char* String2);




/// <summary>
/// 문자열을 입력 받아 정수를 리턴하는 함수
/// </summary>
/// <param name="Source">문자열을 입력 받음</param>
/// <returns>정수로 리턴</returns>
int MyAtoI(const char* Source);


/// <summary>
/// 문자열을 입력 받아 실수를 리턴하는 함수
/// </summary>
/// <param name="Source">문자열을 입력 받음</param>
/// <returns>실수로 리턴</returns>
float MyAtoF(const char* Source);




