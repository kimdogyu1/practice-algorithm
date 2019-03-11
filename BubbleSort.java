package sort1;
import java.io.*;
import java.util.ArrayList;

public class BubbleSort {
   public static int compare(String ar1, String ar2) {
      int count = 0;
      int i = -1;
      while (i < ar1.length()||i<ar2.length()) {
         if((i>=ar1.length()-1)||(i>=ar2.length()-1)) {
            break;
         }
         ++i;
         if (ar1.charAt(i) > ar2.charAt(i)) {
            count++;
            break;
         } else if (ar1.charAt(i) == ar2.charAt(i)) {
            continue;
         } else {
            count--;
            break;
         }
         
      }
      return count;
   }

   public static void main(String[] args) {
      try {
         File file = new File("C:\\201514852-prac\\sort1\\data.txt");
         FileReader fr = new FileReader(file);
         PrintWriter write = new PrintWriter(new FileWriter("C:\\201514852-prac\\sort1\\bubble.txt"));
         BufferedReader bufr = new BufferedReader(fr);
         String line = "";
         String temp;
         int i, j, k;
         String[] array = new String[84];
         int index = 0;

         while ((line = bufr.readLine()) != null) {
            array[index] = line;
            index++;
         }
         for (i = array.length - 1; i > 0; i--) {
            for (j = 0; j < i - 1; j++) {

               if (compare(array[j], array[j + 1]) >= 0) {
                  temp = array[j];
                  array[j] = array[j + 1];
                  array[j + 1] = temp;

               }
            }
         }

         for (i = 0; i < array.length - 1; i++) {
            System.out.println(array[i]);
         }
         for (i = 0; i < array.length - 1; i++) {
            write.write(array[i] + "\n");

         }
         write.close();
         bufr.close();
      } catch (FileNotFoundException e) {

      } catch (IOException e) {
         System.out.println(e);
      }
   }
}