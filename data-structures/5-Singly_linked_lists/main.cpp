# include <iostream>

using namespace std;

/*  Linked lists are data structures that let us store data in non-contiguous memory locations
 *  Linked lists contain nodes which have two important items in them:
 *  1- data
 *  2- address of the next node
 *
 *  In singly linked lists the nodes are connected in one direction
 * */
struct node {
//  Items in node
    int data;
    node *next;

//  Functions
    int size(node first){

    }


    static void add(node *first,int data, int index = 1){
        node *p{};
        p = new node;
        p->data = data;

        if (index == 1){
            p->next = first->next;
            first = p;
        }
    }
} first;




int main(){
//  We have created a fibonacci series with linked lists

    return 0;
}