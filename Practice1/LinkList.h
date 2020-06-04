#pragma once
#include<iostream>

class Element {
public:
    int data;
    Element* next;
    Element(int _data=0,Element* _next=NULL);
};

class LinkList
{
public:
    int length;
    Element* head;

    LinkList();
    void InitList(Element* _elem, int _length);
    void DeleteList();
    int FindElement(Element* _elemToFind);
    void InsertElement(Element* _elemToInsert, int _position);
    void DeleteElement(Element* _elemToDelete);
    void PrintList();
};

