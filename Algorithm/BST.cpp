// Implementation of Binary Search Tree

#include<iostream>
using namespace std;

struct Node {
		int num;
		Node* left;
		Node* right;
};

Node* getNewNode(int data){
		Node* newNode = new Node();
		newNode->num = data;
		newNode->left = newNode->right = nullptr;
		return newNode;
}

void push(Node** root, int x){
	if(*root == nullptr){
		*root = getNewNode(x);
		
	}
	else if(x < (*root)->num){
			push(&(*root)->left, x);
	}
	else  push(&(*root)->right, x);
	
	
}

int FindMax(Node* root){
		if(root->right == nullptr) return root->num;
		FindMax(root->right);
		
}

//~ void pop(Node** root, int x){
		//~ if(root == nullptr) {
			//~ cout << "No Value Found" << "\n"
			//~ return;
			//~ }
		//~ else if()
		
//~ }

void display(Node* root){
		if(root == nullptr) return;
		display(root->left);
		cout << root->num << "\n";
		display(root->right);
}


int main() {
	Node* head = nullptr;
	push(&head, 5);
	push(&head, 2);
	push(&head, 6);
	push(&head, 4);
	push(&head, 10);
	push(&head, 12);
	push(&head, 8);
	push(&head, 0);
	
	display(head);
	
	cout << "Max:" << FindMax(head) << "\n";
return 0;	
}
