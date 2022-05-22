//brute force solution -> O(n^2)
vector<int> twoSum(vector<int>& nums, int target) 
    {
        int n=nums.size();
        vector<int>v;
        for (int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if((nums[i]+nums[j])==target)
                {
                    v.push_back(i);
                    v.push_back(j);
                    break;
                }
            }
        }
        return v;
    }
	//hashmap solution -> O(n)
	vector<int> twoSum(vector<int>& nums, int target) 
    {
        vector<int>v;
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        {
            if(mp.find(target-nums[i])!=mp.end())
            {
                v.push_back(i);
                v.push_back(mp[target-nums[i]]);
            }
            mp[nums[i]]=i;
        }
        return v;
    }