#include <iostream>
using namespace std;

struct Node {  
    int data;
    Node* next;
};

Node* head = NULL;
Node* temp = NULL;
    
void insert(int n) {  
    
 Node* x = new Node(); 
   
 if (head == NULL){
    x->data = n;
    x->next = NULL;
    head = x;
    temp = x;
    return;
    }
  x->data = n;
  temp->next = x;
  temp = temp->next;
 
}

void print() {
    while (head != NULL) {
        cout << head->data << endl;
        head = head->next;
    }
}

void Delete(int n) {
    
    Node* h = head;
    
     if (n == 1) {      
        head = head->next;
        return;
    } 
    
for (int i=0; i<10; i++) {    
        if (i==n-2) { 
            Node* temp = NULL;            
            temp = h->next;
            h->next = temp->next;
            return;
        }
        h = h->next;
} 
}


int main(int argc, char** argv) {   
    insert(10);
    insert(20);
    insert(30);
    insert(40);
    insert(50);
    insert(60);
    insert(70);
    insert(80);
    insert(90);
    insert(100);
    
     Delete(1);
     print();
}
