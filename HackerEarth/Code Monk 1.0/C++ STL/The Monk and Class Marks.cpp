#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;

int main()
{
	std::vector<std::pair<int, std::string>> marks;
	int t, n;
	string s;
	cin >> t;
	while(t--) {
		cin >> s >> n;
		marks.push_back(std::make_pair((-1) * n, s));
	}
	std::sort(marks.begin(), marks.end());
	
	for(const auto &p : marks) {
		cout << p.second << " " << (-1) * p.first << endl;
	}
    return 0;
}
