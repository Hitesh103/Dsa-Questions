class Solution {
   int search(vector<int>& nums, int target,bool startIndex) {
        int ans=-1;
        int s=0;
        int e=nums.size()-1;
        while(s<=e)
        {
            int mid=s+(e-s)/2;
            
            if(nums[mid]>target)
                e=mid-1;
            else if(nums[mid]<target)
                s=mid+1;
            else if(nums[mid]==target)
            {
                ans=mid;
                if(startIndex)
                    e=mid-1;
                else
                    s=mid+1;
            }
        }
        
        return ans;
    }
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>ans(2);
        
        ans[0]=search(nums,target,true);
        ans[1]=search(nums,target,false);
        
        return ans;
    }
};