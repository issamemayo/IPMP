#include<bits/stdc++.h>
using namespace std;
typedef struct node{
    int data;
    struct node*next;
}node;

void delete(node*head){
    node*tmp;
    while(head!=nullptr){
        tmp=head;
        head= head->next;
        delete(tmp);
    }
    return;
}