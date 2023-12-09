class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        bool flag = false;

        sort(nums.begin(),nums.end());   //nlogn
        for(int i=0;i<nums.size()-1;i++){  //n
            if(nums[i]==nums[i+1]){
                flag=true;
            }
        }
//total = nlogn+n = nlogn

    //   for(int i=0 ; i<nums.size()-1;i++){
    //       for(int j=i+1;j<nums.size();j++){
    //           if(nums[i]==nums[j]){
    //               flag = true;
    //           }
    //       }
    //   }
      return flag;  
    }
};