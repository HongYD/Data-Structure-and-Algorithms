#pragma once
#include<iostream>
class TNode {
public:
	TNode* left;
	TNode* right;
	int value;

	TNode() {
		left = NULL;
		right = NULL;
		value = 0;
	}
};

/// <summary>
/// BSP Tree
/// </summary>
class Tree
{
public :
	TNode* root;
	int NumOfNode;

	Tree();
	void CreateTree(TNode* _nodes, int _cout);
	void DeleteTree(TNode* _toolNode);
	void InsertNode(TNode* _nodeToInsert);
	void DeleteNode(TNode* _nodeToDelete);
	void LookUp(TNode* _nodeToSearch);
	void FindMax();
	void FindMin();
	void PrintTree();
};

