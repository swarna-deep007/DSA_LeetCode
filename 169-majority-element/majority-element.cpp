class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int> mpp;
        int n=nums.size();
        for(int i=0;i<n;i++){
            mpp[nums[i]]++;
        }
        for(auto i:mpp){                        //this is the hashmap method
            if(i.second>n/2){                   // Moore's voting algortihm is the best method(count , ele)
                return i.first;
            }
        }
        return -1;
    }
};