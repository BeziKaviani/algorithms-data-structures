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
    static int size(node *first){
        int count = 0;
        node *p;
        p = first;
        while(p->next != nullptr){
            p = p->next;
            count ++;
        }
        return count;
    }


    static void add(node *first,int data, int target = 1){
        node *p{};
        p = new node;
        p->data = data;

        if (target == 1){
            p->next = first->next;
            first = p;
        }

        if (target == size(first)){
            while ()

        }
    }
} ;
int main(){

    return 0;
}