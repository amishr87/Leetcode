class Solution {
public:
    string removeOccurrences(string s, string part) 
    {
        while(s.length()!=0 && s.find(part)<s.length())
        {
            s.erase(s.find(part), part.length());
        }
        return s;
    }
};

/*
s.length() != 0: Ensures the string s is not empty.
s.find(part) < s.length(): Checks if the substring part exists in s.
s.find(part) returns the index of the first occurrence of part in s.
If part is not found, s.find(part) returns std::string::npos (a large value), which is always greater than s.length().
*/
