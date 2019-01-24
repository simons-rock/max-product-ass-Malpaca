#include "max_product.h"

int max_pairwise_product_fast(int *arr, int size){
	int a = arr[0];
	int b = arr[1];
	for (int i = 2; i < size; i++){
		if (arr[i] > b || arr[i] > a){
			if (a > b) b = arr[i];
			else a = arr[i];
		}
	}
	return a*b;
}
