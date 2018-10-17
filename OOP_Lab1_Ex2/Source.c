#include"Header.h"

void Print(Complex rezultat) {
	if (rezultat.real) {
		printf_s("%d", rezultat.real);
	}
	if (rezultat.img > 0) {
		printf_s("+ %di", rezultat.img);
	}
	else if (rezultat.img < 0) {
		printf_s("- %di", rezultat.img);
	}
	else
		printf_s("0");
}

void Write(Complex *rezultat) {
	printf_s("The real part is: ");
	scanf_s("%d", &(rezultat->real));
	printf_s("The imaginary part is: ");
	scanf_s("$d", &(rezultat->img));
}

void Difference(Complex FirstNumber, Complex SecondNumber, Complex *rezultat) {
	rezultat->real = FirstNumber.real - SecondNumber.real;
	rezultat->img = FirstNumber.img - SecondNumber.img;
}