/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//Back-end complete function Template for C++
class Solution
{
   public:
    string ReFormatString(string S, int K){
        string h="-";
    int n=S.length();
         string sub="";
         int k=0;
         
    for(int i=S.length()-1;i>=0;i--){
        if(S[i]=='-'){
            continue;
        }
        if(k==K){
            sub+=h;
            k=0;
        }
        sub+=S[i];
        k++;
    }
    reverse(sub.begin(),sub.end());
    transform(sub.begin(), sub.end(), sub.begin(), ::toupper);
    return sub;
    	
    	
    }
};

// { Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    string S;
	    cin>>S;
	    int K;
	    cin >> K;
	    Solution ob;  
	    string ans=ob.ReFormatString(S, K);
	    cout<<ans;
	    cout<<"\n";
	}
	return 0;
}
  // } Driver Code Ends
