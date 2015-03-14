import java.io.*;
import java.io.BufferedReader;
import java.io.FileInputStream;
import java.io.FileReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.lang.Integer;
import java.lang.System;
import java.util.*;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collection;
import java.util.Collections;
import java.util.Scanner;

/**
 * author:mchenyuxiang
 * create time:2015-3-14
 */
public class binarySearch{

    public static int binarySearch(int key,int[] sortArray){
        int low = 0;
        int high = sortArray.length - 1;
        while(low <= high){
            int middle = low + (high - low) / 2;
            if(key < sortArray[middle])
                high = middle - 1;
            else if(key > sortArray[middle])
                low = middle + 1;
            else
                return middle;
        }
        return -1;
    }

    public static void main(String[] args){
        try{
            FileReader f = new FileReader("white_list");
            int[] whiteList = new int[11];
            whiteList = ReadFile(f,whiteList);
            System.out.println("Please input the number:");
            Scanner sc = new Scanner(System.in);
            int search = sc.nextInt();
            if(binarySearch(search,whiteList) != -1){
                System.out.println("in white_list");
            }else {
                System.out.println("not in white_list");
            }
        }
        catch (IOException e){
            e.printStackTrace();
        }
    }

    public static int[] ReadFile(FileReader f,int[] whiteList){
        Scanner sc = new Scanner(f);
        int i = 0;
        while(sc.hasNext()){
            whiteList[i] = sc.nextInt();
            i++;
        }
        Arrays.sort(whiteList);
        return whiteList;
    }
}