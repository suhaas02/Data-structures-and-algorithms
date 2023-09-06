class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        // int n = nums.size();
        // vector<int> temp(n,0);
        // temp[0] = nums[0];
        // int count = 0;
        // for(int i = 1; i < n;i++)
        // {
        //     temp[i] = temp[i - 1] + nums[i];
        //     cout<<temp[i]<<endl;
        // }
        // for(int i = 1; i < temp.size();i++)
        // {
        //     if(temp[i] - temp[i - 1] == k)
        //         count++;
        // }
        // return count;

        // //approach - 1 // tc - o(n ^ 2)
        // //tle 
        // int n = nums.size();
        // int count = 0;
        // for(int i = 0; i < n;i++)
        // {
        //     int sum = 0;
        //     for(int j = i; j < n;j++)
        //     {
        //         sum += nums[j];
        //         if(sum == k)
        //         {
        //             count++;
        //         }
        //     }
        // }
        // return count;

        //approach - 3 using hashmap and storing frequencies.
        //using the idea of prefix sum, we can find whether there is any subarray of value k; we know that if prefixSum[j] - prefixSum[i] == k, then there exists an subarray and increase the count;
        // unordered_map<int,int> freq;
        // int count = 0;
        // int sum = 0;
        // freq.insert({0,1});
        // for(int i = 0; i < nums.size(); i++)
        // {
        //     sum += nums[i];
        //     if(freq.find(sum - k) != freq.end())
        //     {
        //         count++;
        //     }
        //     freq.insert({sum, 1});
        // }
        // return count;

        //using sliding window apprach
        // int i = 0, j = 0, n = nums.size();
        // int sum = 0;
        // int count = 0;
        // if(nums.size() == 1 and nums[0] != k)
        //     return 0;
        // else if(nums.size() == 1 and nums[0] == k)
        //     return 1;
        // while(j < n)
        // {
        //     sum += nums[j];
        //     if(sum == k)
        //     {
        //         count++;
        //     }
        //     while(sum > k)
        //     {
        //         sum -= nums[i];
        //         if(sum == k)
        //         {
        //             count++;
        //         }
        //         i++;
        //     }
        //     j++;
        // }
        // return count;
        //sliding window appraoch doesn't work, because there are -ve numbers in the array

        //using the idea of prefix sum:
        unordered_map<int,int> mp;
        mp[0] = 1;
        int sum = 0, cnt = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            sum += nums[i];
            cnt += mp[sum - k];
            mp[sum]++; 
        }
        return cnt;
    }
};