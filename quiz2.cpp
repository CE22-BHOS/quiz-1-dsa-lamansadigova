#include<iostream>
#include<vector>

using namespace std;


 class Node
 {
 public:
 int val;
 Node* next;
 Node(int data)
 {
 this->val = data;
 this->next = NULL;
 }
 };

 float averageOfValues(Node* head)
 {
    float count=0,total=0;
    while(head!=NULL){
        total+=head->val;
        count++;
        head=head->next;
    }
    return total/count;
 }

 Node* createLinkedList(const vector<int>& values) {
    Node* head = nullptr;
    Node* tail = nullptr;

    for (int val : values) {
        Node* newNode = new Node(val);
        if (head == nullptr) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    return head;
}

int main(){
    float average;
    vector<int>values={5,2,6,2,1};
    Node* head=createLinkedList(values);
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
    average=averageOfValues(head);
    cout<<average;


}

 