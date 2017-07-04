#include <iostream>
#include <algorithm>
#include <map>

using namespace std;

int main()
{
	long long int t, n, m, candy;
	cin >> t;
	while(t--) {
		std::map <long long int, long long int> students;
		cin >> n >> m;
		for(int i = 0; i < n; i++) {
			cin >> candy;
			students[candy] += 1;
		}
		for(int i = 0; i < m; i++) {
			cin >> candy;
			if(students[candy] == 0) {
				cout << "NO" << endl;
			} else {
				cout << "YES" << endl;
			}
			students[candy] += 1;
		}
	}
    return 0;
}