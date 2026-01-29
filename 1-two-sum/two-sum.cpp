class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map<int,int> hashmap;
        int index1,index2;
       
        for(int i =0;i<nums.size();i++){
            hashmap[nums[i]] = i;
        }
        
        //target = nums[i] + x

        for(int i =0;i<nums.size();i++){
            int x = target - nums[i];

            if(hashmap.count(x) && hashmap[x] != i){
                index1 = i;
                index2 = hashmap[x];
                break;
            }
    

        }
        
        return {index1,index2};

        
    }
};