#include "AllSolutions.h"

string Solution::mergeAlternately(string word1, string word2) 
{
	int m1 = word1.length(), m2 = word2.length(),i = 0, j = 0;
	string answer="";

	while (i < m1 || j < m2) {
		if (i < m1) {
			answer += word1[i++];
		}
		if (j < m2) {
			answer += word2[j++];
		}
	}

	return answer;
}

char Solution::findTheDifference(string s, string t) {
	char diff = 0;

	// Use XOR gate for time complexity O(n) and space complexity is O(1) with no extra space
	for (char c : s) {
		diff ^= c;
	}
	for (char c : t) {
		diff ^= c;
	}

	return diff;
}

int Solution::strStr(string haystack, string needle) {
	int firstoccurence = -1, i = 0, j = 0;
	while (i < haystack.length()) {
		if (haystack.substr(i++, needle.length()) == needle) {
			return i - 1;
			break;
		}
		
	}
	return firstoccurence;

}

bool Solution::isAnagram(string s, string t) {

	if (s.length() != t.length()) return false;

	int count[256] = { 0 }; // Assuming ASCII character set

	for (int i = 0; i < s.length(); i++) {
		count[s[i]]++;
		count[t[i]]--;
	}

	for (int i = 0; i < 256; i++) {
		if (count[i] != 0) {
			return false;
		}
	}

	return true;
}

bool Solution::repeatedSubstringPattern(string s) {
	int n = s.length();
	for (int len = 1; len <= n / 2; ++len) {
		if (n % len == 0) { // Only consider lengths that evenly divide n
			string pattern = s.substr(0, len);
			int j;
			for (j = len; j < n; j += len) {
				if (s.substr(j, len) != pattern) {
					break;
				}
			}
			if (j == n) return true; // The pattern matched the entire string
		}
	}
	return false;
}

void Solution::moveZeroes(vector<int>& nums) {
	int i = 0; // Pointer for the next non-zero position
	for (int j = 0; j < nums.size(); j++) {
		if (nums[j] != 0) {
			// Swap the non-zero element to its correct position if needed
			if (i != j) {
				swap(nums[i], nums[j]);
			}
			i++; // Move the non-zero position forward
		}
	}
	
}

vector<int> Solution::plusOne(vector<int>& digits) {
	vector<int> temp;
	int size = digits.size();
	bool remain = false;
	for (int i = size - 1; i >= 0; i--) {

		if (digits.at(i) !=9 && i==size -1) {
			digits.at(i) += 1;
			return digits;
		}
		else if (digits.at(i) == 9) {
			digits.at(i) = 0;
			remain = true;
		}
		else if (digits.at(i) != 9 && remain) {
			digits.at(i) += 1;
			return digits;
		}
		if (remain && i == 0) {
			digits.insert(digits.begin(), 1);
			return digits;
		}

	}
	return digits;
}

int Solution::arraySign(vector<int>& nums) {
	int sign = 1,i = 0;
	for (i = 0; i < nums.size(); i++) {
		sign = sign * nums.at(i);
	}
	if (sign > 0) {
		sign = 1;
	}
	else if (sign < 0) {
		sign = -1;
	}
	else {
		sign = 0;
	}
	return sign;
}

int Solution::maxFrequencyElements(vector<int>& nums) {
	std::vector<int> numCounter(100, 0); // Initialize counts for 0 to 99
	int maxfreq = 0;

	// Count occurrences of each number
	for (int num : nums) {
		numCounter[num % 100]++;
		maxfreq = std::max(maxfreq, numCounter[num % 100]);
	}

	// Count total occurrences of numbers with maximum count
	int totalCount = 0;
	for (int count : numCounter) {
		if (count == maxfreq) {
			totalCount += count;
		}
	}

	return totalCount;

}

bool Solution::canMakeArithmeticProgression(std::vector<int>& arr) {
	bool result = true;

	if (arr.size() > 2) {
		for (size_t i = 0; i < arr.size(); i++) {
			int min = arr[i];
			size_t index = i;
			for (size_t j = i + 1; j < arr.size(); j++) {
				if (arr[j] < min) {
					min = arr[j];
					index = j;
				}
			}
			std::swap(arr[i], arr[index]);
		}

		// Check if the elements form an arithmetic progression
		int diff = arr[1] - arr[0];
		for (size_t i = 2; i < arr.size(); i++) {
			if (arr[i] - arr[i - 1] != diff) {
				result = false;
				break;
			}
		}
	}

	return result;
}

string Solution::customSortString(string order, string s) {
	// Define the custom comparator as lambda
	std::sort(s.begin(), s.end(), [order](char c1, char c2) {
		return order.find(c1) < order.find(c2);
		});

	//note that [order](char c1, char c2) {return order.find(c1) < order.find(c2);} is a lambda expression 
	return s;
}

bool Solution::isMonotonic(vector<int>& nums) {
	/*
	bool ascendingflag = false;
	bool descendingflag = false;
	if (nums.size() <= 2) {
		return true;
	}
	else {
		for (int i = 0; i < nums.size()-1; i++) {
			if (nums.at(i) > nums.at(i+1)) {
				ascendingflag = true;
			}
			else if (nums.at(i) < nums.at(i + 1)) {
				descendingflag = true;
			}

		}
		
	}
	if (!(ascendingflag && descendingflag)) {
		return true;
	}
	else {
		return false;
	}
	*/
}