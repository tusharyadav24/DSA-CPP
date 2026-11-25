#include<iostream>
using namespace std;
int sqrt(int x){
    int low=1;
    int high=x/2;
    int ans=0;
    if(x==0 || x==1){
        return 0;
    }
    while(low<=high){
        int mid=high+(high-low)/2;
        if(mid<=x/mid){
            ans=mid;
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return ans;
}
int main(){
   cout<<sqrt(4);
   return 0;
}