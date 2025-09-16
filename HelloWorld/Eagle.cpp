#include "Eagle.h"

void Eagle::Fly()
{
	printf("[%s]가 하늘을 납니다.\n", Name.c_str());
	SetEnergy(Energy - 0.3f);
	printf("[%s] : 에너지가 30%% 소모하였습니다.\n", Name.c_str());
}
