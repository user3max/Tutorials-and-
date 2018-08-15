#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASS_H

class Sample
{
public:
	int foo;
	/*	char	a1;
		int		a2;
		float	a3;
	*/
	/*
	float const	pi;
	int			qd;
	*/
	//int publicFoo;

	//Sample(void);
	//Sample(char p1, int p2, float p3);
	//Sample(float const f);
	Sample(void);
	//Sample(int v);
	~Sample(void);

	//void	bar(void);
	void	bar(void) const;
	//void	publicBar(void) const;
	//int	getFoo(void) const;
	//void	setFoo(int v);
	//int 	compare(Sample * other) const;
	//static int	getNbInst(void);

private:
	//int	_privateFoo;

	//void	_privateBar(void) const;
	//int _foo;
	//static int _nbInst;
};

#endif

// good convenience to use _ for private attribute

/*
struct Sample
{
	int foo;

	Sample(void);
	~Sample(void);

	void bar(void) const;
};

scope of the struct is public by default \
and scope of the class is private by default
*/