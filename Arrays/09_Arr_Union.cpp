#include<bits/stdc++.h>
vector < int > sortedArray(vector < int > a, vector < int > b) {
    // Write your code here
    // 1
    // set<int> st;
    // for(int i=0;i<a.size();i++){
    //     st.insert(a[i]);
    // }
    // for(int i=0;i<b.size();i++){
    //     st.insert(b[i]);
    // }

    // vector<int> out;
    // for(auto it:st){
    //     out.push_back(it);
    // }
    // return out;

    // 2 Optimal
    int i =0 , j =0;
    vector <int> out;
    int n1 = a.size();
    int n2 = b.size();
    while(i<n1 && j<n2){
        if(a[i]<=b[j]){
            if(out.size() == 0 || out.back()!= a[i]){
                out.push_back(a[i]);
            }
            i++;
        }
        else{
            if(out.size() == 0 || out.back()!= b[j]){
                out.push_back(b[j]);
            }
            j++;
        }
    }

        while(i<n1){
            if(out.size() == 0 || out.back()!= a[i]){
                out.push_back(a[i]);
            }
            i++;
        }
        while(j<n2){
            if(out.size() == 0 || out.back()!= b[j]){
                out.push_back(b[j]);
            }
            j++;
        }

    return out;

}



