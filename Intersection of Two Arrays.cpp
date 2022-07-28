class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
         vector<int> res;
        unordered_map<int,int> mp;
        
        for(auto &it: nums1)
        {
            mp[it]++;
            
        }
        
        //now checking of occurrences in mp of nums2 
          
        for(auto &it: nums2)
        {
            //checking for individual in map
            if(mp[it]>0)
            {
                res.push_back(it);
                mp[it]--;
            }
        }
        
        return res;
    }
};
