#include<iostream>
#include "Queue.h"
using namespace std;

int main()
{
    Queue Q;

    Q.addToQueue(10);
    Q.addToQueue(20);
    Q.addToQueue(30);

    cout << "Queue after adding elements:" << endl;
    Q.displayQueue();

    Q.removeFromQueue();
    cout << "Queue after removing one element:" << endl;
    Q.displayQueue();

    Q.addToQueue(40);
    cout << "Queue after adding another element:" << endl;
    Q.displayQueue();

    return 0;
}
