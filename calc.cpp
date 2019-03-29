//
// This is a basic calculator implementation
//

#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>

// Creating a branching feature
// Creating a branching feature this is v3
// Creating a branching feature this is 'new version'

unsigned int factorial(int a)
{
	int r=1;
	for (int i=a;i>0;i--) r*=i;
	return r;
}

int main ()
{
	double a,b,r,memory=0;
	char op, choice[10];

	std::cout << "+ to add\n- to subtract\n* to multiply\n/ to divide\n^ to power\n! to factorial\n\n";
	start:

	std::cin >> a;
	reused:
	std::cin >> op;
	
	if (op=='!') r=factorial(a); 
	else
	{
		std::cin>>b;
		if (op=='+') r=a+b;
		if (op=='-') r=a-b;
		if (op=='*') r=a*b;
		if (op=='/') r=a/b;
		if (op=='^') r=pow(a,b);
	}
	
	std::cout << "=" << r << std::endl;

	std::cout << "\nType 'mi' to insert the number into memory, or\n     'mc' to clear memory\n";
	std::cin >> choice;
	if (!strcmp(choice,"mi")) memory=r;
	else if (!strcmp(choice,"mc")) memory=0;
	else std::cout << "command unknown, program will go on\n";

	std::cout << "\nType 'restart' to start again\n     'reuse' to use the result\n     'mr' to reuse the number in the memory, or \n     'quit' to quit: ";
	std::cin >> choice;
	if (!strcmp(choice,"restart")) goto start; // START FROM THE BEGINING
	if (!strcmp(choice,"reuse")) { a=r; std::cout << a; } // USE THE RESULT
	if (!strcmp(choice,"reuse")) goto reused; // START WITH THE RESULT
	if (!strcmp(choice,"quit")) goto end; // QUIT THE PROGRAM
	if (!strcmp(choice,"mr")) { a=memory; std::cout << a; } // USE THE MEMORY
	if (!strcmp(choice,"mr")) goto reused; // START WITH THE MEMORY
	getchar();
	end: // TO QUIT THE PROGRAM
	return 0;
}
