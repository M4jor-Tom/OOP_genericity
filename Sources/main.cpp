#include <vector>
#include <list>
#include <string>
#include <iostream>
#include <memory>

#include "../Headers/test.h"
#include "../Headers/set.h"

using namespace std;

void setExample();
void smartPointerExample();
void listExample();
void vectorExample();

int main()
{
	setExample();
	return 0;
}

void setExample()
{
	set<int> intSet;

	intSet.add(100);
	intSet.add(200);
	intSet.add(300);

	intSet.print();
	cout << "200 exists: " << intSet.find(200) << endl << "----" << endl;

	intSet.erase(200);
	intSet.print();
	cout << "200 exists: " << intSet.find(200) << endl;
}

void smartPointerExample()
{
	cout << "unique" << endl;
	{
		unique_ptr<test> up(new test);
	}

	cout << "shared" << endl;
	{
		shared_ptr<test> sp1(new test);
		cout << sp1.use_count() << endl;

		shared_ptr<test> sp2 = sp1;
		cout << sp1.use_count() << endl;

		shared_ptr<test> sp3 = sp1;
		cout << sp1.use_count() << endl;
	}
}

void listExample()
{
	//Creating a list
	list <string> _list =
	{
		"1",
		"2",
		"4",
	};

	//Pushing front and back list elements
	_list.push_back("back");
	_list.push_front("front");

	//Basic for
	for(list <string>::iterator it = _list.begin(); it != _list.end(); it++)
		cout << *it << endl;

	//For "each"
	for(string elt : _list)
		cout << elt << endl;
}

void vectorExample()
{

	vector <int> _array(6, 5);
	
	for(vector <int>::iterator it = _array.begin(); it != _array.end(); it++)
		cout << *it << endl;
	
	for(int elt : _array)
		cout << elt << endl;
}