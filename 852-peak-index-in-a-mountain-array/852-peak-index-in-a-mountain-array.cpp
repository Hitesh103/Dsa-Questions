class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        
    int start=0,end=arr.size()-1;
    int mid;
    while(start<=end){
           mid=start+(end-start)/2;
        if(arr[mid]>arr[mid+1] && arr[mid]>arr[mid-1]){      // condition apply according to the question
            return mid;
        }
        else if(arr[mid]>arr[mid+1]){
              end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    return start;
}
};