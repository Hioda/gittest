#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main(){
    cout << "hello world" << endl;
    vector<int> vec;
    for(int i=0; i<10; i++){
        vec.push_back(i);
    }
    cout << *(vec.end()-1) << endl;
    return 0;
}