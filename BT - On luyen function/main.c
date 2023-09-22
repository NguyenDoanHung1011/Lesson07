#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void showInfor(char name[30], int age, char address[100], char email[30], int sdt) {
	printf("\nTen: ");
	puts(name);
	
	printf("\nTuoi: %d", age);
	printf("\n");
	
	printf("\nDia chi: ");
	puts(address);
	
	printf("\nEmail: ");
	puts(email);
	
	printf("\nSDT: %d", sdt);
	printf("\n");
}

void showMessage(int msg) {
	printf("Hello msg %d", msg);
}

int giaithua(int n) {
	int factorial = 1;
	for(int i = 1; i <= n; i++) {
		factorial = factorial * i;
	}
	printf("\nGiai thua = %d", factorial);
	return factorial;
}

int tong(int m) {
	int tong;
	for(int i = 0; i <= m; i++) {
		tong += i;
	}
	printf("\nTong: %d", tong);
	return tong;
}

int main(int argc, char *argv[]) {
	//bai1
	char name[30], address[100], email[30];
	int age, sdt;
	printf("Nhap ten: ");
	gets(name);
	
	printf("\nNhap tuoi: ");
	scanf("%d", &age);
	fflush(stdin);
	
	printf("\nNhap dia chi: ");
	gets(address);
	
	printf("\nNhap email: ");
	gets(email);
	
	printf("\nNhap SDT: ");
	scanf("%d", &sdt);
	fflush(stdin);
	
	showInfor(name, age, address, email, sdt);
	
	//bai2
	printf("\n==========");
	int msg;
	for(int i = 0; i < 3; i++) {
		printf("\nNhap so msg: ");
		scanf("%d", &msg);
	
		printf("\n");
		showMessage(msg);
		printf("\n");
	}
	
	//bai3
	printf("\n==========");
	int n;
	printf("\nNhap n: ");
	scanf("%d", &n);
	
	giaithua(n);
	
	printf("\n");	
	int m;
	printf("\nNhap m: ");
	scanf("%d", &m);
	
	tong(m);
	
	int s1, s2;
	printf("\n==========");
	s1 = giaithua(5);
	printf("\n")
	s2 = tong(10);
	printf("\n");
	
	if(s1 > s2) {
		printf("\nGiai thua cua 5 lon hon tong 1-10");	
	} else if(s1 < s2) {
		printf("\nGiai thua cua 5 nho hon tong 1-10");	
	} else {
		printf("\nGiai thua cua 5 bang tong 1-10");	
	}
	return 0;
}
