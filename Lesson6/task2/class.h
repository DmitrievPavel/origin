#pragma once
class Counter {
private:
	int count;
public:
	Counter();
	Counter(int number);
	void incCount();
	void decCount();
	void seeCount();
};