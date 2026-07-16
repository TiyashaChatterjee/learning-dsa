class Solution{
    public:
    vector<int> Find(vector<int>v, int target){
        unordered_map<int, int>mpp;
        int n = v.size();

        for (int i = 0; i < n; i++)
        {

            
            if(mpp.find(target-v[i])!=mpp.end()){
                int j = mpp[target-v[i]]
                return {i, j}
            }else{
                mpp[v[i]] = i;
            }
        }
        
        return {-1,-1};
    }
};