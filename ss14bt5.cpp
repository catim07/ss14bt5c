#include<stdio.h>
int main(){
	char string[]="cuong le ca tim",count=1;
	int size=sizeof(string)/sizeof(string[0]),n;
	printf("moi ban dem so tu cua chu nay: %s\n",string);
	printf("moi ban dem so tu trong chuoi moi tu cach nhau dau cach: ");
	scanf("%d",&n);
	for(int i=0;i<size;i++){
		if(' '==string[i]){
			count+=1;
		}
	}
	if(count==n){
		printf("ban noi dung roi");
	}else{
		printf("ban noi sai roi");
	}
	return 0;
}
