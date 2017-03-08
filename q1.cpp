/*
|	Hackerrank
|   https://www.hackerrank.com/challenges/linkedin-practice-array-left-rotation
*/

#include<iostream>
using namespace std;
int main(){
	int limit,shift,temp;
	
	cin>>limit;
	cin>>shift;
	
	int arr[limit];
	
//	for(int i=0;i<limit;i++){
//		cin>>arr[i];
//	}
	
//	for(int i=0;i<shift;i++){
//		temp=arr[0];
//		for(int j=0;j<limit;j++){
//			arr[j]=arr[j+1];
//		}
//		arr[limit-1]=temp;
//	}
//	
//	for(int j=0;j<limit;j++){
//		cout<<arr[j];
//	}

//approach without using extra space
	for(int i=0;i<limit;i++){
		cin>>temp;
		arr[(i+(limit-shift))%limit]=temp;
	}
	
	for(int i=0;i<limit;i++){
		cout<<arr[i];
	}
}

