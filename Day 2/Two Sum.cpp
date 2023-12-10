class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    //     sort(nums.begin(),nums.end()); //sorting the elements
    //     int i=0;
    //                 vector<int> result;
    //     while(nums[i]<target){
    //         for(int j=i+1;j<nums.size();j++){
    //             if(target-nums[i]==nums[j]){
    //                 result.push_back(i);
    // result.push_back(j);
    // return result;
    //             }
    //         }
    //     }
    //     return result;

// vector<int> result;
//     for(int i=0;i<nums.size();i++){
//         for(int j=i+1;j<nums.size();j++){
//             if(nums[i]+nums[j]==target){
//                 result.push_back(i);
//                 result.push_back(j);
//                 return result;
//             }
//         }
//     }
//     return result;
vector<int> result;
unordered_map <int,int> mapi;
for(int i=0;i<nums.size();i++){
auto it = mapi.find(target-nums[i]);
    if(it != mapi.end()){
        result.push_back(i);
        result.push_back(mapi[target-nums[i]]);
        return result;
    }else{
        mapi[nums[i]]=i;
    }
}
return result;
    }
};