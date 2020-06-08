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
	if (root == NULL)
	{
		root = _nodeToInsert;
	}
	if (root->left == NULL || root->right == NULL)
	{
		return;
	}
	else {
		if (_nodeToInsert->value > root->value)
		{
			InsertNode(root->left);
		}
		else {
			InsertNode(root->right);
		}
	}
}

void Tree::DeleteNode(TNode* _nodeToDelete)
{
	TNode* temp = root;
	if (root == NULL)return;
	if (root->left == NULL || root->right==NULL)
	{
		temp = root;
		temp = NULL;
		delete temp;
		return;
	}
	else {
		DeleteNode(root->right);
		DeleteNode(root->left);
	}
}

int Tree::LookUp(TNode* _nodeToSearch)
{
	if (_nodeToSearch->value == root->value)
	{
		return root->value;
	}
	else if (root->value > _nodeToSearch->value)
	{
		LookUp(root->left);
	}
	else if (root->value < _nodeToSearch->value)
	{
		LookUp(root->right);
	}
}

void Tree::FindMax(TNode* _maxValue)
{
	if (root->right==NULL)
	{
		std::cout << "Max value is:" << root->value << std::endl;
		return;
	}
	else {
		FindMax(root->right);
	}
}

void Tree::FindMin(TNode* _minValue)
{
	if (root->left == NULL)
	{
		std::cout << "Min Value: " << root->value << std::endl;
	}
	else {
		FindMin(root->left);
	}
}

void Tree::PrintTree(TNode* _root)
{
	if (root->left == NULL || root->right == NULL)
	{
		std::cout << root->value << std::endl;
	}
	else {
		PrintTree(root);
	}
}




