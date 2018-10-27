class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        //sorting both the arrays
        
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        
        int sz1= nums1.size();
        int sz2=nums2.size();
      
        int i=0,j=0;
        vector<int>result;
        while(i<sz1 && j<sz2)
        {
            if(nums1[i]==nums2[j])
            {  
                if(!binary_search(result.begin(),result.end(),nums1[i]))
                result.push_back(nums1[i]);
                i++;
                j++;
            }
            else if(nums1[i]>nums2[j])
            {
                j++;
            }
            else 
                i++;
        }
        
        return result;
    }
};
