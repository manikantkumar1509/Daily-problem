class Solution {
    int sign(vector<int>& nums,double x){
        if(x>0){
            return 1;
        }
        else if(x<0){
            return -1;
        }
        return 0;
    }
public:
    int arraySign(vector<int>& nums) {
        int n= nums.size();
        double x =1;
        for(int i=0;i<n;i++){
           x*=nums[i];
        }          
            return sign(nums,x);        
    }
};