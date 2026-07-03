#include <vector>
#include<unordered_map>
using namespace std;

int solution(vector<int> nums)
{
    unordered_map<int, int>pokemon;
    for (const auto& v : nums)
        pokemon[v]++;
    int size = nums.size() / 2;
    if (size >= pokemon.size()) {
        return pokemon.size();
    }
    else
        return size;
}