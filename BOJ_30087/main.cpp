#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <tuple>
#include <string>
#include <algorithm>

using namespace std;

using ll = long long;
using vb = vector<bool>;
using vvb = vector<vb>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<ll>;
using vvl = vector<vl>;
using pii = pair<int, int>;
using vii = vector<pii>;
using pll = pair<ll, ll>;
using vll = vector<pll>;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n;
	cin >> n;

	while (0 < (n--)) {
		string s;
		cin >> s;

		if ("Algorithm" == s) {
			cout << "204\n";
		}
		else if ("DataAnalysis" == s) {
			cout << "207\n";
		}
		else if ("ArtificialIntelligence" == s) {
			cout << "302\n";
		}
		else if ("CyberSecurity" == s) {
			cout << "B101\n";
		}
		else if ("Network" == s) {
			cout << "303\n";
		}
		else if ("Startup" == s) {
			cout << "501\n";
		}
		else if ("TestStrategy" == s) {
			cout << "105\n";
		}
	}

	return 0;
}