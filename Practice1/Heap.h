#pragma once
#include<iostream>
#include"Tree.h"
#include"Stack.h"

class Heap
{
public:
	TNode* root;
	Stack* thisHeap;

	void CreatHeap();
	void HeapSorting();
	void BreadthFirstSearch();
	void DepthFirstSearch();
	void PreOrderTraversal();
	void LowestCommonAncetor();

};

