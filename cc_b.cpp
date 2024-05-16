#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        string s; cin >> s;
        char ch = ' ';
        int cn = 0;
        for(int i = 0; i < n; i++){
            if(s[i] == 'S'){
                if(ch != 'R'){
                    cn++;
                    ch = 'R';
                }
                else{
                    ch = ' ';
                }
            }
            else if(s[i] == 'R'){
                if(ch != 'P'){
                    cn++;
                    ch = 'P';
                }
                else{
                    ch = ' ';
                }
            }
            else if(s[i] == 'P'){
                if(ch != 'S'){
                    cn++;
                    ch = 'S';
                }
                else{
                    ch = ' ';
                }
            }
        }
        cout << cn << endl;
        
    }
	// your code goes here

}
