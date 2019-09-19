#include <iostream>
#include <boost/multiprecision/cpp_int.hpp>
#include <algorithm>
#include <vector>

using namespace std;
using namespace boost::multiprecision;

cpp_int fact (cpp_int n) {
    cpp_int f = 1;
    for (cpp_int i = n; i >= 1; --i) {
        f *= i;
    }
    return f;
}

int main() {
	
	int t;
	cin >> t;
	while (t--) {
	    int n, k;
	    cin >> n >> k;
	    int a[n];
	    for (int i = 0; i < n; ++i) {
	        cin >> a[i];
	    }
	    sort(a, a + n);
	    vector<int> v;
	    
	    int prev = a[0], x = 1;
	    for (int i = 1; i < n; ++i) {
	        if (a[i] == prev) {
	            ++x;
	        } else {
	            v.push_back(x);
	            prev = a[i];
	            x = 1;
	        }
	    }
	    v.push_back(x);
	    cpp_int res = 1;
	    for (int i = 0; i < v.size() && k > 0; ++i) {
	        if (v[i] >= k) {
	            cpp_int num = fact (v[i]);
	           // cout << v[0] << "=" << num;
	            cpp_int deno = fact (v[i] - k) * fact (k);
	           // cout << " &" << deno << endl;
	            res = num / deno;
	            k = 0;
	           // cout << res << " ";
	        } else {
	            k -= v[i];
	        }
	    }
	    
	    cout << res << endl;
	}
	return 0;
}
