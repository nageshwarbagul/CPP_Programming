
#include<iostream>
using namespace std;

#pragma pack(1)

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

int main()
{
    cout << "Size of node : " << sizeof(NODE) << "\n";

    NODE obj;

    cout << "Size of object : " << sizeof(obj) << "\n";

    return 0;
}
