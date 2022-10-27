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

Node* reverse(Node* &head)
{
    Node*curr = head;
    Node* prev = NULL;
   
    while(curr!=NULL)
    {
        Node* forward = curr->next;
        curr->next = prev;

        //aage badho
        prev = curr;
        curr = forward;
    }
    return prev;
}

int main()
{
    


    return 0;
}