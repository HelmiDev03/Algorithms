class Solution {
public:
    char repeatedCharacter(string s) {
        //unordered_map<char,int>m;
        vector<int>fre(26,0);
        for(int i=0;s[i]!='\0';i++){
            if(fre[s[i]-'a']==1) 
                return s[i];
            
            else if(fre[s[i]-'a']==0) 
                fre[s[i]-'a']+=1;
                   
        }
        return 0;
    }
};
