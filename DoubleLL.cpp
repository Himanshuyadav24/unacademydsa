#include<iostream>
using namespace std;

class Node{

    public:
    int data;
    Node* next;
    Node* prev;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void insertAtHead(Node* &head, int d)
{
    Node* newNode = new Node(d);

    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}

void insertAtTail(Node* &tail, int d)
{
    Node* newNode = new Node(d);

    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;

}

void insertAtPos(Node* &head, int pos, int d)
{
    if(pos==1)
    {
        insertAtHead(head,d);
    }
    else
    {
        Node* newNode = new Node(d);
        
        Node* prev = head;
        int t  = pos - 2;
        while(t--)
        {
            prev = prev->next;
        }

        newNode->next = prev->next;
        newNode->next->prev = newNode;
        prev->next = newNode;
        newNode->prev = prev;
    }
}

void traverse(Node* &head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

void deleteNode(Node* &head, int target, int pos)
{
    if(head==NULL)
    {
        return;
    }

    Node*temp = head;
    Node* prev = NULL;
    if(target== temp->data && pos==1)
    {
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    else
    {
        while(temp!=NULL && temp->data != target)
        {
            prev = temp;
            temp = temp->next;
        }
        if(temp==NULL)
        {
            cout<<"Node not found"<<endl;
            return;
        }

        prev->next = temp->next;
        
        temp->prev = NULL;
        temp->next = NULL;
        delete temp;
        
    }


}

int getLength(Node* &head)
{
    Node*temp = head;
    int len = 0;
    while(temp!=NULL)
    {
        len++;
        temp = temp->next;
    }
    return len;
}


int main()
{
    Node*b = new Node(3);
    Node* head = b;
    Node* tail = b;

    insertAtHead(head,4);
    insertAtHead(head,2);
    insertAtHead(head,1);
    insertAtHead(head,3);
    insertAtHead(head,6);

    traverse(head);
    cout<<endl;

    cout<<"Lenth of This double linked list: "<<getLength(head);

    cout<<endl;
    insertAtPos(head,4,12);
    traverse(head);

    cout<<"Lenth of This double linked list: "<<getLength(head);

    deleteNode(head,2,1);
    cout<<endl;
    traverse(head);
    return 0;
}