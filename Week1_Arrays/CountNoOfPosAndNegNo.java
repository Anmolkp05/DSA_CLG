package DSA.Week1_Arrays;

import java.util.Scanner;

public class CountNoOfPosAndNegNo {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

       System.out.print("How many elements do you want? ");
        int n = sc.nextInt();

        int[] arr = new int[n];
        int positiveCount = 0;
        int negativeCount = 0;

        System.out.println("Enter the elements of the array:");
        for (int i = 0; i < n; i++) 
        {
            arr[i] = sc.nextInt();

           if (arr[i] > 0) 
            {
                positiveCount++;
            } 
            else if (arr[i] < 0) 
            {
                negativeCount++;
            }
        }

        System.out.println("Total positive numbers: " + positiveCount);
        System.out.println("Total negative numbers: " + negativeCount);
    }
}

