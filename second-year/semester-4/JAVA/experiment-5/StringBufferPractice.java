// WAP to practice string buffer class and it's methods.

import java.lang.StringBuffer;

class StringBufferPractice {
    public static void main(String args[]) {
        StringBuffer s = new StringBuffer("Hello");
        System.out.println("Initial value: " + s);
        
        s.append("World");
        System.out.println("Value after appending \"World\": " + s);
        
        s.replace(0, 5, "Goodbye");
        System.out.println("Value after replacing \"Hello\": " + s);
        
        System.out.println("Index  of \"World\": " + s.indexOf("World"));
        
        System.out.println("Length of \"" + s + "\" = " + s.length());

        s.reverse();
        System.out.println("Value after reversing: " + s);
    }
}