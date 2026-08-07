class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {

        vector<int> pos;
        vector<int> neg;

        int n = nums.size();

        for (int i = 0; i < n; i++) {
            if (nums[i] >= 0) {
                pos.push_back(nums[i]);
            } else {
                neg.push_back(nums[i]);
            }
        }

        // Agar saare negative hain
        if (pos.size() == 0) {
            for (int i = 0; i < neg.size(); i++) {
                neg[i] = neg[i] * neg[i];
            }
            reverse(neg.begin(), neg.end());
            return neg;
        }

        // Agar saare positive hain
        if (neg.size() == 0) {
            for (int i = 0; i < pos.size(); i++) {
                pos[i] = pos[i] * pos[i];
            }
            return pos;
        }

        int nn = neg.size();
        int mm = pos.size();

        // Negative ko square karo
        for (int i = 0; i < nn; i++) {
            neg[i] = neg[i] * neg[i];
        }

        reverse(neg.begin(), neg.end());

        // Positive ko square karo
        for (int i = 0; i < mm; i++) {
            pos[i] = pos[i] * pos[i];
        }

        int i = 0, j = 0, id = 0;
        vector<int> res(nn + mm);

        // Merge
        while (i < nn && j < mm) {
            if (neg[i] <= pos[j]) {
                res[id] = neg[i];
                id++;
                i++;
            } else {
                res[id] = pos[j];
                id++;
                j++;
            }
        }

        while (i < nn) {
            res[id] = neg[i];
            id++;
            i++;
        }

        while (j < mm) {
            res[id] = pos[j];
            id++;
            j++;
        }

        return res;
    }
};