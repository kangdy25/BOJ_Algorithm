// 정수 N개의 합

#include <vector>
long long sum(std::vector<int> &a) {
	long long result = 0;
    
    for (long long i = 0; i < a.size(); i++) {
        result = result + a[i];
    }
	return result;
}

