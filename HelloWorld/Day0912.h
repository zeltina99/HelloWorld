#pragma once
#include <string>

// ±¸Á¶Ã¼´Â Çì´õ¿¡ ¼±¾ðÇÑ´Ù.
struct Enemy
{
	//¸â¹ö º¯¼ö
	std::string Name = "°íºí¸°";
	float Health = 100.0f;
	float AttackPower = 10.0f;
	int DropGold = 100;
};

struct Item
{
	std::string Name = "³ì½¼ Ã¶°Ë";
	std::string Name1 = "°¡Á× °©¿Ê";
	float AttackPower = 10.0f;
	float Health = 150.0f;
	int PriceGold = 150;
};

void Day0912_Struct();
