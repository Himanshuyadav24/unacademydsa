#include <iostream>
using namespace std;

class Node
{
    // Data members are below:
    public:
        int data;
        Node *next;
    // Node *prev;

    // constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void insertAthead(Node *&head, int d)
{
    // step 1 create new node
    Node *newNode = new Node(d);

    // step 2 set nxt ptr to head node
    newNode->next = head;

    // step 3 Head updates
    head = newNode;
}

void insertAtTail(Node *&tail, int d)
{
    // step 1 create new node
    Node *newNode = new Node(d);

    // step 2 set nxt ptr to head node
    tail->next = newNode;

    // step 3 Head updates
    tail = newNode;
}

void insertPos(Node *&head, int pos, int d)
{
    // HOMEWORK
    // TODO: tail updation, while inserting node at the end
    // TODO: validate that position should be at max 1 more than current length of Linked List

    if (pos == 1)
    {
        insertAthead(head, d);
    }

    else
    {
        // step 1 creation of new node
        Node *newNode = new Node(d);

        // Step 2: traverse
        Node *prev = head;
        int t = pos - 2;
        while (t--)
        {
            prev = prev->next;
        }

        // Step 3: Connection update
        newNode->next = prev->next;
        prev->next = newNode;
    }
}

void traverse(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data <<" ";
        temp = temp->next;
    }
}

// void deleteNode(Node *&head, int target, int pos)
// {
//     //empty list
//     if(head==NULL)
//     {
//         return;
//     }

//     Node *temp = head;
//     Node *prev = NULL;
//     if (target == temp->data && pos == 1)
//     {
//         head = head->next;
//         temp->next = NULL;
//         delete temp;
//     }
//     else
//     {
//         //segmentation error comes in this loop if we cannot find an element
//         while (temp!=NULL && temp->data != target)
//         {
//             prev = temp;
//             temp = temp->next;
//         }
//         if(temp==NULL)
//         {
//             cout<<"Node not found"<<endl;
//             return;
//         }
//         //here we are assuming that we found the element
//         prev->next = temp->next;
//         temp->next = NULL;
//         delete temp;
//     }
// } 

int getLength(Node* &head)
{
    Node*temp = head;
    int len = 0;
    while(temp != NULL)
    {
        len++;
        temp = temp->next;
    }
    return len;
}

//Linked list 2
//Q1
Node* reverse(Node* &head)
{
    if(head==NULL) 
    {
        cout<<"List is empty"<<endl;
        return head;
    }

    Node*curr = head;
    Node* prev = NULL;
    
    while(curr!=NULL)
    {
        Node* forward = curr->next;
        curr->next = prev;

        prev = curr;
        curr = forward;
    }
    return prev;
}



Node* recursion(Node* &curr, Node* prev)
{
    if(curr == NULL)
    {
        return prev;
    }

    //Connection change
    Node* forward = curr->next;
    curr->next = prev; 

    return recursion(forward,curr);
}


