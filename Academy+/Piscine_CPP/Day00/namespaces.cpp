#include <stdio.h>

int gl_var = 1;
int f(void) {return 2;}

namespace foo
{
	int gl_var = 3;
	int f(void) {return 4;}
}

namespace Bar
{
	int gl_var = 5;
	int f(void){return 6;}
}

namespace Muf = Bar;

int main(void)
{
	printf("gl_var: 		[%d]\n", gl_var);
	printf("f():			[%d]\n", f());

	printf("foo::gl_var:	[%d]\n", foo::gl_var);
	printf("foo::f():		[%d]\n", foo::f());

	printf("Bar::gl_var:	[%d]\n", Bar::gl_var);
	printf("Bar::f():		[%d]\n", Bar::f());

	printf("Muf::gl_var:	[%d]\n", Muf::gl_var);
	printf("Muf::f():		[%d]\n", Muf::f());

	printf("::gl_var:		[%d]\n", ::gl_var);
	printf("::f():			[%d]\n", ::f());
}

//:: - scope resolution operator
//g++ -Wall -Wextra -Wno-used -Werror main.cpp