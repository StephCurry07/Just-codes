#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int median(int* arr, int n){
    sort(arr,arr+n);
    int med;
    if(n%2 == 0){
        med = arr[n/2];
    }
    else{
        med = arr[(n+1)/2];
    }
    return med;
}

void findPermutations(int arr[], int n){
    int a[n];
    int j = n;
    for(int i = 0; i < n; i++){
        a[i] = arr[i];
    }
    // cout << "Possible permutations are:\n";
    do{
        while(j--){
            if(median(arr,n) == arr[j]){
                if(j == 0){
                    for(int i = 0; i < n; i++){
                        cout << a[i] << " ";
                        break;
                    }
                }
                continue;
            }
            else{
                break;
            }
        }
    } while (next_permutation(a, a + n));
    
}

int main() {
    int t,n;
    cin >> t;
    while(t--){
        cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++){
            arr[i] = i+1;
        }
        findPermutations(arr,n);
        cout << endl;
    }
	return 0;
}