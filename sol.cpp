#include <bits/stdc++.h>
using namespace std;

int main (void) {

  ios_base::sync_with_stdio (false);
	cin.tie (NULL);

	int n, x, y, subcnt = 0;
	string line;

	cin >> n;
	cin >> x;
	cin >> y;

	if (y < 0 || x <= y || n <= x || n > 200000) return 1;

	cin.ignore();
	getline (cin, line);
	size_t size = line.length();
	string seq = line.substr (size-x, x);

	for (int i = 0; i < x-y-1; i++) {
		if ( seq[i] != '0' ) subcnt++;
	}
  
	if ( seq[x-y-1] == '0' ) subcnt++;

	for (int i = x-y; i < x; i++) {
			if ( seq[i] != '0' ) subcnt++;
	}
  
	cout << subcnt << endl;

	return 0;
