/*******************************************************************/
//  CONFIGURACION
/*******************************************************************/
/*
    task.json :
    
    unidad victimas : 
    C:\\Program Files\\mingw-w64\\x86_64-8.1.0-posix-seh-rt_v6-rev0\\mingw64\\bin\\g++.exe
    
    carabelas :
    g:\\MinGW\\bin\\g++.exe

    c_cpp_properties.json

    unidad victimas :
    C:/Program Files/mingw-w64/x86_64-8.1.0-posix-seh-rt_v6-rev0/mingw64/bin/g++.exe

    carabelas       :
    g:/mingw/bin/g++.exe
*/

/*******************************************************************/
//  DOCUMENTACION
/*******************************************************************/
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
#include <stdlib.h>

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

// Allocates a new node with given data
node *newNode(int data)
{
    node *new_node = new node;
    new_node->data = data;
    new_node->next = NULL;
    return new_node;
}
 
// Function to insert a new node at the
// end of linked list using recursion.
node* insertEnd(node* head, int data)
{
    // If linked list is empty, create a 
    // new node (Assuming newNode() allocates
    // a new node with given data)
    if (head == NULL) 
         return newNode(data);
 
    // If we have not reached end, keep traversing
    // recursively.
    else
        head->next = insertEnd(head->next, data);
    return head;
}
 
void traverse(node* head)
{
    if (head == NULL)
       return;
     
    // If head is not NULL, print current node
    // and recur for remaining list   
    cout << head->data << " "<< endl;
 
    traverse(head->next);
}

void Iterative()
{
    //
    system ("CLS");

    //   
    cout<<"-----------------------------------------"<< endl;
    cout<<"ITERATIVE                                "<< endl;
    cout<<"-----------------------------------------"<< endl;


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
    system("pause");
}
//
void Recursive()
{
    //
    system ("CLS");

    //   
    cout<<"-----------------------------------------"<< endl;
    cout<<"RECURSIVE                                "<< endl;
    cout<<"-----------------------------------------"<< endl;

    //
    node* head = NULL;
    for (int i = 0; i < 10; i++)
        head = insertEnd(head, i);

    //
    traverse(head);
    
    //
    system("pause");
}
//
int main()
{
    //
    const int opt_salida = 3;
    int option = 0;

    //
    while (option != opt_salida)
    {
         //
         system ("CLS");

         //   
         cout<<"-----------------------------------------"<< endl;
         cout<<"CREACION DE LISTAS ENLAZADAS             "<< endl;
         cout<<"-----------------------------------------"<< endl;

         //
         cout<<"Menu Principal"<< endl;
         cout<<""<< endl;
         cout<<"1. Iterativa."<< endl;         
         cout<<"2. Recursiva."<< endl;
         cout<<"3. Salir."<< endl;
         cout<<""<< endl;
         cout<<"Seleccion opcion :";
         cin>>option;

         //
         switch (option)
         {
             case 1:
                Iterative();
             break;
             case 2:
                Recursive();
             break;                

         };

         //
         system ("CLS");
    };

    //
    return 0;
}
