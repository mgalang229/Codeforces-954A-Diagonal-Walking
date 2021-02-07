#include <bits/stdc++.h>

using namespace std;

int main() {                            
  ios::sync_with_stdio(false);
  cin.tie(0);
 	int n;
 	string s;
 	cin >> n >> s;
 	string result = "";
 	bool checker = false;
 	for (int i = 0; i < n - 1; i++) {
 		if ((s[i] == 'R' && s[i + 1] == 'U') || (s[i] == 'U' && s[i + 1] == 'R')) {
 			// check if two consecutive letters are "RU" or "UR"
 			// concatenate "D" to the resulting string
 			result += "D";
 			// skip the next character
 			i++;
 			if (i + 1 == n) {
 				// check if the last character is combined or not
 				checker = true;
 			}
 		} else {
 			// otherwise, concatenate the current letter
 			result += s[i];
 		}
 	}
 	// if the last character is not combined then 1 since the FOR loop only checks up to n - 1 characters
	cout << (!checker ? (int) result.size() + 1 : (int) result.size()) << '\n'; 	
  return 0;
}      
