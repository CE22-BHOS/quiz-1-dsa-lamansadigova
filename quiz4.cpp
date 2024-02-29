#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> myvector(10);
    for(int i=0;i<n;i++){
        cin>>myvector[i];
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            int temp=myvector[j];
            if(myvector[j]>myvector[j+1]){
               myvector[j]=myvector[j+1];
               myvector[j+1]=temp;
            }

    }
cout<<endl;
}
 for(int i=0;i<n;i++){
        cout<<myvector[i]<<" ";
    }


}