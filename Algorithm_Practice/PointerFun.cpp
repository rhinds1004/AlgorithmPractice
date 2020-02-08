#include <iostream>;
#include "PointerFun.h"


using namespace std;


void AllocatingDeletingDynamicMemory()
{
	int* ptrInt = nullptr;

	ptrInt = new int;

	cout << "size of Int pointer: " << sizeof(ptrInt) << "size of allocated space: " << sizeof(*ptrInt);

	double* ptrDoub = new double;
	cout << "size of Int pointer: " << sizeof(ptrDoub) << "size of allocated space: " << sizeof(*ptrDoub);
	*ptrDoub = 8.0;
	cout << "value at Double pointer: " << *ptrDoub;

	delete ptrInt;
	delete ptrDoub;

	//below results in a segmentation fault as it try to read an memory location that was returned back to the OS.
	//cout << "after deletion: " << *ptrDoub;
}



void ByValue(int val)
{
	cout << "value of passed in parameter: " << val << endl;
	cout << "memory address of myInt: " << &val << endl;
	val++;
	cout << "value of passed in parameter after incrementing by one: " << val << endl;
}

void ByReference(int& refVal)
{
	cout << "value of passed in parameter: " << refVal << endl;
	cout << "memory address of myInt: " << &refVal << endl;
	refVal++;
	cout << "value of passed in parameter after incrementing by one: " << refVal << endl;
}

void ShowingDifferenceBetweenPassByValueAndPassByReference()
{
	cout << "Testing passing by value (default C++ mechanism when calling a function and passing in an agrument)" << endl;
	int myInt = 5;
	cout << "memory address of myInt: " << &myInt << endl;
	cout << "myInt value where defined: " << myInt << endl;
	ByValue(myInt);
	cout << "myInt value after returning from function call: " << myInt << endl;


	cout << "Testing passing by reference" << endl;
	int myIntToRef = 7;
	cout << "memory address of myIntToRef: " << &myIntToRef << endl;
	cout << "myIntToRef value where defined: " << myIntToRef << endl;
	ByReference(myIntToRef);
	cout << "myIntRef value after returning from function call: " << myIntToRef << endl;
}
