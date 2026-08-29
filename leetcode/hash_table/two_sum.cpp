// 260828 1차 풀이 - 이중 반복문, 시간복잡도: O(n)

// #include <vector>

// using namespace std;

// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         for(int i=0; i<nums.size(); i++ ){
//             for(int j=i+1; j<nums.size(); j++){
//                 if(nums[j]==(target-nums[i])){
//                     return {i,j};
//                 }
//             }
//         }
//     }
// };

// 260829 2차 풀이 - hash table, unordered_map

#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> seen;
        
        for(int i=0; i<nums.size(); i++ ){
            int need = target - nums[i];
            if(seen.find(need) != seen.end()){
                return {seen[need],i};
            }
            seen[nums[i]]=i;

        }
        return {};
    }
};