//iter.cpp by Carp-Bezverhnii Maxim
#include <iostream>

template<typename T>
void	iter(T *a, unsigned int len, void (*f)(T const&)) {
	if(a != nullptr) {
		for(unsigned int i = 0; i < len; i++)
			f(a[i]);
	}
}

template<typename T>
void	print_T(T const& i) {
	std::cout << i << std::endl;
}

int main(void) {

	std::string w[] = {"include", "iostream", "template", "typename"};
	int ni[] = {1, 2, 4, 5, 7};
	float nf[] = {1.5, 7.2};

	iter(w, 4, print_T);
	iter(ni, 5, print_T);
	iter(nf, 2, print_T);

	return 0;
}