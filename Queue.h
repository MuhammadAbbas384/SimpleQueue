#pragma once
#include "Node.h"

class Queue
{
private:
    Node* start;
    Node* end;

public:
    Queue()
    {
        start = NULL;
        end = NULL;
    }
    void addToQueue(int value);
    void removeFromQueue();
    bool isQueueEmpty();
    void displayQueue();
};
