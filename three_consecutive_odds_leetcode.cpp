class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int count = 0;
        int rcount = 0;
        for(int i=0;i<arr.size();i++){
            // instead of checking for odd numbers we are checking for even numbers and making count = 0 if they are found
            //check from the left side
            if(arr[i]%2 == 0)
                count = 0;
            else count++;
            
            //check from the right side 
            if(arr[arr.size() - i - 1] %2 == 0)
                rcount = 0;
            else
                rcount++;
            
            if(count==3 || rcount ==3 )
            return true;
        }
        
        return false;
    }
};
