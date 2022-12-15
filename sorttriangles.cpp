#include <iostream>
#include <cmath>
#include <map>
#include <vector>

int main() {

    int n,a,b,c,s;
    int area;
    std::map<int, std::vector<int>> mp;
    std::cin >> n;
    for(int i = 0; i < n; i++){
        std::cin >> a >> b >> c;
        s = (a+b+c)/2;
        area = std::sqrt(s*(s - a)*(s - b)*(s - c));
        mp[area] = {a,b,c};
    }
    std::cout << "Output: " << std::endl;
    for (auto i = mp.begin(); i
         != mp.end(); i++) {
        std::cout << i->second[0] << " " << i->second[1] << " "<< i->second[2] << std::endl;
    }
    return 0;
}