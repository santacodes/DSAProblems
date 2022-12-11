#include <iostream>
#include <vector>
#include <deque>
using namespace std;

int main() {
    
    vector<int> arr = {2,3,6,6,5};
    deque<int> dq;

    for(int i = 0; i < arr.size(); i++){
        if(arr[i] == dq[0] || arr[i] == dq[1]) continue;
        
        else if(dq.size() < 2 && arr[i] > dq.front()){
            dq.push_front(arr[i]);
        }
        else if(dq.size() < 2 && arr[i] < dq.front()){
            dq.push_back(arr[i]);
        }
        else if(dq.size() == 2 && arr[i] > dq.back()){
            if(arr[i] > dq.front()){
                dq.pop_back();
                dq.push_front(arr[i]);
            }
            else{
                dq.pop_back();
                dq.push_back(arr[i]);
            }
        }
    }
    cout << dq.back();
    
    return 0;
}