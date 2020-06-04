#pragma once
#include<iostream>
#include"LinkList.h"

class Stack
{
public:
	Element* top;
	Element* tail;
	int length;

	Stack();
	void CreateStack(Element* _elem,int _cout);
	void DeleteStack();
	void Push(Element* _elemToPush);
	void Pop();
	void PrintStack();
};

