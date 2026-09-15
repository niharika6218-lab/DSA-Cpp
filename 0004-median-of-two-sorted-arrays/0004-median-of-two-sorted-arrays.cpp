class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m=nums1.size();
        int n=nums2.size();
        int x=m+n;
        int arr[x];
        for(int i=0;i<m;i++){
            arr[i]=nums1[i];
        }
        for(int i=0;i<n;i++){
            arr[i+m]=nums2[i];
        }
        sort(arr,arr+x);
        if(x%2==0){
            return (arr[x/2] + arr[(x/2)-1])/2.0;
        }else{
            return arr[x/2];
        }
    }
};