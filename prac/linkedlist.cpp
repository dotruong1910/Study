#include<iostream>
using namespace std;
// node la danh sach lien ket don
//typedef node* point;
struct linkedList
{
    int data;
    struct linkedlist* next;
};
typedef struct linkedList* node; // remember this **

node getNode(int x){
    node p;
    p = (node) malloc(sizeof(struct linkedList));// cap phat vung nho dung malloc() c++ dung new 
    p -> next = NULL; // cho p tro toi con tro null
    p -> data = x; // gan gia tri cho node
    return p;
}
if
node addHead(node head,int value){
    node temp = getNode(value),p; // khoi tao node temp voi data = value
    if(head == NULL ){
        head = temp; // neu linkedList đang trống thì temp chính là head của linkedlist
    }
    else{
        //duyệt tới Node cuối cùng(Node có next = NULL), và trỏ next của thằng cuối tới Node mới(temp).
        p = head;
        while(p-> next != NULL){
            p = p-> next;//duyet danh sach toi cuoi. *Node cuối là node có next = NULL*
        }
        p->next = temp;//Gán next của thằng cuối = temp. Khi đó temp sẽ là thằng cuối(temp->next = NULL mà)
    }
}
int main(){

}