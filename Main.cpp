/*
    https://www.codesdope.com/blog/article/c-linked-lists-in-c-singly-linked-list/
    https://www.google.com/amp/s/www.geeksforgeeks.org/recursive-insertion-and-traversal-linked-list/amp/
*/

/*

Hi how are you could you helps me in code 

[_] 1) c++ console application 
[_] 2) linked list baby’s clothes. 
[_] 3) You can add brands. 
[_] 4) Each brand has basic information (ID, Name, Address). 
[_] 5) Each brand has clothes items 
[_] 6) and the item should described by (Name, Type , Price). 
[_] 7) The System also must calculate the total price of items selected.

System Required Functions:-

[_] 1- For Brands:-

[_] a. Add new brand
[_] b. Display brand items
[_] c. Search for item in this brand

[_] 2- For Items:-

[_] a. Add new item.
[_] b. Remove an item.
[_] c. Display item details.

And

[_] Update item Information
[_] Remove brand

*/

#include <iostream>

using namespace std;
struct node
{
    int data;
    node *next;
};

class linked_list
{
public:
    node *head,*tail;
    linked_list()
    {
        head = NULL;
        tail = NULL;
    }

    void add_node(int n)
    {
        node *tmp = new node;
        tmp->data = n;
        tmp->next = NULL;

        if(head == NULL)
        {
            head = tmp;
            tail = tmp;
        }
        else
        {
            tail->next = tmp;
            tail = tail->next;
        }
    }
};

int main()
{
    //
    linked_list a;
    for (int i = 0; i < 10; i++)
            a.add_node(i);
    //
    node *tmp = new node;
    tmp       = a.head;

    //
    while (tmp->next != NULL)
    {
        cout<<tmp->data<<endl;
        tmp  = tmp->next;
    }
        
    //
    return 0;
}
