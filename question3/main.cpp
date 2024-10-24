#include <iostream>
#include <queue>
using namespace std;

void showq(queue<int> gq){
    while (!gq.empty()) {
        cout << gq.front() << " ";
        gq.pop();
    } cout << "\n";
}
void swapping(queue<int> gq){

    queue<int> g = gq;
    int firstelement = g.front(); // first element will be stored to save after popping.
        g.pop();
        cout << firstelement << " "; // 1
        int secondelement = g.front();
        g.pop();
        cout << g.front(); // 3
        cout << " " << secondelement; // 2
        cout << " " << g.back(); // 4
}
int main()
{
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    showq(q);
    swapping(q);// function for swapping
}
