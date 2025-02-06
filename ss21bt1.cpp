#include<stdio.h>
#include<string.h>
int main(){
	FILE *f;
	char string[100];
	f=fopen("bt01.txt ","w");
	if(f==NULL){
		printf("loi mo tap tin");
		return 1;
	}
	printf("moi ban nhap 1 chuoi: ");
	fgets(string,sizeof(string),stdin);
	fputs(string,f);
	fclose(f);
	printf("them tap tin thanh cong");
	return 0;
}
