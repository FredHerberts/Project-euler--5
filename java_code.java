package com.codewithmost;
import java.util.*;

public class Main {

    public static void main(String[] args) {
        int LCM = 1;
        List<Integer> primelist = Arrays.asList(2,3,5,7,11,13,17,19);
        for (int x = 1; x < 9; x++) {
            int y = 1;
            while (20 > y*primelist.get(x-1)){
                y = y*primelist.get(x-1);
                LCM = LCM*primelist.get(x-1);
            }
        }
        System.out.println(LCM);
    }
}
