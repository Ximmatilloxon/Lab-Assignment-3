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

    int sizeLinkedList(){
        int size = 0;
        Node *temp = head;
        while(temp != NULL){
            size++;
            temp = temp -> next;
        }
        return size;
    }

    int maximumElement(){
        int m = 0;
        Node *temp = head;
        while (temp != NULL){
            if(m < temp->value) m = temp->value;
            temp = temp->next;
        }
        return m;
    }

    int minimumElement(){
        Node *temp = head;
        if(temp == NULL) return 0;

        int m = temp->value;
        while (temp != NULL){
            if(m > temp->value) m = temp->value;
            temp = temp->next;
        }
        return m;
    }

    int firstElement(){
        if(head == NULL) return 0;
        return head->value;
    }

};

int main(){
    LinkedList l;
    int k;
    while(cin >> k){
        l.insertBack(k);
    }
//    l1.printAll();
    cout << l.maximumElement() << " " << l.firstElement() << " " << l.sizeLinkedList() << " " << l.minimumElement();
}