#include <iostream>
#include <string>
#include <queue>

using namespace std;

int main(){
//    Queue is a FIFO data structure. Which means the first in first out.
    queue<string> orders;

//    You can enter items in the queue by using push method
    orders.push("Pizza");
    orders.push("Burger");
    orders.push("Hot dog");

//    You can access to the first item b using front method
    cout<<orders.front()<<endl;

//  Also, you can access to the item in the back by using back method
    cout<<orders.back()<<endl;

//    You can initialize the items by using front and back method
    orders.front() = "Kebab";
    orders.back() = "Fried chicken";
    cout<<orders.front()<<endl;
    cout<<orders.back()<<endl;

//    Items can be removed from the queue using pop method
    orders.pop();
    cout<<orders.front()<<endl;

//    You can check if the queue is empty by using empty method
    cout<<orders.empty()<<endl;

    //  For other explanations you can check the notes folder
    return 0;
}