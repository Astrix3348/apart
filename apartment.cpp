#include<iostream>
using namespace std;

int main(){
	int t;
	cin >> t;

	while(t--){
		int n;
		cin >> n;

		int last_digit = n%10;
		int count = 0;

		while(n>0){
			n/=10;
			count++;
		}
		if(count==1){
			cout << ((last_digit*10) - 10)+1; 
		}
		else if(count==2){
			cout << ((last_digit*10) - 10)+3; 
		}
		else if(count==3){
			cout << ((last_digit*10) - 10)+6; 
		}
		else if(count==4){
			cout << ((last_digit*10) - 10)+10; 
		}
        cout << endl;	
    }

	return 0;
}