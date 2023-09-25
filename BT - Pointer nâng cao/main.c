#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int t[100];
	int a, N, sum, x;
	int *p;
	
	while(a != 5) {
		printf("1. Nhap vao N so nguyen ");
		printf("\n2. Hien thi danh sach cac phan tu trong manng ");
		printf("\n3. Tinh tong cac phan tu trong mang ");
		printf("\n4. Sap xep cac phan tu trong mang theo thu tu tang dan ");
		printf("\n5. Thoat ");
		printf("\nVui long lua chon: ");
		scanf("%d", &a);
		
		switch(a) {
			case 1:
				*p = t;
				printf("\nSo so nguyen muon nhap: ");
				scanf("%d", &N);
				for(int i = 0; i < N; i++) {
					printf("Nhap t[%d]: ", i);
					scanf("%d", &t[i]);
				}
				printf("\n==========\n");
				
				break;
			case 2:
				for(int i = 0; i < N; i++) {
					printf("%d ", t[i]);
				}
				printf("\n==========\n");
				
				break;
			case 3:
				for(int i = 0; i < N; i++) {
					sum += t[i];
				}
				printf("%d", sum);
				printf("\n==========\n");
				
				break;
			case 4:
				for(int i = 0; i < N-1; i++) {
					for(int j = i+1; j < N; j++) {
						if(t[i] > t[j]) {
							x = t[i];
							t[i] = t[j];
							t[j] = x;
						}
					}
				}
				printf("\nMang sau khi sap xep: ");
				for(int i = 0; i < N; i++) {
					printf("%d ", t[i]);
				}
				printf("\n==========\n");
				
				break;
			case 5:
				printf("Thoat!!");
				
				break;
			default:
				printf("Khong hop le!! Vui long nhap lai: ");
				scanf("%d", &a);
		}
	}
	return 0;
}
