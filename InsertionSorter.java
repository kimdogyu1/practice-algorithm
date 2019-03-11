package sort1;

import java.util.Scanner;

/**
 * 삽입정렬
 * 
 * String 배열을 오름차순으로 정렬한다. insertionSort 메소드를 인스턴스 메소드로 구현한다.
 */
public class InsertionSorter {
	String[] x; // 상태변수(필드)

	public InsertionSorter(String[] string){
		x = string;
	}
	/**
	 * x[0], x[1], ..., x[i-1]가 이미 오름차순으로 정렬되어 있는 상태에서 x[i]를 그 앞의 올바른 위치에 삽입하여
	 * x[0], x[1], ..., x[i]가 오름차순으로 정렬되도록 한다. 전제조건: x[0], x[1], ..., x[i-1]는 이미
	 * 오름차순으로 정렬되어 있다. i는 배열 x의 크기보다 작다.
	 * 
	 * @param x
	 *            배열
	 * @param i
	 *            올바른 위치를 찾아줄 원소의 인덱스
	 */


	public  void insert(int i){
		String temp = x[i];

		int j = i-1;
		while (j >= 0 && temp.compareTo(x[j]) < 0)
		{
			x[j+1] = x[j];
			j--;
		}
		x[j+1]=temp;
	}

	/**
	 * 배열 x를 정렬한다.
	 * x[0], x[1], ..., x[n-1]을 정렬된 상태로 만든다.
	 * @param x 배열
	 * @param n 정렬할 원소의 개수
	 */
	public void insertionSort(int n){
		for (int i = 1; i < n; i++)
			insert(i);

	}

}
