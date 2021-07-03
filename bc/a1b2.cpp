#include <stdio.h>
#include <conio.h>

int ToInt(string);

int main() {
	string s = "a3b3";
	int i =0;
	int n = sizeof(s)/sizeof(string);
	while(i<n){
		char ch = s[i++];
		string snum;
		if(i<n && '0' >= int(s[i]) <= '9' ){
			snum += s[i++];
		}
		int num = ToInt(snum);
		while(num--){
			printf(ch);
		}
	}
}

int ToInt(string s){
	int res = 0, n = sizeof(s)/sizeof(string);
	for(int i =0; i<n; i++){
		res = (res*10) + int(s[i]) - 48;
	}
	return res;
}
