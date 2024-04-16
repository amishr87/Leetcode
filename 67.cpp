class Solution {
public:
    string addBinary(string a, string b) {
        string binary;
        int carry_over = 0;
        int i = a.length() - 1;
        int j = b.length() - 1;

        while(i >= 0 || j >= 0 || carry_over)
        { 
            if (i >= 0)
                carry_over += a[i--] - '0';
            if (j >= 0)
                carry_over += b[j--] - '0';

            binary += carry_over%2 + '0';
            carry_over /= 2;
        }

        reverse(begin(binary), end(binary));
        return binary;
    }
};
