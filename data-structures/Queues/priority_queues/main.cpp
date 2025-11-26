# include <iostream>
# include <queue>

using namespace std;

int main(){
    /* Priority queues are just like normal queues
     * They have the same methods and attributes
     * But priority queues, unlike normal queues works with the higher priority elements first
     * */
    priority_queue<double> student_score;
//  Here the larger number has more priority and is pushed on the top. No matter when it is pushed
    student_score.push(17.34);
    student_score.push(12.11);
    student_score.push(14.45);
    student_score.push(18.86);

    while (!student_score.empty()){
        cout<<student_score.top()<<endl;
        student_score.pop();
    }

//  Let's do it for string queues

    priority_queue<string> student_name;

    student_name.push("Hamid");
    student_name.push("Alex");
    student_name.push("Erling");
    student_name.push("Kamal");

    while (!student_name.empty()){
        cout<<student_name.top()<<endl;
        student_name.pop();
    }

    //  For other explanations you can check the notes folder
    return 0;
}