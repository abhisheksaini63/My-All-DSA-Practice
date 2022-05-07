 #include<iostream>
 using namespace std;
 int main()
 {
 	int n,q;
 	cin>>n>>q;
 	string txt;
 	cin>>txt;
 	for(int i=0;i<q;i++)
 	{
 		int t;
 		cin>>t;
 		if(t==1)
 		{
 			string pat;
 			cin>>pat;
 			int M = pat.length(); 
            int N = txt.length(); 
    		int res = 0; 
    
    
    for (int i = 0; i <= N - M; i++) 
    {  
        
        int j; 
        for (j = 0; j < M; j++) 
            if (txt[i+j] != pat[j]) 
                break; 
   
         
        if (j == M)   
        { 
           res++; 
           j = 0; 
        } 
    } 
    cout<<res<<endl;
		 }
		 
	else 
	{
		
		
		int l,r;
		cin>>l>>r;
		string s;
		cin>>s;
		txt.replace(l,r,s);
	}
	 }
	 return 0;
 }
