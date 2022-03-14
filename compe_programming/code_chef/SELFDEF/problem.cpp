#include <iostream>
using namespace std;

int main() {
  int t;
	cin >> t;
	while (t--){
	    int n, temp=0;
	    cin >> n;
	    int arr[n];
	    for(int i = 0; i < n; i++){
	        cin >> arr[i];
	    }
	    for(int i = 0; i < n; i++){
	        if(10 <= arr[i] && arr[i] <= 60){
	            temp++;
	        }
	    }
	    cout << temp << "\n";
	}
	return 0;
}
