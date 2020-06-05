#include "Tree.h"

Tree::Tree()
{
	root = NULL;
	NumOfNode = 0;
}

void Tree::CreateTree(TNode* _nodes,int _cout)
{
	TNode* currentNode = root;
	for (int i = 0; i < _cout; i++)
	{
		Tree::InsertNode(_nodes + i);
	}
}

void Tree::DeleteTree(TNode* _toolNode)
{
	_toolNode = root;
	if (_toolNode->left != NULL)
	{
		_toolNode = _toolNode->left;
		DeleteNode(_toolNode);
	}
	else if (_toolNode->right != NULL)
	{
		_toolNode = _toolNode->right;
		DeleteNode(_toolNode);
	}
	else
	{
		_toolNode = NULL;
		return;
	}
}

void Tree::InsertNode(TNode* _nodeToInsert)
{
	TNode* temp = root;
	if (root == NULL)
	{
		root = _nodeToInsert;
	}
	else {
		if (_nodeToInsert->value > temp->value)
		{

		}
	}
}



