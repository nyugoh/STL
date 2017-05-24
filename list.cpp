#include <list>
#include <iostream>

using namespace std;

int main(){
    std::cout << "List are an advancement of vectors in that adding  and removing is done on any end." << '\n';
    list<int> scores{5, 2, 3, 50, 10, 34, 9}; //Initalize and declared list with 2 size 5
    list<int> index; //Creates an emepty list
    list<int>::iterator i;

    std::cout << "The fist element ::"<< scores.front() << '\n'; //Display the first element
    std::cout << "The last element ::"<< scores.back() << '\n'; //Display the last element
    for (int i =0; i < scores.size(); i++) {
        index.push_back(i);
    }

    std::cout << "Removing an element at the front of the list ::" << '\n';
    scores.pop_front(); //Pop the last element
    for (i = scores.begin(); i !=scores.end(); i++) {
        std::cout << " " << *i;
    } cout<<endl;
    std::cout << "Removing an element from the back of the list." << '\n';
    scores.pop_back();
    for (i = scores.begin(); i !=scores.end(); i++) {
        std::cout << " " << *i;
    } cout<<endl;
    std::cout << "Sorting of the list is easy ..." << '\n';
    scores.sort();
    for (i = scores.begin(); i !=scores.end(); i++) {
        std::cout << " " << *i;
    } cout<<endl;
    std::cout << "Merging two arrays ... just use merge --ensure the list is sorted." << '\n';
    scores.merge(index);
    for (i = scores.begin(); i !=scores.end(); i++) {
        std::cout << " " << *i;
    } cout<<endl;
    return 0;

}
