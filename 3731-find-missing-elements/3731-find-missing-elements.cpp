class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<bool> present(100,false);
        int min_ele =INT_MAX;
        int max_ele = INT_MIN;
        for(int num : nums){
            present[num] = true;
            min_ele= min(min_ele,num);
            max_ele = max(max_ele,num);
        }
        vector<int> ans;
        for(int i =min_ele;i<=max_ele;i++){
            if(!present[i]){
                ans.push_back(i);
            }
        }
        return ans;
    }
};