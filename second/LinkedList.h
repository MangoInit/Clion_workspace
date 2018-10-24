//
// Created by mango on 8/11/18.
//
#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int da=0, Node *p=NULL)
    {
        this->data = da;
        this->next = p;
    }
};

class List
{
public:
    List()
    {
        head = tail = NULL;
    };
    ~List()
    {
        delete head;
        delete tail;
    };
    void print();
    void Insert(int da=0);
    void Delete(int da=0);
    void Search(int da=0);

    int getValueAt(int position);
    void setValueAt(int position, int da);
private:
    Node *head, *tail;
    int position;
};

#endif