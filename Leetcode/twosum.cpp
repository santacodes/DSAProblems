#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {

    unordered_map<int, bool> map = {{8, true}, {7, true},{2, true},{5, true},{3, true},{1, true}};

    int target = 10;
    for (auto x : map){
        if(map[10-x.first] == 1){
        cout << "("<<x.first << "," <<
               10-x.first << ")"  << endl;
        map[10-x.first] = false;
            
        }
        
    }
    return 0;
}