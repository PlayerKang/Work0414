#include "Character.h"
#include <iostream>

using namespace std;

FCharacter::FCharacter()
{
}

FCharacter::~FCharacter()
{
}

void FCharacter::UseItem(FInvenSlot ChoosedSlot)
{
	cout << (ChoosedSlot.SlotItem).Name << "������ ���" << endl;
	for (int i = 0; i < 10; i++)
	{
		if (MySlot[i].Empty == true && (MySlot[i].SlotItem).Name == (ChoosedSlot.SlotItem).Name)
		{
			MySlot[i].Empty = false;
			(MySlot[i].SlotItem).Name = " ";
			break;
		}
	}
}

void FCharacter::PickUpItem(FItem ChoosedItem)
{
	cout << ChoosedItem.Name << "������ ȹ��" << endl;
	for (int i = 0; i < 10; i++)
	{
		if (MySlot[i].Empty == true)
		{
			MySlot[i].Empty = false;
			MySlot[i].SlotItem = ChoosedItem;
			break;
		}
	}
	
}
