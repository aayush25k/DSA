#include<bits/stdc++.h>
using namespace std;
void bubblesort(int arr[],int n){
    for(int i=n-1;i>1;i--){
        for(int j=0;j<i;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}

int main(){
    int arr[10]={45,21,41,12,53,69,78,10,30,25};
    bubblesort(arr,10);
    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }
return 0;

}
