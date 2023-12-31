#include <iostream>
#include <unordered_map> 
#include <vector> 
using namespace std;
int main () {

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int ,int> mpp;
        for(auto num : nums){
            mpp[num]++;
            
        }
        for(auto num : mpp){
            if(num.second > 1){
                return true;
            }
            
        }
            return false;
    }
};
}
