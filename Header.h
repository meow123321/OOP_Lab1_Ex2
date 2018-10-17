#pragma once
#include<stdio.h>
#include<stdlib.h>

typedef struct Complex {
	int real;
	int img;
}Complex;

void Print(Complex rezultat);
void Write(Complex *rezultat);
void Difference(Complex FirstNumber, Complex SecondNumber, Complex *rezultat);