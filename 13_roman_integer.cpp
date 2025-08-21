class Solution {
public:
    int charnum(char a) {
    switch (a) {
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
        default: return 0;
        }
    }
    int romanToInt(string s) {
        int result =0;
        for (int i = 0; i <s.length(); i++) {
            if(i + 1 < s.length() && charnum(s[i]) < charnum(s[i+1])) {
                result -= charnum(s[i]);
            } else {
                result += charnum(s[i]);
            }
        }
        return result;
    }
};
