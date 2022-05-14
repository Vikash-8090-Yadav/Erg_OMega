#include <bits/stdc++.h>
using namespace std;

void fn(vector<int> &nums,vector<vector<int>> &ds,vector<int> &arr,int fre[]){
    if(arr.size()==nums.size()){
        ds.push_back(arr);
        return;
    }
    for(int i = 0;i<nums.size();++i){
        if(!fre[i]){
            arr.push_back(nums[i]);
            fre[i] =1;
            fn(nums,ds,arr,fre);
            fre[i] =0;
            arr.pop_back();
            // fre[i] = false;
        }
    }

}
vector<vector<int>> permuteUnique(vector<int>& nums){
    vector<vector<int>> ds;
    vector<int> ans;
    int fre[nums.size()];

    for(int i =0;i<nums.size();++i){
        fre[i]=0;
    }
    fn(nums,ds,ans,fre);
    vector<set<int>> s;
    for(int i =0;i<ds.size();++i){
        fre[i]=0;
    }
    vector<vector<int>> ds1;
    // for(int i =0;i<ds.size()-1;++i){
    //         if(ds[i][0]!= ds[i+1][0]){
    //             ds1[i][0] = ds[i][0];

    //         }
    // }
    vector<int> v2;
    map<vector<int>,int> m;
    for(int i =0;i<ds.size();++i){
        for(int j=0;j<ds[i].size();++j){
            // cout<<ds[i][j]<<" ";
            v2.push_back(ds[i][j]);
        }
        m[v2]++;
        v2.clear();
    }
    vector<int> vm;
    for(auto x:m){
        for(auto x1: x.first){
            vm.push_back(x1);
            // ds1.push_back(x1);
        }
        ds1.push_back(vm);
        vm.clear();
        // cout<<endl;
    }
    // for(auto x : m){

    // }
    return ds1;
}

int  main(){
    vector<int> num = {1,2,3};
    vector<vector<int>> v1 = permuteUnique(num);
    // for(auto x : v1){
    //     for(auto y : y1[x]){
    //         cout<<y<<" ";
    //     }
    // }
    vector<int> v2;
    map<vector<int>,int> m;
    for(int i =0;i<v1.size();++i){
        for(int j=0;j<v1[i].size();++j){
            cout<<v1[i][j]<<" ";
            // v2.push_back(v1[i][j]);
        }
        cout<<endl;
    }

}