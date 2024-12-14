#include<iostream>
#include "Queue.h"
using namespace std;

bool Queue::isQueueEmpty()
{
    if (start == NULL && end == NULL)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void Queue::removeFromQueue()
{
    if (isQueueEmpty())
    {
        return;
    }
    else
    {
        Node* temp = start;
        start = start->getNextNode();
        delete temp;
    }
}

void Queue::addToQueue(int value)
{
    Node* newNode = new Node(value);
    if (isQueueEmpty())
    {
        start = newNode;
        end = newNode;
    }
    else
    {
        end->setNextNode(newNode);
        end = newNode;
    }
}

void Queue::displayQueue()
{
    Node* temp = start;
    cout << "Value" << endl;
    while (temp != NULL)
    {
        cout << temp->getValue() << endl;
        temp = temp->getNextNode();
    }
}
