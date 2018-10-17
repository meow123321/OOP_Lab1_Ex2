#include"Header.h"

int main(void) {
	Complex Number1, Number2, rezultat;

	printf_s("Enter the first number: ");
	Write(&Number1);
	printf_s("Enter the second number: ");
	Write(&Number2);

	Difference(Number1, Number2, &rezultat);

	Print(rezultat);

	_getch();
	return 0;
}