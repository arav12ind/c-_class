#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    int siz, ops;
    cin>>siz>>ops;

    if(siz==0) {
    	cout<<0;
    	exit(0);
    }

    vector<int> vals;
    for(int i=0;i<siz;++i){
        int val;
        cin>>val;
        vals.push_back(val);
    }

    make_heap(vals.begin(), vals.end()); // Linear time

    for(int i=0;i<ops;++i){
        int maxi = vals.front();
        // remove the top elem
        pop_heap(vals.begin(), vals.end());vals.pop_back();// log
        // add new elem
        vals.push_back(maxi/2);push_heap(vals.begin(), vals.end()); //log
    }

    long long int ans=0;

    for(int v : vals){
        ans += v;
    }
    // cout<<"ans is "<<ans<<endl;
    // return ans;
    cout<<ans;
}