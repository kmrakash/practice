#include<iostream>
using namespace std;

typedef struct Node{

    int data;
    Node* next;
}Node;

Node* head = NULL;

void Insert(int data)
{
    Node* temp = new Node;
    temp->data = data;
    temp->next = head;
    head = temp;
}

void display()
{
    Node* temp = head;
    cout << "The List is: ";
    while(temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void Delete_mid_Node(int size)
{
    int N,i;
    if(size==0)
    {
        N = size/2;
        N--;
    }
    else
        N = size/2;

    Node* temp = head;
    for(i=0;i<N-1;i++)
        temp = temp->next;
    
    Node* temp1 = temp->next;
    temp->next = temp1->next;
    free(temp1);
}

int main()
{
    Node list;
    int N,X,i;
    cout << "Enter The Size of the List: ";
    cin >> N;
    cout << "Insert Element in List: " << endl;
    for(i=0; i<N; i++)
    {
        cout << "Enter Data: ";
        cin >> X;
        Insert(X);
    }
    display();
    cout << "Deleting The Middle Most ELement In the list: ";
    Delete_mid_Node(N);
    display();
    return 0;
}