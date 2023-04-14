#include <iostream>
#include "Character.h"
#include "InvenSlot.h"
#include "Item.h"

using namespace std;

int main()
{
	FCharacter Player1;
	FItem Bread;

	Player1.PickUpItem(Bread);
	Player1.UseItem(Player1.MySlot[1]);

	return 0;
}