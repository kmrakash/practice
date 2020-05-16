#include<iostream>
using namespace std;

class Node {
		public:
			int data;
			Node* next;
};


class list {
		Node* root;
		
		
		public:
		list() {
				this->root = nullptr;
		}
		
		void insert(int d) {
				Node* node = new Node();
				node->data = d;
				node->next = nullptr;
				if(this->root == nullptr){
						this->root = node;
				}
				else{
						Node* tmp = this->root;
						while(tmp->next != nullptr){
							tmp = tmp->next;
						}
						tmp->next = node;
				}
		}
		
		void print(){
			cout << "The Linked list has: " << "\n";
			Node* temp = this->root;
				while(temp != nullptr){
						cout << temp->data << " ";
						temp = temp->next;
				}
				cout << endl;
		}
		
		void evenOdd() {
				Node* head = this->root;
				
				//~ if(head==nullptr) return nullptr;
				//~ if(head->next==nullptr) return head;
				
				Node* odd = head;
				Node * even = head->next;
				
				Node* firstEven = even;
				
				while(1){
						
						if(!odd || !even || !(even->next)){
								odd->next = firstEven;
								break;
						}
						
						odd->next = even->next;
						odd = even->next;
						
						if(odd->next == nullptr){
								even->next = nullptr;
								odd->next = firstEven;
								break;
						}
						
						even->next = odd->next;
						even = odd->next;
				}
		}
};

int main() {
		list A = list();
		A.insert(1);
		A.insert(2);
		A.insert(3);
		A.insert(4);
		A.insert(5);
		A.insert(6);
		A.insert(7);
		A.print();
		A.evenOdd();
		A.print();
		return 0;
}
