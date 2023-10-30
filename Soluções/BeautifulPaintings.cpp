#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, a;
    cin >> n;
    
    vector<int> p;

    for (size_t i = 0; i < n; i++){
        cin >> a;
        p.push_back(a);
    }
    
    sort(p.begin(), p.end());
    
    int num = 1, max = 1;
    
    for (size_t i = 0; i < p.size(); i++){
        if(i != p.size()-1){
            if(p[i+1] == p[i]) {
                num++;
                if (max < num) max = num;
            } 
            else  num = 1;
        }
    }

    cout << n - max;
    
    return 0;
}