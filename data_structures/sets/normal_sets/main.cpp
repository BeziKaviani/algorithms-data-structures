#include <iostream>
#include <string>
#include <set>
using namespace std;

int main(){
/*  Sets are data structures that:
 *  have no duplicate values
 *  are sorted
 *  can be added or removed
 *  */
    set<string> names = {"Ali", "Hamid", "Mohsen"};
//    empty or not
    cout<<names.empty()<<endl;

    for (string name : names){
        cout<<name<<endl;
    }
//  add element
    names.insert("Kamal");
    names.insert("Mohsen");
//    remove element
    names.erase("Ali");

    for (string name : names){
        cout<<name<<endl;
    }
    return 0;
}