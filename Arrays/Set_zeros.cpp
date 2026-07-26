class solution{
    public:
    void matrixZero(vector<vector <int>v){
        int m=v.size();
        int n=v[0].size();

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if(v[i][j]==0){
                    //row
                    for (int k = 0; k < n; i++)
                    {
                        v[i][k]=-1;
                    }
                    //column
                    for (int l = 0; l < m; l++)
                    {
                        v[l][j]=-1;
                    }
                     
                }
            }
            
        }

        for (int i = 0; i < n; i++)
        {
            if(v[l])
        }
        
        
    }

};