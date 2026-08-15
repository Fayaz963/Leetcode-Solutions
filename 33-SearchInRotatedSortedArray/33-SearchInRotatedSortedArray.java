// Last updated: 8/15/2026, 5:33:39 PM
class Solution {
    public int search(int[] nums, int target) {
        int start=0;
        int end=nums.length-1;
        while(start<=end){
            int mid=start+(end-start)/2;
          if(nums[mid]==target){
            return mid;}
            if(nums[start]<=nums[mid]){//left sorted
                if(nums[start]<=target && target<=nums[mid]){
                    end=mid-1;
                }
                else{
                    start=mid+1;
                }
            }else{//right sorted
                 if(nums[mid]<= target && target <= nums[end]){
                    start=mid+1;
                 }
                 else{
                    end=mid-1;
                 }
                 
            }
        }
        return -1;
    }

}