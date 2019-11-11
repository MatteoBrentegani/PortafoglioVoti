#include <iostream>
#include <vector>
#include <string>
 
 
using namespace std;
 
string s;
string t;
string k;
int n;
int moves = 0;
vector<int> pipe;
 
 
int findLetter(char l, int index) {
	for (int i = n - 1; i >= 0; i--)
	{
		if (i != index) {
			if (t[i] == l && s[i] != t[i]) { return i; }
		}
	}
	if (s[index] != t[index]) { return index; }
	return -1;
}
 
void swapLetter(int i) {
	if (i > n) { return; }
	else {
		if (s[i] != t[i])
		{
			int tmp = s[i];
			//t[i] = tmp;
			int index;
			if (s[i] == 'b')
			{
				index = findLetter('a', i);
			}
			else { index = findLetter('b', i); }
			if (index == -1) return;
			s[i] = t[i];
			if (s._Equal(k) && t._Equal(k)) {
				pipe.push_back(i);
				pipe.push_back(index);
				return;
			}
			t[index] = tmp;
			pipe.push_back(i);
			pipe.push_back(index);
		}
		swapLetter(i + 1);
	}
}
 
int main() {
 
	cin >> n;
	cin >> s;
	cin >> t;
	k = s;
 
 
	if (s.length() != t.length()) { cout << "-1" << endl; return 0; }
 
	swapLetter(0);
	if (s._Equal(t)) {
		cout << pipe.size() / 2 << endl;
		for (int i = 0; i < pipe.size();)
		{
			cout << pipe[i] + 1 << " " << pipe[i + 1] + 1 << endl;
			i += 2;
		}
	}
	else { cout << "-1" << endl; }
 
	//getchar();
	return 0;
}