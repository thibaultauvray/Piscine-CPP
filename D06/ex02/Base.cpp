#include "Base.hpp"


Base * generate(void)
{
	std::srand(time(NULL) + clock());
	int		i = std::rand() % 3;
	if (i == 0)
	{
		std::cout << "A " << std::endl;
		A *a = new A();
		return a;
	}
	if (i == 1)
	{
		std::cout << "B " << std::endl;
		B *b = new B();
		return b;
	}
	if (i == 2)
	{
		std::cout << "C " << std::endl;
		C *c = new C();
		return c;
	}
	return new Base();
}


void identify_from_reference( Base & p )
{

	try
	{
		A &b = dynamic_cast<A &>(p);
		std::cout << "References type A" << std::endl;
		b = b;
	}
	catch (std::bad_cast &e)
	{
		try
		{
			B &b = dynamic_cast<B &>(p);
			std::cout << "References type B" << std::endl;
			b = b;
		}
		catch(std::bad_cast &e)
		{
			try
			{
				C &b = dynamic_cast<C &>(p);
				std::cout << "References type C" << std::endl;
				b = b;
			}
			catch(std::bad_cast &e)
			{
				std::cout << "Something is wrong" << std::endl;
			}
		}
	}
}
void identify_from_pointer( Base * p )
{
	Base	*b = new Base();

	b = dynamic_cast<A *>(p);
	if (b == NULL)
	{
		b = dynamic_cast<B *>(p);
		if (b == NULL)
		{
			b = dynamic_cast<C *>(p);
			if (b == NULL)
			{
				std::cout << "Something is wrong" << std::endl;
			}
			else
			{
			std::cout << "Pointer class type C" << std::endl;
			}
		}
		else
		{
			std::cout << "Pointer class type B" << std::endl;
		}
	}
	else
	{
		std::cout << "Pointer class type A" << std::endl;
	}
}

int main ( void )
{
	Base *e = new Base();

	e = generate();
	identify_from_pointer(e);
	identify_from_reference(*e);
}
