#include "../Headers/test.h"
#include <iostream>

using namespace std;

test::test()
{
	cout << "test construction" << endl;
}

test::~test()
{
	cout << "test destruction" << endl;
}
