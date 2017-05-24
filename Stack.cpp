#include <stack>
#include <iostream>

using namespace std;

int main(){
    stack<string> applications;

    //Adding elements to the stack
    applications.push("ASPOF-3435");
    applications.push("AAKJDH2399");
    applications.push("ADXKJQ2332");
    applications.push("ASDWWE232");
    applications.push("ASKLD923");

    std::cout << "Use applications.pop() to remove the top element." << '\n';
    std::cout << "Use applications.top() to return the top element." << '\n';
    
    std::cout << "The first element :: "<< applications.top() << '\n';
    return 0;
}
