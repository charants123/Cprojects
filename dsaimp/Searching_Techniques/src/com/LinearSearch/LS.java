package com.LinearSearch;

public class LS {
	public static void main(String[] args) {
		int[]a= {1,2,3,4,5,6};
		int key=99;
		boolean found=false;
		
		for(int i=0; i<a.length; i++) {
			if(a[i]==key) {
				found=true;
				System.out.println("key value found at"+i);
			}
		}
		if(!found) {
			System.out.println("ele not found");
		}
	}

}
