#include <iostream>

struct List;

struct Node{
    List* owner;
    Node* prev;
    Node* next;
    std::string name;
};

struct List{
    //Node* index;
    Node* head {};
    int size {};
    ~List(){
    }
};

void push_back(List& lst, std::string& name){
    Node* nd = new Node {};
    nd->name = name;
    nd->prev = lst.head;
    if(lst.head)
        lst.head->next = nd;
    lst.head = nd;
    lst.size++;

    return;
}

void push_back(List& lst, std::string&& name){
    Node* nd = new Node {};
    nd->name = name;
    nd->prev = lst.head;
    if(lst.head)
        lst.head->next = nd;
    lst.head = nd;
    lst.size++;

    return;
}

int main(){
    List lst {};

    push_back(lst, "Pangloss");
    push_back(lst, "Martin");
    while(lst.head){
        std::cout<<lst.head->name<<"\n";
        lst.head = lst.head->prev;
    }

    for(Node* nd; lst.head;){
        nd = lst.head;
        lst.head = nd->prev;
        delete nd;
    }

    return 0;
}
