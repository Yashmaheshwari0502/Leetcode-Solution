int firstOccurence(vector<int>& nums,int size,int target){
    int start=0;
    int end=size-1;
    int ans=-1;
    int mid=(start+end)/2;
    while(start<=end){
        if(nums[mid]==target){
            ans=mid;
            end=mid-1;
        }
        else if(nums[mid]<target){
         start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=(start+end)/2;
    }
    return ans;
}

int lastOccurence(vector<int>& nums,int size,int target){
    int start=0;
    int end=size-1;
    int ans=-1;
    int mid=(start+end)/2;
    while(start<=end){
        if(nums[mid]==target){
            ans=mid;
            start=mid+1;
        }
        else if(nums[mid]<target){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=(start+end)/2;
    }
    return ans;
}

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int  arr[2]={0};
        int n=nums.size();
        arr[0]=firstOccurence(nums,n,target);
        arr[1]=lastOccurence(nums,n,target);

        
    return vector<int>(arr,arr+2);
    }
};