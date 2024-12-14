#pragma once
#include<iostream>
using namespace std;
class Node {
private:
    int value;
    Node* nextNode;

public:
    Node()
    {
        value = 0;
        nextNode = NULL;
    }
    Node(int value)
    {
        this->value = value;
        this->nextNode = NULL;
    }
    void setValue(int value)
    {
        this->value = value;
    }
    void setNextNode(Node* nextNode)
    {
        this->nextNode = nextNode;
    }
    int getValue()
    {
        return value;
    }
    Node* getNextNode()
    {
        return nextNode;
    }
};
