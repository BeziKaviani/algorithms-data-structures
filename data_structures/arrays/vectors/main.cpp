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
    vector<string> books = {"History", "Science", "Romance"};

    for(string book: books){
        cout<<book<<endl;
    }

    return 0;
}
