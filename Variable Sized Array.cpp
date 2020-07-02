#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int x,y,c=0;
    cin>>x>>y;

    int* arr[x];
    while (x--){
        int n;
        cin>>n;

        arr[c]=new int[n];
        for(int i=0;i<n;i++)

            cin>>arr[c][i];
        c++;
    }

    while(y--){
        int a,b;
        cin>>a>>b;
        cout<<arr[a][b]<<endl;
    }
    return 0;
}
