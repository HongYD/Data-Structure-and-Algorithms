#include "LinkList.h"

Element::Element(int _data, Element* _next)
{
	data = _data;
	next = _next;
}

LinkList::LinkList()
{
	length = 0;
	head = NULL;
}


void LinkList::InitList(Element* _elem, int _length)
{
	head = _elem;
	Element* _temp = head;
	length++;
	for (int i = 0; i < _length-1; i++)
	{
		_temp->data = _elem[i].data;
		_temp->next = &_elem[i+1];
		_temp = _temp->next;
		length++;
	}
}

void LinkList::DeleteList()
{
	if (length == 0)
	{
		std::cout << "No need to delete" << std::endl;
		return;
	}
	for (int i = 0; i < length; i++)
	{
		Element* temp = new Element();
		temp = head;
		head = head->next;
		temp = NULL;
		delete temp;
	}
	length = 0;
}

int LinkList::FindElement(Element* _elemToFind)
{
	Element* temp = new Element();
	temp = head;
	for (int i = 0; i < length; i++)
	{
		if (temp->data == _elemToFind->data)
		{
			return i;
		}
		temp = temp->next;
	}
	std::cout << "Can't find you need" << std::endl;
	return 0;
}

void LinkList::InsertElement(Element* _elemToInsert,int _position)
{
	int i = 0;
	Element* temp = new Element();
	temp = head;
	while (_position != i)
	{
		temp=temp->next;
		i++;
	}
	_elemToInsert->next = temp->next;
	temp->next = _elemToInsert;
	length++;
}

void LinkList::DeleteElement(Element* _elemToDelete)
{
	int i = 0;
	Element* temp = new Element();
	temp = head;
	while (_elemToDelete->data != temp->next->data)
	{
		temp = temp->next;
	}
	Element* temp2 = new Element();
	temp2 = temp->next;
	temp->next = temp->next->next;
	delete temp2;
	length--;
}

void LinkList::PrintList()
{
	if (length <= 0)
	{
		std::cout << "Nothing to Delete" << std::endl;
		return;
	}

	Element* temp = new Element();
	temp = head;
	for (int i = 0; i < length; i++)
	{
		
		std::cout << temp->data << "->";
		temp = temp->next;
	}
	std::cout << std::endl;
}


