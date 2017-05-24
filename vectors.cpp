#include <iostream>
#include <vector>

using namespace std;

int main(){
    std::vector<int> v(5, 10);

    cout<<"Adding Element 15 at the end ..."<<endl;
    v.push_back(15);
    //v.pop_back();
    cout<<"Size ::"<<v.size()<<endl;
    cout<<"Max - Size ::"<<v.max_size()<<endl;
    cout<<"Element at the front ::"<<v.front()<<endl;
    cout<<"Element at the end ::"<<v.back()<<endl;

    for(vector<int>:: iterator it = v.begin(); it<v.end(); it++)
        std::cout << " " << *it;
    cout<<endl;
    return 0;

}
