package com.LinearSearch;

public class BinarySearch {
	public static void main(String[] args) {
		int[]a= {1,2,4, 5 ,6,7,8};
		int key=2;
		int low=0,high=7;
		int mid=(low+high)/2;
		boolean found=false;
		while(low<=high) {
			
			if(key<a[mid]) {
					high=mid-1;
					System.out.println("key value found");
					found=true;
					break;
			}
			else if(key>a[mid]) {
				low=mid+1;
				System.out.println("key value found at");
				found=true;
				break;
			}
			else if(key==a[mid]) {

				System.out.println("key found at");
				found=true;
				break;
			}

		}
		if(!found) {
			System.out.println("element not found");
		}

	}}
