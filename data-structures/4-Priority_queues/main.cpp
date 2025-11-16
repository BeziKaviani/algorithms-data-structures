# include <iostream>
# include <queue>

using namespace std;

int main(){
    priority_queue<double> student_score;

    student_score.push(17.34);
    student_score.push(12.11);
    student_score.push(14.45);
    student_score.push(18.86);

    while (!student_score.empty()){
        cout<<student_score.top()<<endl;
        student_score.pop();
    }
    return 0;
}