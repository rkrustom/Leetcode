class Solution {
public:
    int minimumRecolors(string blocks, int k) {
      int n=blocks.size();
      int mini=INT_MAX;
      for(int i=0;i<=n-k;i++){
        int count=0;
        for(int j=i;j<k+i;j++){
         if(blocks[j]=='W') {
            count++;
         }
        }
        mini=min(count,mini);
      }  
      return mini;
    }
};