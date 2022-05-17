#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector <int> nums{ 3,3 };
	int target{6};
	vector <int> result;
	for (int i = 0; i < nums.size() -1 ; i++) {
		for (int k = i+1; k < nums.size(); k++) {
			if (nums[i] + nums[k] == target) {
				result.push_back(i);
				result.push_back(k);
				i = nums.size();  break;
			}
		}
	}

}