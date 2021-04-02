class Solution {
public:
    string multiply(string num1, string num2) {
        int n1 = num1.size();
        int n2 = num2.size();
        
        
        if(num1 =="0" || num2=="0")
            return "0";
        vector<vector<int>> nums;
        for(int i=n1-1;i>=0;i--){
            int carry = 0;
            int multiplier = (((int) num1[i]) - '0');
            nums.push_back(vector<int> ());
            //adding zeroes to pad the products
            for(int k=0;k<n1-1-i;k++){
                nums[n1-i-1].push_back(0);
            }
            
            for(int j=n2-1;j>=0;j--){
                int product = multiplier * (((int)num2[j])- '0' ) + carry;
                nums[n1- i -1].push_back(product%10);
                carry = product/10;
            }
            if(carry)
                nums[n1 - i -1].push_back(carry);
        }
      
      
        
        int s = nums.size();
        
        vector<int> res;
        string ans = "";
        int carry = 0 ;
        for(int i = 0;i<nums[s - 1].size();i++){
            int vertical  = 0;
            for(int j = 0;j<s;j++){
                int sum = nums[j].size()>i ? (nums[j][i]): 0;
                vertical += sum;
            }
            res.push_back((vertical+carry)%10);
            carry = (vertical+carry)/10;
        }
        if(carry){
            res.push_back(carry);
        }
        
        for(int i=res.size()-1;i>=0;i--){
            ans += to_string(res[i]);
        }
        
        return ans;
        
    }
};
