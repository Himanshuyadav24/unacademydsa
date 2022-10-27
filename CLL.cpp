#include<iostream>
using namespace std;

class Node{

    public:
    int data;
    Node* next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

};

void insertAtpos(Node* &start, int d, int pos)
{
    Node* newNode = new Node(d);

    Node* prev = start;
    int t = pos-2;
    while(t--)
    {
        prev = prev->next;
    }

    newNode->next = prev->next;
    prev


}


int main()
{
    Node*b = new Node(3);
    Node*start = b;




    return 0;
}