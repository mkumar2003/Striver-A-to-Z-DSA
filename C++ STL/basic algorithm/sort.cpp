#include <iostream>
#include <algorithm>
#include <utility>
using namespace std;

bool comp(pair<int, int> p1, pair<int, int> p2) {
    if (p1.second < p2.second) return true;
    if (p1.second > p2.second) return false;

    // if second element is same
    if (p1.first > p2.first) return true;
    return false;
}

int main() {
    pair<int, int> p[] = {{1, 2}, {2, 1}, {4, 1}};
    
    // sort it acc. to second element 
    // if sec. element is same then sort 
    // it acc. to first element but in descending
    sort(p, p + 3, comp);

    // Displaying the sorted array
    std::cout << "Sorted array: ";
    for (int i = 0; i < 3; ++i) {
        std::cout << "{" << p[i].first << "," << p[i].second << "} ";
    }

    return 0;
}
