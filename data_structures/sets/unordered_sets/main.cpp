#include <iostream>
#include <string>
#include <unordered_set>

using namespace std;

int main(){
/*
 * In C++, unordered_set is an unordered associative container that stores unique elements.
    It has the same methods as normal sets
    But the difference is the time complexity of insertion
    In sets is O(n) and in unordered sets is O(1)
    */
    unordered_set<int> numbers = {5, 6, 1, 4, 6, 7};

    for(int number : numbers){
        cout<<number<<endl;
    }



    return 0;
}