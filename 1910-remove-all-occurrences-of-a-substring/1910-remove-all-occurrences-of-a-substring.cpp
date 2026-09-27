class Solution {
public:
void Remove(string& s, string & part){
  
    int found=s.find(part);
    if(found != string::npos){
        // remove
       s= s.substr(0,found) + s.substr(found+part.size(),s.size());
        
    
    Remove(s,part);
    }
    else{
        // all areremove
        return;
    }
}
    string removeOccurrences(string s, string part) {

       Remove(s,part);
        return s;
    }
};