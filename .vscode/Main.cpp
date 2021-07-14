
/*******************************************************************/
//  CONFIGURACION
/*******************************************************************/
/*
    task.json :
    
    unidad victimas : 
    C:\\Program Files\\mingw-w64\\x86_64-8.1.0-posix-seh-rt_v6-rev0\\mingw64\\bin\\gcc.exe
    
    carabelas :
    g:\\MinGW\\bin\\g++.exe

    c_cpp_properties.json

    unidad victimas :
    C:/Program Files/mingw-w64/x86_64-8.1.0-posix-seh-rt_v6-rev0/mingw64/bin/gcc.exe

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

#include "iterativeList.h"
#include "recursiveList.h"

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
         cout<<"-- LINKED LISTS                          "<< endl;
         cout<<"-----------------------------------------"<< endl;

         //
         cout<<"MAIN MENU"<< endl;
         cout<<""<< endl;
         cout<<"1. Iterative."<< endl;         
         cout<<"2. Recursive."<< endl;
         cout<<"3. Exit."<< endl;
         cout<<""<< endl;
         cout<<"Enter Option :";
         cin>>option;

         //
         switch (option)
         {
             case 1:
                IterativeList::Set();
             break;
             case 2:
                RecursiveList::Set();
             break;                

         };

         //
         system ("CLS");
    };

    //
    return 0;
}
