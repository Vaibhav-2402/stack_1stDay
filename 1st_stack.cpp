#include<iostream> 
#include <stack>
using namespace std;

int main() {
    stack<int> s;
    s.push(23);
    s.push(265);
    s.push(542);
    s.push(389);
    
    cout << s.top() << endl ;
    s.pop();
    cout << s.top() << endl ;
    
    cout << "The number of element in the stack is : " << s.size() << endl;
    return 0;
}