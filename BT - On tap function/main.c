#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void tinhtong(float a, float b) {
	float sum = a + b;
	printf("\nTong: %f", sum);
}

void tinhhieu(float a, float b) {
	float diff = a - b;
	printf("\nHieu: %f", diff);
}

void tinhtich(float a, float b) {
	float accu = a * b;
	printf("\nTich: %f", accu);
}

void tinhthuong(float a, float b) {
	float div = a / b;
	printf("\nThuong: %f", div);
}

int main(int argc, char *argv[]) {
	tinhtong(2.4, 3.1);
	tinhhieu(3.6, 1.2);
	tinhtich(3.1, 2.6);
	tinhthuong(3.5, 1.2);
	return 0;
}
