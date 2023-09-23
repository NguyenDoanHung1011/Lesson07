#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//bai1
	char str1[100];
	int len;
	
	printf("Nhap chuoi: ");
	gets(str1);
	
	printf("\n");
	
	len = strlen(str1);
	printf("Do dai chuoi: %d", len);
	
	//bai2
	printf("\n==========");
	char s1[100], s2[100];
	
	printf("\nNhap chuoi s1: ");
	gets(s1);
	printf("Nhap chuoi s2: ");
	gets(s2);
	
	strcat(s1, s2);
	printf("\nChuoi s1 moi: %s", s1);
	
	printf("\n");
	
	len = 0;
	len = strlen(s1);
	printf("\nDo dai chuoi s1: %d", len);
	
	//bai3
	printf("\n==========");
	char str2[100];
	
	printf("\nNhap chuoi: ");
	gets(str2);
	
	len = 0;
	len = strlen(str2);
	
	for(int i = 0; i < len; i++) {
		printf("\n%c", str2[i]);
	}
	return 0;
}
