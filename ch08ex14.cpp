/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Alejandro Pelaez
 */
#include <iostream>

using namespace std;

void test(const int value)
{
	cout << value;
}

int main()
{
	const int value = 99;
	test(value);
}