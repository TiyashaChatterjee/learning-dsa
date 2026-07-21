//Returning the Max sum

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int res = nums[0];
        int total = 0;

        for (int n : nums) {
            if (total < 0) {
                total = 0;
            }

            total += n;
            res = max(res, total);
        }

        return res;        
    }
//Printing the subarray
    vector<int> Subarray(vector<int>nums){
        int maxi=_INT_MIN;//because it maybe positive and negative
        ins sum = 0;
        int n = nums.size();
        int start=0;
        int ansStart = -1;
        int ansEnd = -1;
        for (int i = 0; i < n; i++)
        {
            sum+=nums[i];
            if(sum<0){
                sum=0;
            }
            if(sum==0){
                start = i;
            }
            if(sum>maxi){
                maxi=sum;
                ansStart = start;
                ansEnd = i;
            }
            
        }
        for (int i = ansStart; i < ansEnd; i++)
        {
            cout<<nums[i];
        }
        
        
    }
};