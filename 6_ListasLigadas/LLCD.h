#pragma once
#include <iostream>

//Lista ligada circular doble
class LLCD
{
public:
	class Item
	{
	public :
		Item *next;
		Item *prev;
		std::string name;
		Item(std::string n)
		{
			name = n;
		}
	};

	Item * getHeader();
	void insertItem(Item *nuevo);
	void insertString(std::string);
	//remueve el item en el header
	void remove();

	void prev()
	{
		header = header->prev;
	}
	void next()
	{
		header = header->next;
	}

	void print();
	LLCD();
	~LLCD();


private:
	Item * header;
};

