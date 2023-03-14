#include <iostream>
using namespace std;
int main(){
    int n,key;
    cout << "Enter the size of array"<<endl;
    cin>>n;
    int arr[n];
    cout << "Enter the Elements of array"<<endl;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int length = 2;
    int max_length = INT_MIN;
    int prevDifference = arr[1] - arr[0];
    
    for(int i=1; i<n-1; i++){
        if(prevDifference == arr[i+1]-arr[i]){
            length++;
        }else{
            prevDifference = arr[i+1]-arr[i];
            length = 2;
        }
        max_length = max(max_length,length);
    }
    cout << "Maximum Length: " << max_length <<endl;
    return 0;
}