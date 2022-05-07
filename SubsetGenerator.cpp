#include<bits/stdc++.h>

using namespace std;

vector < std::vector<int>> subsets;

void GenerateSubset(vector<int> &subset, int i , vector<int> &nums) {
	if (i == nums.size()) {
		subsets.push_back(subset);
		return ;
	}
	//  Not Take the i - th element
	GenerateSubset(subset, i + 1, nums);

	//Take the i-th Element
	subset.push_back(nums[i]);
	GenerateSubset(subset, i + 1, nums);
	subset.pop_back();
}

int main(int argc, char const *argv[])
{
	int n;
	cin >> n;
	vector<int> v ;
	for (int i = 0; i < n; i++) {
		int t;
		cin >> t;
		v.push_back(t);
	}
	vector<int> empty;
	GenerateSubset(empty, 0, v);
	sort(subsets.begin(), subsets.end());
	for (int i = 0 ; i < subsets.size(); i++) {
		for (int j = 0 ; j < subsets[i].size(); j++) {
			cout << subsets[i] [ j] << " ";
		}
		cout << endl;
	}
	cout << endl;
	return 0;
}
