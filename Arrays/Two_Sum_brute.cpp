class Solution{
    public:
    vector<int> Find(vector<int>v, int target){
        int n = v.size();
        int sum = 0;
        for (int i = 0; i < n; i++)
        {   
            // sum = 0;
            for (int j = 0; j < n; j++)
            {
                sum = v[i]+v[j];
            }
            if(sum==k){
                return {i,j};
            }
        }
        return {-1,-1};
    }
};