/*
 * @Description: 
 * @Author: fengxb
 * @Date: 2022-01-14 17:10:47
 * @LastEditor: fengxb
 * @LastEditTime: 2022-01-16 21:44:25
 */

#include <iostream>
#include <bits/stdc++.h>


using namespace std;

int main(){

    //vector数组
    vector<int> arr = {-1,1,2,2,3,5};
    int firstLoc = upper_bound(arr.begin(),arr.end(),2)-arr.begin();
    cout << firstLoc << endl;
    return 0;
}
