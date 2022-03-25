#include <stdio.h>

int main() {
  int t;
	scanf("%d", &t);
	while (t--){
	    int n, temp=0;
	    scanf("%d", &n);
	    int arr[n];
	    for(int i = 0; i < n; i++){
	        scanf("%d", &arr[i]);
	    }
	    for(int i = 0; i < n; i++){
	        if(10 <= arr[i] && arr[i] <= 60){
	            temp++;
	        }
	    }
	    printf("%d\n", temp);
	}
	return 0;
}
