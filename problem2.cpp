#include "iostream"
using namespace std;

class Node{
public:
    int value;
    Node *next;

    Node(){
        value = 0;
        next = NULL;
    }

    Node(int value){
        this->value=value;
        this->next=NULL;
    }

};

class LinkedList{
    Node *head{};
public:
    LinkedList(){head = NULL;}

    LinkedList(int val){head = new Node(val);}

    void printAll(){
        Node *temp = head;
        while(temp != NULL){
            cout << temp -> value << " ";
            temp = temp -> next;
        }
    }

    void insertBack(int val){
        Node *newNode = new Node(val);
        if(head == NULL) head = newNode;
        else{
            Node *temp = head;
            while(temp -> next != NULL){temp = temp -> next;}
            temp -> next = newNode;
        }
    }

    void deleteFront(){head = head -> next;}

    void deleteBack(){
        Node *temp = head;
        while(temp -> next -> next != NULL){temp = temp -> next;}
        temp -> next = NULL;
    }

    void insertPosition(int val, int p) {
        Node *temp = head, *newNode = new Node(val);
        if (p == 1) {
            newNode->next = head;
            head = newNode;
        } else {
            int c = 2;
            while (c < p) {
                temp = temp->next;
                c++;
            }
            newNode->next = temp->next;
            temp->next = newNode;
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
    int val, p;
    cin >> val >> p;
    l.insertPosition(val, p);
    l.printAll();
}