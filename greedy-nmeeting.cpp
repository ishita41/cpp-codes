#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
struct meeting{
    int start;
    int end;
    int pos;
};
bool static cmp(meeting m1,meeting m2){
    if(m1.end<m2.end) return true;
    else if(m1.end>m2.end) return false;
    else if(m1.pos<m2.pos) return true;
    return false;
}
void maxmeetings(int s[],int e[],int n){
    meeting meet[n];
    for(int i=0;i<n;i++){
        meet[i].start=s[i],meet[i].end=e[i],meet[i].pos=i+1;
    }
    sort(meet,meet+n,cmp);
    vector<int>ans;
    int limit=meet[0].end;
    ans.push_back(meet[0].pos);
    for(int i=1;i<n;i++){
        if(meet[i].start>limit){
            limit=meet[i].end;
            ans.push_back(meet[i].pos);
        }
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl<<ans.size();6
}
int main(){
    int n;
    cin>>n;
    int start[n];
    int end[n];
    for(int i=0;i<n;i++){
        cin>>start[i];
    }
    for(int i=0;i<n;i++){
        cin>>end[i];
    }
    maxmeetings(start,end,n);
}