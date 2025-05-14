#include <unordered_map>
#include <iostream>

using namespace std;

class node{
    public:
        int data;
        node* next;

        node(int data){
            this->data = data;
            next =  NULL;
        }
};

bool containsCycle(node *head){
    unordered_map<node*,bool> hashtable;
    node* temp = head;

    while(temp!=NULL){
        if(!hashtable[temp]){
            hashtable[temp] = true;
            temp = temp -> next;
        }
        else
            return true;
    }

    return false;
}

void insertAtHead(node * &head,int data){
    if(head==NULL){
        head = new node(data);
        return;
    }

    node* n = new node(data);
    n->next = head;
    head = n;
}

int main(){
    node * a = NULL;

    insertAtHead(a,1);
    insertAtHead(a,2);
    insertAtHead(a,3);
    insertAtHead(a,4);
    insertAtHead(a,5);

    node*temp = a->next->next->next->next;
    temp->next = a->next->next;

    if(containsCycle(a)){
        cout << "Cycle Found" << endl;
    }else{
         cout << "Cycle Not Found" << endl;
    }
}