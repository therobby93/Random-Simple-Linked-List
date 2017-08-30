/* Simple Singly(Single) Linked List Example Program in C++ */
/* Data Structure C++ Programs,C++ Linked List Examples,Structure Example in C++ */

#include <iostream>
//#include<conio.h>
#include<stdlib.h>
#include<stdio.h>

using namespace std;

struct node {
    int value;
    struct node *next;
};

int main() {
    typedef struct node DATA_NODE;
    
    DATA_NODE *head_node, *first_node, *temp_node = 0;
    int count = 0;
    int loop = 1;
    first_node = 0;
    int data;
    
    cout << "Singly(Single) Linked List Example - Basic (Structure Example)\n";
    
    while (loop) {
        
        cout << "\nEnter Element for Insert Linked List (-1 to Exit ) : \n";
        cin>>data;
        
        if (data >= 0) {
            
            temp_node = (DATA_NODE *) malloc(sizeof (DATA_NODE));
            
            temp_node->value = data;
            
            if (first_node == 0) {
                first_node = temp_node;
            } else {
                head_node->next = temp_node;
            }
            head_node = temp_node;
            fflush(stdin);
        } else {
            loop = 0;
            temp_node->next = 0;
        }
    }
    
    
    temp_node = first_node;
    cout << "\nDisplay Linked List : \n";
    while (temp_node != 0) {
        cout << "# " << temp_node->value;
        count++;
        temp_node = temp_node -> next;
    }
    
    cout << "\nNo Of Items In Linked List : %d" << count;
    
    return 0;
}
