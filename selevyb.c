#include<stdio.h>
#include<stdlib.h>
int randommer(void){
	int r = 0+rand()%100;
	return r;
}
int main(int n,char* v[]){
int isit = 0;
switch(n){
	case 1:
	printf("One argument only!\n");
	break;
	case 2:
	isit = 1;
	break;
	default:
	printf("Too many arguments!\n");
}
if(isit == 1){
	int lenght = atoi(v[1]);
	int arr[lenght-1];
	for(int i = 0;i<lenght;i++){
		arr[i]=randommer();
	}
	//Algorithm 
	for(int i = 0;i<lenght-1;i++){
		int a = arr[i];
		int ind;
		for(int j = i;j<lenght;j++){
			if(a>arr[j]){
				a = arr[j];
				ind = j;
			}
			if(j==lenght-1){
				int tmp = arr[ind];
				arr[ind]=arr[i];
				arr[i]=tmp;
			}
		}
	}
	//checking
	for(int i = 0;i<lenght;i++){
		printf("%d\n", arr[i]);
	}
}

}