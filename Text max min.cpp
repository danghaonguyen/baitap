#include<stdio.h>

int Lon_nhat( int B[] , int n);
int Nho_nhat( int B[] , int n);

int main (){
	int B[50];
	int n;
	printf("Nhap cac phan tu trong mang B : n = ");
	scanf("%d", &n);
	
	for(int i = 0 ; i < n ; i++){
		printf("Nhap B[%d] = ", i , B[i]);
		scanf("%d", &B[i]);
	}
	
	printf("\nMax = %d", Lon_nhat( B , n));
	printf("\nMin = %d", Nho_nhat( B , n));
	
	
	
	return 0;
}
int Lon_nhat( int B[] , int n){
	int max = B[0];
	for(int i = 1; i < n ; i++){
		if( max < B[i]){
			max = B[i];
		}
		
	}
	return max;
}
int Nho_nhat( int B[] , int n ){
	int min = B[0];
	for(int i = 1 ; i < n ; i++){		
		if( min > B[i]){
			min = B[i];
		}
		
	}
	return min;
}
