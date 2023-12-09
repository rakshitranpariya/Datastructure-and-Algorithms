class Solution {
public:
    bool isAnagram(string s, string t) {
        vector <int> arr1;
        vector <int> arr2;

        for(int i=0;i<s.size();i++){
            arr1.push_back((int)s[i]);
        }
        for(int j=0;j<t.size();j++){
            arr2.push_back((int)t[j]);
        }

        sort(arr1.begin(),arr1.end());
        sort(arr2.begin(),arr2.end());
        // for(int x: arr1){
        //     cout<<(char)x;
        // }

        if(arr1.size()!=arr2.size()){
            return false;
        }
        for(int i=0;i<arr1.size();i++){
            if(arr1[i] != arr2[i]){
                return false;

            }
        }
        return true;
    }
};