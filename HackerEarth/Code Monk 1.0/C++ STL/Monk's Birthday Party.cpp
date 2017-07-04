#include <iostream>
#include <set>

using namespace std;

int main()
{
	int t, n;
	string name;
	cin >> t;
	while(t--) {
		cin >> n;
		std::set <string> names;
		for(int i = 0; i < n ; i++) {
			cin >> name;
			names.insert(name);
		}
		std::set <string>::iterator it = names.begin();
		while(it != names.end()) {
			cout << *it << endl;
			it++;
		}
	}
    return 0;
}