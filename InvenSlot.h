#pragma once
#include "Item.h"
#include <iostream>

class FInvenSlot
{
public:
	FInvenSlot();
	virtual ~FInvenSlot();
	FItem SlotItem;
	bool Empty = true;
};

