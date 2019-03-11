package sort1;

import java.io.File;
import java.io.IOException;
import java.io.PrintWriter;
import java.util.Scanner;
public class Sorter {
	/**
	 * ��������
	 * String �迭�� ������������ �����Ѵ�.
	 * insertionSort �޼ҵ带 �ν��Ͻ� �޼ҵ�� �����Ѵ�.
	 */
	String[] x; //���º���(�ʵ�)
	public Sorter(String[] string){
		x = string;
	}
	/**
	 * x[0], x[1], ..., x[i-1]�� �̹� ������������ ���ĵǾ� �ִ� ���¿���
	 * x[i]�� �� ���� �ùٸ� ��ġ�� �����Ͽ�
	 * x[0], x[1], ..., x[i]�� ������������ ���ĵǵ��� �Ѵ�.
	 * ��������: x[0], x[1], ..., x[i-1]�� �̹� ������������ ���ĵǾ� �ִ�.
	 * 		  i�� �迭 x�� ũ�⺸�� �۴�.
	 * @param x �迭
	 * @param i �ùٸ� ��ġ�� ã���� ������ �ε���
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

	public static void main(String[] args) throws IOException{
		Scanner console = new Scanner(System.in);
		int i = 0;
		File inputFile = new File("cleaned.txt");
		Scanner in = new Scanner (inputFile);
		StringBuilder sb = new StringBuilder();
		String[] str;
		while(in.hasNextLine()) {
			String line = in.nextLine();
			if(!line.equals(" "))
				sb.append(line + " ");
		}

		// �����̸� string�� ���ڷ� �ش�.

		PrintWriter output = new PrintWriter("sorted.txt");

		str = sb.toString().split(" ");

		InsertionSorter sorter = new InsertionSorter(str);

		sorter.insertionSort(str.length);

		int count = 0;
		for (i = 0; i < str.length; i++){
			if(!str[i].equals("")) {
				System.out.println(str[i]);
				output.println(str[i]);
				count++;
			}
		}
		console.close();
	}
	
}
