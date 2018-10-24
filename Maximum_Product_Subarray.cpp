//DR_BR34k

class Solution {
public:
    int maxProduct(vector<int>& nums) {
       if(nums.size()<2)
           return nums[0];
        int max_m=nums[0];
        int min_m=nums[0];
        int result=max_m;
        int sz=nums.size();
        for(int i=1;i<sz;i++)
        {   //3 possibility 
            //new seq starts from there nums[i]
            //max_m*nums[i]  
            //min_m*nums[i]
            int temp_max_m=max(nums[i],max(nums[i]*max_m, nums[i]*min_m));
            min_m=min(nums[i],min(nums[i]*max_m,nums[i]*min_m));
            max_m=temp_max_m;
            //cout<<"max to i is: "<<max_m<<endl;
            //cout<<"min to i is: "<<min_m<<endl;
            
            
            result=max(result,max_m);
        }
        
        return result;
    }
};
