//If the element is occured for more that n/3 times in an array
//Brute force T.C:-O(n^2), S.C:-O(1)

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> ans;// extra constant space O(1)
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            int cnt = 0;

            // Count frequency of nums[i]
            for (int j = 0; j < n; j++) {
                if (nums[i] == nums[j]) {
                    cnt++;
                }
            }

            //We have to return the ans in an array, because max possible answer more than one
            if (cnt > n / 3) {
                bool found = false;
                for (int x : ans) {
                    if (x == nums[i]) {
                        found = true;
                        break;
                    }
                }

                if (!found) {
                    ans.push_back(nums[i]);
                }
            }
        }

        return ans;
    }

    vector<int> majorityElement2(vector<int> &nums){
        int n=nums.size();
        unordered_map<int,int>mp;
        vector<int>ans;

        int mini= int(n / 3) + 1;
        for (int i = 0; i < n; i++)
        {   //calculation of occurence
            mp[nums[i]]++;

            if(mp[nums[i]]==mini){
                ans.push_back(nums[i]);
            }
        }
        return ans;
    }
    int optimal(vector<int> &nums){
        int n=nums.size();
        int cnt=0;
        int elem;
        for (int i = 0; i < n; i++)
        {   
            if(cnt==0)
                elem=nums[i];
            if(elem==nums[i]){
                cnt++;
            }else{
                cnt--;
            }
        }
        return elem;
        
    }
};
//HASH MAP FOR BETTER SOLUTION
