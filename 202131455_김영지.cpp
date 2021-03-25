#include <iostream>
#include <string>
using namespace std;

struct node {
public:
    string name;
    int id = 0;
    float allowance = 0.0f;
    node* p_next = nullptr;
};

node* head = nullptr;

void input_node() {
    node* node1 = new node;
    node1->name = "신홍영";
    node1->id = 202131412;
    node1->allowance = 450000;

    head = node1;

    node* node2 = new node;
    node2->name = "김영지";
    node2->id = 202131455;
    node2->allowance = 300000;

    node1->p_next = node2;

    node* node3 = new node;
    node3->name = "강필승";
    node3->id = 202131451;
    node3->allowance = 600000;

    node2->p_next = node3;

    node* node4 = new node;
    node4->name = "정석환";
    node4->id = 202131465;
    node4->allowance = 300000;

    node3->p_next = node4;
}

void print_node() {
    node* ptr = head;

    while (ptr != nullptr) {
        cout << ptr->name << " " << ptr->id << " " << ptr->allowance << endl;
        ptr = ptr->p_next;
    }
}

int main()
{
    input_node();
    print_node();

    return 0;
}