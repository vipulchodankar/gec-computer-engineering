/* Read a string containing a word and 2 numbers, the word is one of the following: add, sub, mul, div. 
   The program outputs the sum of the given numbers if the word is add. Similarly, for the other words. 
   Use CMD args. */

class CMDOperations {
    public static void main(String args[]) {
        if(numberCheck(args[1]) && numberCheck(args[2])){
            double num1 = Double.parseDouble(args[1]);
            double num2 = Double.parseDouble(args[2]);

            switch(args[0].toLowerCase().substring(0, 3)) {
                case "add": 
                    System.out.println((num1+num2)); break;
                case "sub": 
                    System.out.println((num1-num2)); break;
                case "mul": 
                    System.out.println((num1*num2)); break;
                case "div": 
                    System.out.println((num1/num2)); break;
                default: 
                    System.out.println("Please enter a valid operation i.e. add, sub, mul, div"); break;
            }
        }
        else 
            System.out.println("Please enter Valid Numbers.");
        
    }

    public static Boolean numberCheck(String str) {
        try {  
            Double.parseDouble(str);  
            return true; // Return true if number can be parsed to double
        } catch(NumberFormatException e){  
            return false;  // Return true if number can't be parsed to double; is a string.
        }  
    }
}