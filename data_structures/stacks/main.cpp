#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main(){
//    Stack is a LIFO data structure which means Last In First Out
    stack<string> fruits;
//    You can add an item in stack. We call it push
    fruits.push("Apple");
    fruits.push("Orange");
    fruits.push("Banana");
//    The last item is banana. So it is the top item
    cout<<fruits.top()<<endl;

//    You can remove an item in stack. It is called pop
    fruits.pop();
//    We have removed an item from the top by using pop function
    cout<<fruits.top()<<endl;

//    We can change the top item with top function
    fruits.top() = "Cherry";
    cout<<fruits.top()<<endl;

//    You can find the size of the stack by using size function
    cout<<fruits.size()<<endl;

//    You can see if the stack is empty by using empty method
    cout<<fruits.empty()<<endl;

    //  For other explanations you can check the notes folder
    return 0;
}