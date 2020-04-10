
#include "Queue.hpp"

Queue::Queue()
{
    this->head = 0;
    this->tail = 0;
    this->count = 0;
}

//add to end of queue
void Queue::enqueue(string payload)
{
    Node* n = new Node(payload);

    if(this->tail)  //something in queue already
    {
        this->tail->setNextNode(n);
        this->tail = n;
    }
    else    //nothing in queue yet
    {
        this->head = n;
        this->tail = n;
    }
    this->count++;
}

string Queue::dequeue()
{
        Node* temp = this->head;
        this->head = this->head->getNextNode();
        string val2Return = temp->getPayload();
        delete temp;
        this->count--;
        return val2Return;
}

int Queue::getCount()
{
    return this->count;
}

Node* Queue::getHead()
{
    return this->head;
}


void Queue::display()
{
    Node* currNode = this->head;
    while(currNode)
    {
        cout << currNode->getPayload() << " ";
        currNode = currNode->getNextNode();
    }
    cout << "\n";
}
