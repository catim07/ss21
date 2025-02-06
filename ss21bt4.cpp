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
	f=fopen("bt01.txt","r");
	printf("dong dau tien trong tep la: %s",string);
	return 0;
}
