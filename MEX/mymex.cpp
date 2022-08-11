#include <iostream>
using namespace std;

int main(){
	int t, n, m, k, temp, count, flag;
	cin >> t;
	while(t--){
	    cin >> n >> m >> k;
	    int arr[n];
	    int array[m];
	    int i = 0, p = 0;
	    temp = 0, flag = 0;
	    while(i != n){
	        cin >> arr[i++];
	    }
	    for(int i = 0; i < n; i++){
	       // if(arr[i] != m){
	       //     array[p++] = arr[i];
	       // }
	       // else{
	       //     count++;
	       // }
	       // if(count == 1 && n > m){
	       //     cout << "YES";
	       //     flag++;
	       // }
	       
	        else{
	            for(int j = 0; i < m;i++){
	                if(array[j] == temp){
	                    temp++;
	                    j = 0;
	                    cout << temp;
	                }
	                else{
	                    if(temp == k){
	                        cout << "YES";
	                        flag++;
	                    }
	                }
	            }
	        }
	    }
        if(!flag)
            cout << "NO";
       cout << endl;
	}
}
