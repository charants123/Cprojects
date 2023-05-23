package sortingcom;

public class BubbleSort {
	public static void main(String[] args) {
		int[]a= {2,1,3,22,9};
		int temp;
		for(int i=0; i<a.length; i++) {
			for(int j=0; j<a.length; j++) {
				if(a[i]>a[i+1]) {
					temp=a[i];
					a[i]=a[j];
					a[j]=temp;
				}
			}
			for(int i1=0; i1<a.length; i1++) {
				System.out.println(a[i1]);
			}
		}
	}

}
