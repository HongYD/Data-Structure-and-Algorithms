// Practice1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include<stdlib.h>
#include"LinkList.h"
#include"Stack.h"
int main()
{
    Element* elem = (Element*)malloc(sizeof(Element) * 10);
    for (int i = 0; i < 10; i++)
    {
        (elem + i)->data = i;
        (elem + i)->next = NULL;
    }
    //LinkList
    /*LinkList* myList = new LinkList();
    myList->InitList(elem,10);
    myList->PrintList();

    Element* elemToInsert = new Element();
    elemToInsert->data = 100;
    elemToInsert->next = NULL;
    myList->InsertElement(elemToInsert, 4);
    myList->PrintList();

    Element* elemToInsert1 = new Element();
    elemToInsert1->data = 200;
    elemToInsert1->next = NULL;
    myList->InsertElement(elemToInsert1, 4);
    myList->PrintList();

    myList->DeleteElement(elemToInsert);
    myList->PrintList();

    Element* elemToFind = new Element();
    elemToFind->data = 4;
    elemToFind->next = NULL;

    std::cout << myList->FindElement(elemToFind) << std::endl;

    myList->DeleteList();
    myList->PrintList();*/

    //Stack
    //Stack* myStack = new Stack();
    //myStack->CreateStack(elem,10);
    //myStack->PrintStack();

    //Element* elemToPush = new Element();
    //elemToPush->data = 100;
    //elemToPush->next = NULL;
    //myStack->Push(elemToPush);
    //myStack->PrintStack();

    //Element* elemToPush1 = new Element();
    //elemToPush1->data = 200;
    //elemToPush1->next = NULL;
    //myStack->Push(elemToPush1);
    //myStack->PrintStack();

    //myStack->Pop();
    //myStack->Pop();
    //myStack->Pop();
    //myStack->PrintStack();

    //myStack->DeleteStack();

    //Tree

}


// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
