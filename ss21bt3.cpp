#include<stdio.h>
int main(){
	FILE *f;
	char string[100];
	f=fopen("bt01.txt","a");
	if(f==NULL){
		printf("tep tin khong mo duoc");
		return 1;
	}
	printf("moi ban nhap chuoi thu nhat: ");
	fgets(string,sizeof(string),stdin);
	fputs(string,f);
	printf("moi ban nhap chuoi thu hai: ");
	fgets(string,sizeof(string),stdin);
	fputs(string,f);
	fclose(f);
	return 0;
}
