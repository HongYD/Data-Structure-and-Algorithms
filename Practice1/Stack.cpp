#include "Stack.h"

Stack::Stack()
{
	top = tail = NULL;
	length = 0;
	std::cout << "Init Done!!!" << std::endl;
}

void Stack::CreateStack(Element* _elem, int _cout)
{
	for (int i = 0; i < _cout; i++)
	{
		Stack::Push(&_elem[i]);
	}
}

void Stack::DeleteStack()
{
	while (top != tail)
	{
		Stack::Pop();
	}
	top = NULL;
	tail = NULL;
	delete top;
	delete tail;
	length = 0;
	std::cout << "Stack Deleted!!!" << std::endl;
}

void Stack::Push(Element* _elemToPush)
{
	if (top == tail == NULL)
	{
		_elemToPush->next = top;
		top = _elemToPush;
		tail = _elemToPush;
		length++;
	}
	else {
		_elemToPush->next = top;
		top = _elemToPush;
		length++;
	}
}

void Stack::Pop()
{
	Element* temp = top;
	if (top != tail) {
		top = top->next;
		std::cout << "delete: " << temp->data << std::endl;
		temp = NULL;		
		delete temp;
		length--;
	}
	else
	{
		temp = NULL;
		delete temp;
		length = 0;
	}
}

void Stack::PrintStack()
{
	if (length == 0)
	{
		std::cout << "Nothing to Print" << std::endl;
	}
	Element* temp = top;
	for (int i = 0; i < length; i++)
	{
		std::cout << temp->data << "->";
		temp = temp->next;
	}
	std::cout << std::endl;
}

