#include "MergeStringsAlternately.h"

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