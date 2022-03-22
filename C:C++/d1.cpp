#include<iostream>
using namespace std;
struct node{
    int data;
    node* next;
};
node *head = NULL;
void insert(int data){
    node *tp = new node();
    if (head == NULL)
    {
        head->data = data;
        head->next = NULL;
        return;
    }
    tp->data = data;
    tp->next = NULL;
    node *start = head;
    while (start->next != NULL)
    {
        start = start->next;
    }
    start->next = tp;
}
void print(){
    while (head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
}
int main(){
    int n;cin>>n;
    for (int i = 0; i < n; i++)
    {
        int x;cin>>x;
        insert(x);
    }
    print();   
    return 0;
}