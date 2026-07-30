class Solution{
    public:
    vector<int>Floor_ceil(vector<int> &nums, int target){
        int n=nums.size();
        int l=0;
        int r=n-1;
        int ans=n;

        while(l<=r){
            int mid = (l+r)/2;
            if(nums[mid]>=target){
                //Mistake Prone
                ans=mid;
                r=mid-1;
            }else{
                l=mid+1;
            }
        }
        int floor=-1;
        int ceil=-1;
        if(ans==n){
            floor=nums[ans-1];
            ceil=-1;
        }else if(nums[ans]==target){
            floor=nums[ans];
            ceil=nums[ans];
        }else{
            floor=(ans==0)?-1:nums[ans-1];
            ceil=nums[ans];
        }
        vector<int>res={floor, ceil};
        return res;
    }

};