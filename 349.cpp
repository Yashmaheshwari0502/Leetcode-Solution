class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        vector<int>ans2;
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        int n1=nums1.size();
        int n2=nums2.size();
        int i=0,j=0;
        while(i<n1 && j<n2){
            
             if(nums1[i]==nums2[j]){
                 
                ans.push_back(nums1[i]);

                i++;
                j++;
            }
            else if(nums1[i]<nums2[j]){
                i++;

            }
            else {
                j++;
            }

        }
      for(int i=0;i<ans.size();i++){
          if(i>0 && ans[i]==ans[i-1]){
              continue;
          }
          ans2.push_back(ans[i]);
      }
     return ans2;
    }
};