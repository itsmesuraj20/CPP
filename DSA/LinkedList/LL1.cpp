//Implementation and Traversal of the LinkedList
//Time Complexity: O(n)
//Space Complexity: O(n)
//Auxiliary Space: O(1)


#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *next;
    Node(int x){
        data = x;
        next = NULL;
    }
};

int main(){

    Node *head = new Node(10);
    Node *temp1 = new Node(20);
    Node *temp2 = new Node(30);
    head->next = temp1;
    temp1->next = temp2;


    Node *current = head;
    while(current != NULL){
        cout<<current->data<<endl;
        current = current->next;
    }


    return 0;
}