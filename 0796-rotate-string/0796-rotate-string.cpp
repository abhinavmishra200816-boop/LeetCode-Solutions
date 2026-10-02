class Solution {
public:
    bool rotateString(string s, string goal) {
          if (s.length() != goal.length())
            return false;
        string a = s+s;
         size_t position = a.find(goal);
         if(position != std::string::npos)
         {
            return true;
         }
         else
         return false;
    }
};