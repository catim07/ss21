#include<stdio.h>
int main(){
	FILE *f;
	int count;
	char string[100];
	f=fopen("bt05.txt","w");
	if(f==NULL){
		printf("loi mo tep tin");
		return 1;
	}
	printf("moi ban nhap so dong: ");
	scanf("%d",&count);
	getchar();
	for(int i=0;i<count;i++){
		printf("moi ban nhap dong thu %d: ",i+1);
		fgets(string,sizeof(string),stdin);
		fputs(string,f);
	}
	fclose(f);
	f=fopen("bt05.txt","r");
	if(f==NULL){
		printf("loi mo tep tin");
		return 1;
	}
	printf("noi dung ban vua nhap la:\n");
	while(fgets(string,sizeof(string),f)!=NULL){
    printf("%s", string);
    fclose(f);
    }
    return 0;
}
