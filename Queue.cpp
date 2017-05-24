#include <queue>
#include <iostream>

using namespace std;

int main(){
    queue<int> playlist;
    std::cout << "Queues allow adding at the back and removal at the front only." << '\n';
    playlist.push(456876);
    playlist.push(4353);
    playlist.push(1345);
    playlist.push(234);
    playlist.push(2131);

    for(queue<int>::iterator i = queue.begin(); i< queue.end(); i++)
        cout<<" "<< *i;
    cout<<endl;

    std::cout << "Removing the element at the beging of the list ...." << '\n';
    playlist.pop();
    for(queue<int>::iterator i = queue.begin(); i< queue.end(); i++)
        cout<<" "<< *i;
    cout<<endl;

    return 0;

}
