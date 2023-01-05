class Solution {
public:
    int minOperations(vector<int>& nums, vector<int>& nd) {
        int a=nd.size(),b=nd[0],cnt=0,i;
        for( i=0;i<a;i++){
            
            b=__gcd(b,nd[i]);
        }
        cout<<b;
        sort(nums.begin(),nums.end());
        for( i=0;i<nums.size();i++){
            if(b%nums[i]!=0)
            cnt++;
            else
            {
        
            break;
            }
        }
        if(i==nums.size())
        return -1;
        else
        return cnt;
        
    }
};