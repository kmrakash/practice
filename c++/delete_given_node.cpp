#include<iostream>
using namespace std;

typedef struct Node{

    int data;
    Node* next;
}Node;

Node* head = NULL;

void Insert(int x)
{
    Node* temp = new Node;
    if(head == NULL)
    {
        temp->data = x;
        temp->next = NULL;
        head = temp;
    }
    else
    {
        temp = head;
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        Node* temp2 = new Node;
        temp2->data = x;
        temp2->next = NULL;
        temp->next = temp2;
    }
}

void display()
{
    Node* temp = head;
    cout << endl << "The List is: ";
    while(temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void Delete_Node(int data)
{
    Node* temp = head;
    if(temp->data == data)
    {
        head = temp->next;
        free(temp);
    }
    else
    {
        int n=0 ,i;
    while(temp->data != data)
    {
        temp = temp->next;
        n++;
    }
    Node* temp2 = head;
    for(i=0;i<n-1;i++)
        temp2 = temp2->next;
    temp2->next = temp->next;
    free(temp);
    }
} 

int main()
{
    Node list;
    
    int x,i,N;
    cout << "Enter Size Of the List: ";
    cin >> N;
    cout << "Enter Element in List: " << endl;
    for(i=0; i<N; i++)
    {
        cout << "Enter Data: ";
        cin >> x;
        Insert(x);
    }
    display();

    cout << "Enter Data to be Deleted: ";
    cin >> x;
    Delete_Node(x);
    display();
    return 0;
}