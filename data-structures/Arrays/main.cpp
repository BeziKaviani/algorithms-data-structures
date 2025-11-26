#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Array is a data structure, which you can save multiple values in it
    // You can define it like this and initialize instantly
    double prices[] = {1.99, 2.70, 5.33, 10.86};
    cout<<prices[0]<<endl;
    cout<<prices[1]<<endl;
    cout<<prices[2]<<endl;
    cout<<prices[3]<<endl;
    // Also you can initialize it like this
    string fruits[4];
    fruits[0] = "Avacado";
    fruits[1] = "Orange";
    fruits[2] = "Apple";
    fruits[3] = "Cherry";

    cout<<fruits[0]<<endl;
    cout<<fruits[1]<<endl;
    cout<<fruits[2]<<endl;
    cout<<fruits[3]<<endl;

//  For other explanations you can check the notes folder
    return 0;
}