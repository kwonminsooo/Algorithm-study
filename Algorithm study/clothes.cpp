#include <string>
#include <vector>
#include<unordered_map>

using namespace std;

int solution(vector<vector<string>> clothes) {
    unordered_map<string, int>um;
    for (const auto& c : clothes) {
        um[c[1]]++;
    }
    int total = 1;
    for (const auto& k : um) {
        total *= (k.second + 1);
    }
    total = total - 1;
    return total;
}