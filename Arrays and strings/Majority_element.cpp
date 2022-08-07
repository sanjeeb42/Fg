class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        if(n==1){
            return {nums[0]};
        }
       int ans1=0,ans2=0;
        int cnt1=0,cnt2=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==ans1){
                cnt1++;
            }
            else if(nums[i]==ans2){
                cnt2++;
            }
            else if(cnt1==0)
            {
                ans1=nums[i];
                cnt1++;
            }
             else if(cnt2==0){
                ans2=nums[i];
                cnt2++;
            }
            
            else{                
            cnt1--;cnt2--;
            }
        }
        
       // cout<<ans1<<" amd "<<ans2<<endl;
        
        vector<int>ans;
        int tmp1=0,tmp2=0;
        for(int i=0;i<n;i++){
            if(nums[i]==ans1)tmp1++;
            if(nums[i]==ans2)tmp2++;
        }
        
        if(tmp1>(n/3))ans.push_back(ans1);
        if(ans1!=ans2){
        if(tmp2>(n/3))ans.push_back(ans2);
        }
        return ans;
        
    }
};
