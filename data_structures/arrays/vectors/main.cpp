#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    /*
     * Both vectors and arrays are data structures used to store multiple elements of the same data type.
    The difference between an array and a vector, is that the size of an array cannot be modified (you cannot add or
     remove elements from an array). A vector however, can grow or shrink in size as needed.
     */
    vector<string> books = {"History", "Scientific", "Romance", "Political"};

    for(string book: books){
        cout<<book<<endl;
    }
//    Access to the elements by indexing
    cout<<books[0]<<endl;
    cout<<books[1]<<endl;

//    Access to the elements by front and back
    cout<<books.front()<<endl;
    cout<<books.back()<<endl;

//  Access to the elements by at
    cout<<books.at(2)<<endl;
    cout<<books.at(3)<<endl;

//    Change the element value
    books[0] = "Language Learning";
    books.at(1) = "Computer Science";
    books.back() = "";
    for(string book: books){
        cout<<book<<endl;
    }
//    Check if it's empty
    cout<<books.empty();

//    Add element
    books.push_back("Political");
    for(string book: books){
        cout<<book<<endl;
    }

//   Remove element
    books.pop_back();
    for(string book: books){
        cout<<book<<endl;
    }

//    Size of vector
    cout<<books.size()<<endl;
    return 0;
}
