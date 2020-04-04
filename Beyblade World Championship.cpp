#include <iostream>
#include <vector>
#include <bits/stdc++.h> 

using namespace std;

int main() {
	
	int i = 0, j = 0, k = 0, t = 0;
	cin>>t;

	for(i=0;i<t;i++) {
		int n, count = 0, dummy, min = 0;
		cin>>n;
				
		vector<int> g_rev;
		vector<int> opp;

		for(j=0;j<n;j++) {
			cin>>dummy;
			g_rev.push_back(dummy);
		}
		
		for(j=0;j<n;j++) {
			cin>>dummy;
			opp.push_back(dummy);			
		}

		sort(opp.begin(),opp.end(),greater <>());

		for(j=0;j<n;j++) {
			dummy = g_rev[j];
			//cout<<"g_rev:"<<dummy<<"\t";	
  	 	    min = opp.back();
			
			if(dummy < min) {
				continue;
			}
						
			
			for(k=0;k<opp.size();k++) {
					if(opp[k] < dummy) {
						count++;
						//cout<<"opp"<<opp[k]<<"\n";
						auto it = std::find(opp.begin(), opp.end(), opp[k]);
					    opp.erase(it);
					    break;
					}		
				}
							
		}
		cout<<count<<"\n";
		g_rev.clear();
		opp.clear();
	}	
	

    return 0;
}




