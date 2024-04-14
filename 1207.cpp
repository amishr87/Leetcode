class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) 
    {
        int n = arr.size();
        sort(arr.begin(),arr.end());
        vector<bool> occur(n+1,false);
        int count=1;
        for(int i=1; i<n; i++){
            if(arr[i-1] == arr[i]){
                count++;
            }else{
                if(occur[count] == true){
                    return false;
                }else{
                    occur[count] = true;
                    count = 1;
                }
            }
        }

        //for last case
        if(occur[count] == true){
            return false;
        }
    
        return true;
    }
};

