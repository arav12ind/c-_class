#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int siz;
    cin>>siz;
    
    vector<int> opp;

    for(int i=0;i<siz;++i) {
        int val;
        cin>>val;
        opp.push_back(val);
    }

    long long int ans = 0;

    for(int i=0;i<siz;++i) {
        int max_index = -1;
        int max_val = -1;
        int s = opp.size();

        for(int j=0;j<s;++j){
            
            if(s==1) {
                max_val = opp[0];
                max_index = 0;
                break;
            }
            
            if(j==0) {
                int val = opp[j] * opp[j+1];
                if (val > max_val) {
                    max_val = val;
                    max_index = j;
                } 
            }
            else if(j==opp.size()-1) {
                int val = opp[j] * opp[j-1];
                if(val > max_val) {
                    max_val = val;
                    max_index = j;
                }
            }
            else {
                int val_max = max(opp[j-1], opp[j+1]);
                int val_min = min(opp[j-1], opp[j+1]);
                int val = opp[j] * val_max + val_min;
                if(val > max_val) {
                    max_val = val;
                    max_index = j;
                }
            }
        }
        //cout<<"curr player is "<<opp[max_index]<<endl;
        opp.erase(opp.begin()+max_index);
        ans += max_val;
    }
    cout<<ans;
}