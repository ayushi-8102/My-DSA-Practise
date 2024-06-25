class Solution {
public:
   int minKBitFlips(vector<int>& nums, int k) {
	int res = 0, sz = nums.size();
	queue<int> qflips;
	for (int i = 0; i < sz; i++) {
		if (nums[i] != (qflips.size() % 2 ? 0 : 1)) {
			qflips.push(i + k - 1);
			res++;
		}
		if (!qflips.empty() && qflips.front() <= i)
			qflips.pop();
	}
	return qflips.empty() ? res : -1;
}
};