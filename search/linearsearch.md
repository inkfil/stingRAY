# Linear Search
```C++
#include<iostream>

void linearSearch(int* arr, int size, int key){
	for(int i=0; i<size; i++){
		if(arr[i]==key){
			std::cout<<"key "<<key<<" found at index "<<i<<"."<<std::endl;
		}
		else{
			std::cout<<"key "<<key<<" not found."<<std::endl;
		}
	}
}

int main(){
	int arr[]={1, 2, 3, 4, 5};
	linearSearch(arr, 5, 5);
	return 0;
}
```

# Binary Search
```C++
#include<iostream>

void binarySearch(int* arr, int size, int key){
	for(int i=0; i<size; i++){
		if(arr[i]==key){
			std::cout<<"key "<<key<<" found at index "<<i<<"."<<std::endl;
		}
		else{
			std::cout<<"key "<<key<<" not found."<<std::endl;
		}
	}
}

int main(){
	int arr[]={1, 2, 3, 4, 5};
	linearSearch(arr, 5, 5);
	return 0;
}
```
