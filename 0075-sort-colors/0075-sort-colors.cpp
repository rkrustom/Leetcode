class Solution {
public:
    void sortColors(vector<int>& nums) {
      int n=nums.size();
      int cnt0=0,cnt1=0,cnt2=0;
      for(int i=0;i<n;i++){
      if(nums[i]==0) cnt0++;
      else if(nums[i]==1) cnt1++;
      else cnt2++;
      }
      for(int j=0;j<cnt0;j++){
        nums[j]=0;
      }
      for(int j=cnt0;j<cnt0+cnt1;j++){
        nums[j]=1;
      }
      for(int j=cnt0+cnt1;j<n;j++){
        nums[j]=2;
      }  
    }
};