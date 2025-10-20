class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int n=g.size();
        int m=s.size();
        if(s.size()==0){
            return 0;
        }
        int greed=0, size=0;
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        while(greed<n && size<m){
            if(s[size]>=g[greed]){
                greed++;
                size++;
            }
            else size++;
        }
        return greed;
    }
};