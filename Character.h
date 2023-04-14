#pragma once
#include "InvenSlot.h"
#include <iostream>

class FCharacter
{
public:
	FCharacter();
	virtual ~FCharacter();
	FInvenSlot* MySlot = new FInvenSlot[10];
	void UseItem(FInvenSlot ChoosedSlot);
	void PickUpItem(FItem ChoosedItem);
};

