#pragma once
#include <list>
#include <iostream>
#include <cstring>

using namespace std;

template<typename T> class set//:public list
{
private:
	list<T>	_list;
public:
	set();
	virtual ~set();
	bool add(const T &elt);
	bool erase(const T& elt);
	bool find(const T& elt);
	bool empty();
	bool print();
};

template <typename T> set<T>::set()
{
	memset(this, 0, sizeof(T));
	cout << "set construction" << endl;
}

template<typename T>
inline set<T>::~set()
{
	cout << "set destruction" << endl;
}

template <typename T> bool set<T>::add(const T &elt)
{
	_list.push_front(elt);
	return true;
}

template <typename T> bool set<T>::erase(const T &elt)
{
	typename list<T>::iterator it  =_list.begin();
	while (it != _list.end())
	{
		if (*it == elt)
		{
			_list.erase(it);
			return true;
		}
		it++;
	}
	return false;
}

template <typename T> bool set<T>::find(const T& elt)
{
	bool found = false;
	typename list<T>::iterator it = _list.begin();
	while (it != _list.end())
	{
		if (*it == elt)
		{
			found = true;
		}
		it++;
	}
	return found;
}

template <typename T> bool set<T>::empty()
{
	return _list.empty();
}

template <typename T> bool set<T>::print()
{
	for (T elt : _list)
		cout << elt << endl;
	return true;
}