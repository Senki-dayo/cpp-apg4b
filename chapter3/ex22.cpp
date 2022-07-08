#include <bits/stdc++.h>
using namespace std;

void sorting(vector<pair<int,int> > &p){
    for(int i=0; i<p.size(); i++){
        for(int j=i+1; j<p.size(); j++){
            if(p.at(i).second > p.at(j).second){
                swap(p.at(i),p.at(j));
            }
        }
    }
    return;
}

void output(vector<pair<int,int> > &p){
    for(int i=0; i<p.size(); i++){
        cout << p.at(i).first << " " << p.at(i).second << endl;
    }
    return;
}

int main(){
    vector<pair<int,int> > pairs;
    int N, a, b;
    cin >> N;

    for(int i=0; i<N; i++){
        cin >> a >> b;
        pairs.push_back(make_pair(a,b));
    }

    sorting(pairs);
    output(pairs);
}