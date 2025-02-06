#include<stdio.h>
int main(){
	FILE *f;
	char string[100];
	f=fopen("bt01.txt","w");
	if(f==NULL){
		printf("loi mo tep tin");
		return 1;
	}
	printf("moi ban nhap mot chuoi: ");
	fgets(string,sizeof(string),stdin);
	fputs(string,f);
	fclose(f);
	printf("da them tap tin thanh cong\n");
	f=fopen("bt01.txt","r");
	int c=fgetc(f);
	printf("ki tu dau tien trong file la: '%c'",c);
	return 0;
}
