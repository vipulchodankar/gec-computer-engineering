// WAP to demonstrate that the strings in string buffer class are mutable.

import java.lang.StringBuffer;

class MutableStringBuffer {
    public static void main(String args[]) {
        StringBuffer s = new StringBuffer("Hello World.");

        System.out.println("Initial Value: " + s);
        s.replace(0, s.length(), "Goodbye World :(");
        System.out.println("Mutated Value: " + s);
    }
}