// This Program is used to find the maximum and minnimum 
// element from an array
#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the size of array"<<endl;
    cin>>n;
    int arr[n];
    cout << "Enter the Elements of array"<<endl;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int maximum = INT_MIN;
    int minimum = INT_MAX;
    for(int i=0; i<n; i++){
        maximum = max(arr[i],maximum);
        minimum = min(arr[i],minimum);
    }
    cout << "Maximum: " << maximum << endl;
    cout << "Minimum: " << minimum << endl;
}