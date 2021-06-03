#include <iostream>
#include <list>
#include <string>
#include <vector>
#include "main.h"


using namespace std;

list<int> GetNumber(string str) {
	list<int> list;
	for (int i = 0; i < str.size(); ++i) {
		list.push_back(str[i] - '0');
	}
	return list;
}

list<int> LongSumLong(list<int> first, list<int> second) {
	list <int> sum;
	int x = 0;
	int size1 = first.size();
	int size2 = second.size();
	int maxsize = 0;
	if (size1 < size2) {
		for (int i = 0; i < size2 - size1; i++) {
			first.push_front(0);
		}
		maxsize = size2;
	}
	else if (size1 > size2) {
		for (int i = 0; i < size1 - size2; i++) {
			second.push_front(0);			
		}
		maxsize = size1;
	}
	else{
		maxsize = size1;
	}

	/*for (list<int>::iterator it = first.begin(); it != first.end(); it++) {
		cout << *it;
	}
	cout << endl << maxsize << endl << size1 << endl << size2; */
	
	list<int>::iterator it1 = first.end();
	list<int>::iterator it2 = second.end();
	it1--; 
	it2--;
	int digit = 0;
	while (maxsize != 0) {		
		digit = *it1 + *it2;
		if (maxsize != 1) {
			it1--;
			it2--;
			
		}
		if (x == 1) {
			digit += 1;
			x = 0;
		}
		if (digit > 9 && maxsize != 1) {
			x = 1;
			digit -= 10;
		}
		maxsize--;
		sum.push_front(digit);
	}
	return (sum);
}

list<int> Diff(list<int> bigger, list<int> smaller, int maxsize) {
	list<int>::iterator it1 = bigger.end();
	list<int>::iterator it2 = smaller.end();
	list <int> diff = bigger;
	list<int>::iterator it3 = diff.end();
	list<int>::iterator commonIt = it3;

	for (int i = 0; i < (maxsize - 1); i++) {
		if (i < (maxsize - 1)) {
			*it3 += 10 + *it1;
			it1--;
			*it1--;
		}
		else {
			*it3 += *it1;
		}
		*it3 -= *it2;

		if (*it3 / 10 > 0) {
			*it3 %= 10;
			it3++;
			*it3++;;

		}
	}
	return (diff);
}

list<int> LongSubLong(list<int> first, list<int> second) {
	list <int> ans;
	int x = 0;
	int size1 = first.size();
	int size2 = second.size();
	int maxsize = 0;
	int whatIsBigger = 0;
	if (size1 < size2) {
		for (int i = 0; i < size2 - size1; i++) {
			first.push_front(0);
			whatIsBigger = 2;
		}
		maxsize = size2;
	}
	else if (size1 > size2) {
		for (int i = 0; i < size1 - size2; i++) {
			second.push_front(0);
			whatIsBigger = 2;
		}
		maxsize = size1;
	}
	if (whatIsBigger == 1) ans = Diff(first, second, maxsize);
	else ans = Diff(second, first, maxsize);
	return (ans);
}

list<int> OneMulti(list<int> number, int digit) {
	list<int> ans;
	int add = 0;
	for (list<int>::iterator it = --number.end(); it != --number.begin(); it--) {
		auto temp = *it;
		ans.push_front(((*it) * digit + add) % 10);
		add = (digit * (*it) + add) / 10;
	}
	if (add != 0) {
		ans.push_front(add);
	}
	return ans;
}

list<int> LongMulLong(list<int> first, list<int> second) {
	list<int> ans;
	list<int> middle;
	list<int> biggerNum;
	list<int> smallerNum;
	biggerNum = first.size() >= second.size() ? first : second;
	if (biggerNum == first) {
		smallerNum = second;
	}
	else {
		smallerNum = first;
	}
	int count = 0;
	for (auto it = --smallerNum.end(); it != --smallerNum.begin(); it--) {
		middle = OneMulti(biggerNum, *it);
		int j = 0;
		while (j < count) {
			middle.push_back(0);
			++j;
		}
		count++;
		if (!ans.empty()) {
			ans = LongSumLong(middle, ans);
		}
		else {
			ans = middle;
		}
	}
	return (ans);
}


int main(int argc, char** argv) {
	string str1, str2;
	cin >> str1 >> str2;
	list <int> number1 = GetNumber(str1);
	list <int> number2 = GetNumber(str2);
	list<int>::iterator i = number1.begin();
	int x = number1.size();
	while (x != 0) {
		x--;
		cout << *i;
		i++;
	}

	list <int> ANS = LongMulLong(number1, number2);
	list<int>::iterator k = ANS.begin();
	cout << endl;
	x = ANS.size();
	while (x != 0) {
		x--;
		cout << *k;
		k++;
	}	
}