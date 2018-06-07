#pragma once
class Table
{
private:
	int index_;
	static int count_;
public:
	Table();
	~Table();
	virtual int get_count();
	virtual int raise_count();
	int get_index() const { return index_; }
	void set_index(const int index) { index_ = index; }
};

