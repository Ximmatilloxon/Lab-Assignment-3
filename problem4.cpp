#include "iostream"
using namespace std;

class Node{
public:
    int value;
    Node *next;
    Node *prev;

    Node(){
        value = 0;
        next = NULL;
        prev = NULL;
    }

    explicit Node(int value){
        this->value=value;
        this->next=NULL;
        this->prev=NULL;
    }

};

class LinkedList {
    Node *head{};
public:
    LinkedList() { head = NULL; }

    explicit LinkedList(int val) { head = new Node(val); }

    void insertBack(int val){
        Node *newNode = new Node(val);
        if(head == NULL) head = newNode;
        else{
            Node *temp = head;
            while (temp->next != NULL){temp = temp->next;}
            temp->next = newNode;
            newNode->prev = temp;
        }
    }

    void printFromBack(){
        if(head == NULL) cout << "List is empty";
        else{
            Node *temp = head;
            while (temp->next != NULL){temp = temp->next;}
            while (temp != NULL) {
                cout << temp->value << " ";
                temp = temp->prev;
            }
        }
    }

};


int main(){
    LinkedList l;
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int k;
        cin >> k;
        l.insertBack(k);
    }
    l.printFromBack();
}