#include "Header.h"
using namespace std;
int main()
{
	Human a("Ivan","Ivanovich", "Ivanov", 20);
	Boss b("Ivan", "Ivanovich", "Ivanov", 20, 100);
	Student c("Ivan", "Ivanovich", "Ivanov", 20, 1);
	a.Print();
	b.Print();
	c.Print();

}