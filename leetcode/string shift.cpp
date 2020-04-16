class Solution {
public:
    string stringShift(string s, vector<vector<int>>& shift) {
        int total = 0;
        int n = s.length();
        if(s.length()==1)
            {
                cout<<s;
            }
        for(vector<int> pp : shift)
        {
            
            if(pp[0]==0)
            {
                total = total - pp[1];
            }
            else
            {
                total = total + pp[1];
            }
        }
            
            total = total % n;
            if(total<0)
            {
                total = total + n;
            }
           
        
        s = s.substr(n-total) + s.substr(0,n-total);
        return s ; 
    }
};