//Q2
Node* getMiddle(Node* &head)
{
    if(head==NULL)
    {
        cout<<"The list is empty"<<endl;
        return head;
    }
    Node*slow = head;
    Node*fast = head;

    while(fast!=NULL&&fast->next!=NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow;
}


//Q3
bool isCircular(Node* &head)
{
    Node*temp = head;
    while(temp!=NULL)
    {
        if(temp->next==head)
        {
            return true;
        }
        temp = temp->next;
    }
    return false;
}



Node* merge(Node* &head1, Node* &head2)
{
    if(head1==NULL)
    {
        return head2;
    }

    if(head2==NULL){
        return head1;
    }

    Node* temp1 = head1;
    Node* temp2 = head2;

    Node* dummy = new Node(-1);
    Node* tempDummmy = dummy;

     while(temp1!=NULL &&temp2!= NULL)
     {
        if(temp1->data <= temp2->data)
        {
            tempDummmy->next = temp1;
            tempDummmy = temp1;
            temp1 = temp1->next; 
        }
        else{
            tempDummmy->next = temp2;
            tempDummmy = temp2;
            temp2 = temp2->next;
        }
     }

    //it is possible that elements are left in temp1 list
    while(temp1 != NULL)
    {
        tempDummmy->next = temp1;
        tempDummmy = temp1;
        temp1 = temp1->next;
    }

    //it is possible that elements are left in temp1 list
    while(temp2 != NULL)
    {
        tempDummmy->next = temp2;
        tempDummmy = temp2;
        temp2 = temp2->next;
    }

    Node*head = dummy->next;


    //delete dummy node
    dummy->next = NULL;
    delete dummy;

    return head;
}

// Q4 reverse in K
Node* reverseinK(Node* &head, int k)
{
    if(head==NULL)
    {
        return NULL;
    }

    Node* curr = head;
    Node* prev = NULL;
    Node* next = NULL;
    int count = 0; 

    while(curr!=NULL && count < k)
    {
        next = curr->next;
        curr->next = prev;
        
        
        prev = curr;
        curr = next;
        count++;
    }

    if(next!=NULL)
    {
        head->next = reverseinK(next,k);
    }

    return prev;

}

bool compareLists(Node* &temp1, Node* & temp2)
{
    while(temp1!=NULL && temp2!=NULL)
    {
        if(temp1->data != temp2->data)
        {
            return false;
        }
        temp1 = temp1->next;
        temp2 = temp2->next;
    }

    if(temp1==NULL && temp2==NULL)
    {
        return true;
    }
    return false;
}

int countKfromLast(Node* &head, int k){

    //base case
    if(head==NULL)
    {
        return 0;
    }

   int cnt = countKfromLast(head->next, k) + 1;

   if(cnt==k)
   {
    cout<<"Kth node from end is "<<head->data<<endl;
   }

    return cnt;
}

Node* detectLoop(Node* &head){

    if(head == NULL)
    {
        return NULL;
    }

    Node* slow = head;
    Node* fast = head;

    while(fast!=NULL&& fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next;

        if(slow==fast)
        {
            return slow;
        }
        return NULL;
    }

}

bool detectandDeleteloop(Node* &head)
{
    if(head == NULL)
    {
        return false;
    }
    //detect loop is present or not
    Node* fast = detectLoop(head);
    //detect beginning loop
    Node* slow = head;
    while(slow!=fast)
    {
        slow = slow->next;
        fast = fast->next;
    } 
    
    Node* beginningNode = slow;

    //remove loop connection
    Node* temp = beginningNode;

    while(temp->next != beginningNode)
    {
        temp = temp->next;
    }

    temp->next = NULL;
    return true;
}

int main()
{
    // object creation

    Node *b = new Node(3);
    Node *head = b;
    Node *tail = b;

    insertAtTail(tail, 5);
    insertAtTail(tail, 7);
    insertAtTail(tail, 9);
    Node* temp = tail;
    insertAtTail(tail, 11);
    insertAtTail(tail, 13);
    insertAtTail(tail, 14);
    insertAtTail(tail, 15);
    tail->next = temp;

  
   
    // traverse(head);
    detectandDeleteloop(head);
    traverse(head);

    // cout<<detectLoop(head)<<endl;

    // countKfromLast(head, 2);
    
    
    // traverse(head);
    
    // insertPos(head, 3, 12);
    // cout << endl;
    // traverse(head);
    
    // Node*head2 = NULL;
    // cout << endl;
    // deleteNode(head2, 13, 1);
    // traverse(head);
    
    // cout<<endl;
    // cout<<"Length of the above linkedlist is: "<<getLength(head)<<endl;
    
    // cout<<endl;
    // head = recursion(head,NULL);
    // traverse(head);
    // cout<<endl;
    
    // Node* middle = getMiddle(head);
    // cout<<"The middle Node of the linkedlsit is "<<middle->data<<endl;
    // cout<<"Circular or Not "<<isCircular(head)<<endl;

    // Node* head1 = new Node(1);
    // Node* tail1 = head1;
    // insertAtTail(tail1,3);
    // insertAtTail(tail1,5);

    // traverse(head1);
    // cout<<endl;

    // Node* head2 = new Node(2);
    // Node* tail2 = head2;
    // insertAtTail(tail2,4);
    // insertAtTail(tail2,6);
    // insertAtTail(tail2,8);
    // insertAtTail(tail2,10);

    // traverse(head2); 
    // cout<<endl;

    // Node* head = merge(head1,head2);
    // traverse(head);



    // traverse(head);
    // cout<<endl;
    // head = reverseinK(head,3);
    // traverse(head);

    // cout<<"Given linked list is ";
    // traverse(head);
    // cout<<endl;

    // cout<<"The middle node is ";
    // Node*middle = getMiddle(head);
    // cout<<middle->data<<endl;

    // cout<<"Now we reversing the second half of linkedlist ";
    // reverse(middle);
    // // reverse(middle);
    // traverse(middle);
    // cout<<endl;

    // if(compareLists(head,middle))
    // {
    //     cout<<"Yes it is"<<endl;
    // }
    // else
    // {
    //     cout<<"No it isnt"<<endl;
    // }

    return 0;
}