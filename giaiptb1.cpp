#include<stdio.h>
#include<conio.h>

int main(){

	float a, b;
	printf("\nNhap he so a: ");
	scanf_s("%f", &a);
	printf("\nNhap he so b: ");
	scanf_s("%f", &b);
	if (a == 0){      //nếu a==0 thì
		if (b == 0){    //nếu b==0 thì
			printf("\nPhuong trinh vo so nghiem");
		}
		else{       //nếu không thì (nếu b!=0 thì)
			printf("\nPhuong trinh vo nghiem");
		}
	}
	else{         //nếu không thì (nếu a!=0 thì)
		printf("\nPhuong trinh co nghiem x=%g", -b / a);
	}
	_getch();
}