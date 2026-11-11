class Solution {
private:
    int givefirst(vector<int>& nums, int target){
        int n = nums.size()-1;
        int high=n;
        int low=0;
        int first=-1;

        while(low<=high){
            int mid= low+(high-low)/2;

            if(nums[mid]==target){
                first=mid;
                high=mid-1;
            }
            else if(nums[mid]<target){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return first;
    }

    int givelast(vector<int>& nums, int target){
        int n = nums.size()-1;
        int high=n;
        int low=0;
        int last=-1;

        while(low<=high){
            int mid= low+(high-low)/2;

            if(nums[mid]==target){
                last=mid;
                low=mid+1;
            }
            else if(nums[mid]<target){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return last;
    }

public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int first = givefirst(nums, target);
        int last = givelast(nums, target);
        return {first, last};
    }
};