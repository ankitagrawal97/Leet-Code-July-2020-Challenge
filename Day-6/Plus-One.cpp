class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
    for (int i = digits.size()-1; i>=0; i--)
    {
        if(digits[i]<9){
        digits[i]++;
        return digits;
        }
        
        digits[i]=0;
    }
 vector<int> newnum(digits.size()+1);
 newnum[0]= 1;
 return newnum;
}
};