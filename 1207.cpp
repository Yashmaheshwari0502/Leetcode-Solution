class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
    int newarr[2001]={0};
    int n=sizeof(arr);
    for(int i:arr){
        newarr[i+1000]++;
    }
    
    sort(newarr,newarr+2000);
    for(int i=0;i<=2000;i++){
        if(newarr[i]!=0 && newarr[i]==newarr[i+1]){
            return false;
        }
    }
    return true;
    }
};