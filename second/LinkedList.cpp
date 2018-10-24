//
// Created by mango on 8/13/18.
//
#include <iostream>
#include "LinkedList.h"
//
//class Node
//{
//public:
//    int data;
//    Node *next;
//
//    Node(int da=0, Node *p=NULL)
//    {
//        this->data = da;
//        this->next = p;
//    }
//};
//
//class List
//{
//public:
//    List()
//    {
//        head = tail = NULL;
//    };
//    ~List()
//    {
//        delete head;
//        delete tail;
//    };
//    void print();
//    void Insert(int da=0);
//    void Delete(int da=0);
//    void Search(int da=0);
//
//    int getValueAt(int position);
//    void setValueAt(int position, int da);
//
//private:
//    Node *head, *tail;
//    int position;
//};

int List::getValueAt(int position)
{
    Node *p = head;
    if(p == NULL)
    {
        cout << "The List is Empty!" << endl;
    }
    else
    {
        int posi = 0;
        while(p!=NULL && posi!=position)
        {
            posi++;
            p = p->next;
        }
        if(p == NULL)
        {
            cout << "There is no value of this positio in this List!" << endl;
        }
        else
        {
            cout << "In this Position, the value is " << p->data << endl;
        }
    }
    return p->data;
}

void List::setValueAt(int position, int da)
{
    Node *p = head;
    if(p == NULL)
    {
        cout << "The List is Empty!" << endl;
    }
    else
    {
        int posi = 0;
        while (p != NULL && posi != position)
        {
            posi++;
            p = p->next;
        }
        if (p == NULL)
        {
            cout << "There is No Position in this List!" << endl;
        }
        else
        {
            p->data = da;
            cout << "The Value in this position has been Updated!" << endl;
        }
    }
}

void List::Search(int da)
{
    Node *p = head;
    if(p == NULL)
    {
        cout << "Sorry, The List is Empty!" << endl;
        return;
    }
    int count = 0;
    while(p!=NULL && p->data!=da)
    {
        p = p->next;
        count++;
    }
    cout << "the value you want to search is at position "  <<  count << endl;
}

void List::Delete(int da)
{
    Node *p = head, *q = head;
    if(p == NULL)
    {
        cout << "Sorry, The List is Empty!" << endl;
        return;
    }
    while(p!=NULL && p->data!=da)
    {
        q = p;
        p = p->next;
    }
    q->next = p->next;
    cout << "The Deletion Operation had been finished!" << endl;
}

void List::Insert(int da)
{
    if(head == NULL)
    {
        head = tail = new Node(da);
        head->next = NULL;
        tail->next = NULL;
    }
    else
    {
        Node *p = new Node(da);
        tail->next = p;
        tail = p;
        tail->next = NULL;
    }
}

void List::print()
{
    Node *p = head;
    while(p!=NULL)
    {
        cout << p->data << "\t";
        p = p->next;
    }
    cout << endl;
}
//
//int main()
//{
//    cout << "Hello, World!" << endl;
//    List L1;
//    L1.Insert(1);
//    L1.Insert(3);
//    L1.Insert(5);
//    L1.Insert(3);
//    L1.Insert(8);
//    L1.Insert(3);
//    L1.print();
//
//    cout << "The End!" << endl;
//    return 0;
//}