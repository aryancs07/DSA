#include<iostream>
using namespace std;

struct Pair{
	int min;
	int max;
	};
struct Pair getminMax(int arr[], int size){
	struct Pair minmax;
	if(size==1){
	minmax.min=arr[0];
	minmax.max=arr[0];
	return minmax;
	}
	if(arr[0]>arr[1]){
	minmax.max=arr[0];
	minmax.min=arr[1];
	return minmax;
	}
	else{
	minmax.min=arr[0];
	minmax.max=arr[1];
	return minmax;
	}
	for(int i=2;i<=size;i++){
		if(arr[i]>minmax.max)
			minmax.max=arr[i];
		else if(arr[i]<minmax.min)
			minmax.min=arr[i];
		
		return minmax;
		}
	}
	
int main(){
	int arr1[]={10,5,1,15,20};
	struct Pair minmax = getminMax(arr1,5);
	cout<<"Max element is "<< minmax.max <<endl;
	cout<<"Min element is "<< minmax.min <<endl;
	return 0;
		
	}
	
	
	
	
	
	
	
	
	
	
