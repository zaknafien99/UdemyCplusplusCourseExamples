#pragma once
#ifndef  RING_H
#define RING_H



#include <iostream>
using namespace std;

class ring {
public:
	class iterator;
};


class ring::iterator
{
public:
	public:
		void print() {
			cout << "Hello from iterator" << endl;
		}
	};

#endif // ! RING_H
