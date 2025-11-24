#include <stdio.h>
typedef struct complexNumber {
	int real;
	int img;
} complex;

complex add_complex(complex x, complex y);

int main() {
	complex a, b;

	a.real = 5;
	a.img = 6;

	b.real = 7;
	b.img = 5;

	complex result = add_complex(a, b);
	printf("Sum: %d + %di",result.real,result.img);

	return 0;
}

complex add_complex(complex x, complex y) {
	complex sum;
	sum.real = x.real + y.real;
	sum.img = x.img + y.img;

	return sum;

}