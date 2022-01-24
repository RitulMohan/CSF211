#include<iostream>
#include<queue>
using namespace std;

struct Node
{
    int data;
    union
    {
        struct
        {
            Node *left, *right;
        };
        struct
        {
            Node *prev, *next;
        };
    };
    Node(int x)
    {
        data = x;
    }
};