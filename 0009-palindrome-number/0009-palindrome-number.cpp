class Solution {
public:
    bool isPalindrome(int x) {
        long long rev=0;
        int dub=x;
        if (x<0){
            return false;
        }
        while(x != 0){
        int temp = x % 10;
        x = x / 10;
        rev = (rev * 10)+temp;
        }
    return dub == rev;
    }
};