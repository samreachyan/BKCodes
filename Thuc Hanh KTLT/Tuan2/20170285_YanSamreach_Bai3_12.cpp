/* 
    auth: Yan Samreach
    date: 3-Nov-2020
*/
#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

typedef std::pair<int, int> pair;

bool sortByVal(const pair &a, const pair &b)  { 
    if (a.second != b.second){
        return a.second > b.second;
    }
    return a.first > b.first;
} 

int main() {
    int a, b;
    // std::map<int, int> map = {
    //     {2, 3}, {4, 8}, {9, 1}, {1, 8}
    // };

    // input by keyboard, stop with invalid number
    std::map<int, int> map;
    while ( std::cin >> a >> b) map.insert(std::pair<int, int>(a,b));

    std::vector<pair> vec;
    // copy vector to invert map
    std::copy(map.begin(), map.end(), std::back_inserter<std::vector<pair>>(vec));
    // sort by value 
    std::sort(vec.begin(), vec.end(), sortByVal);
    // print output
    for (auto const &pair: vec) {
        std::cout << pair.first << " "<< pair.second << std::endl;
    }
}