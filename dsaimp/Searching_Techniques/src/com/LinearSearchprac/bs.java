package com.LinearSearchprac;

public class bs {
	public static void main(String[] args) {
		int []a= {1,2,3,4,5,6,9};
		int key=1;
		boolean found=false;
		int low=0;
		int high=5;
		int mid=(low+high)/2;
		while(low<=high) {
		if(key<mid) {
			high=mid-1;
			System.out.println("ele found at");
			found=true;
			break;
		}
		else if(key>mid) {
			low=mid+1;
			System.out.println("ele found at");
			found=true;
			break;
		}
		else if(key==mid) {
			System.out.println("ele found at"+mid);
			found=true;
			break;
		}
	
	}
		if(!found) {
			System.out.println("element not found");
		}

}
}