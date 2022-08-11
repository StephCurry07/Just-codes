#include <iostream>
using namespace std;

int main() {
    int t, n, test;
    cin >> t;
    while(t--){
        test = 0;
        cin >> n;
        for(int k = 0; k < n/2+1; k++){
            if((n - 2*k)%7 == 0){
                cout << "Yes";
                test++;
                break;
            }
        }
        if(test == 0){
            for(int k = 0; k < n/7+1; k++){
                if((n - 7*k)%2 == 0){
                    cout << "Yes";
                    test++;
                    break;
                }
            }
        }
        if(test == 0)
            cout << "No";
        cout << "\n";
    }
	return 0;
}
