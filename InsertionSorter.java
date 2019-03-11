package sort1;

import java.util.Scanner;

/**
 * ��������
 * 
 * String �迭�� ������������ �����Ѵ�. insertionSort �޼ҵ带 �ν��Ͻ� �޼ҵ�� �����Ѵ�.
 */
public class InsertionSorter {
	String[] x; // ���º���(�ʵ�)

	public InsertionSorter(String[] string){
		x = string;
	}
	/**
	 * x[0], x[1], ..., x[i-1]�� �̹� ������������ ���ĵǾ� �ִ� ���¿��� x[i]�� �� ���� �ùٸ� ��ġ�� �����Ͽ�
	 * x[0], x[1], ..., x[i]�� ������������ ���ĵǵ��� �Ѵ�. ��������: x[0], x[1], ..., x[i-1]�� �̹�
	 * ������������ ���ĵǾ� �ִ�. i�� �迭 x�� ũ�⺸�� �۴�.
	 * 
	 * @param x
	 *            �迭
	 * @param i
	 *            �ùٸ� ��ġ�� ã���� ������ �ε���
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
	 * �迭 x�� �����Ѵ�.
	 * x[0], x[1], ..., x[n-1]�� ���ĵ� ���·� �����.
	 * @param x �迭
	 * @param n ������ ������ ����
	 */
	public void insertionSort(int n){
		for (int i = 1; i < n; i++)
			insert(i);

	}

}
