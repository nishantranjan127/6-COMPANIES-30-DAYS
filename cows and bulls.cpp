class Solution {
public:
    string getHint(string secret, string guess) {
        int cnt=0,co=0;
        string s=(secret);
        string g=(guess);
        map<char,int>mp;
        map<char,int>mpi;
        for(int i=0;i<s.size();i++){
            if(s[i]==g[i])
            cnt++;
            else{
                mp[s[i]]++;
                mpi[g[i]]++;

            }


        }
        for(auto x:mp )
   {
       for(auto y:mpi ){
           if(x.first==y.first){
               co+=min(x.second,y.second);
               break;
           }
       }
      cout << x.first << "->" << 
              x.second <<" "<<endl;
   }
   string ans=to_string(cnt)+"A"+to_string(co)+"B";
   return ans;

        
    }
};
