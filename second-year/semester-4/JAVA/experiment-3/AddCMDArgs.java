/* Write a program that uses length property for displaying the number of command line arguments. 
If length is greater equal to 2, display the summation 
if input has numbers else display the concatenated result. */

class AddCMDArgs {
    public static void main (String args[])  {
        Boolean numCheck = false;
        if(args.length >= 2) {
            // Iterate over all command line arguments and return false if a non-number is encountered.
            for(int i = 0; i < args.length; i++) {
                numCheck = numberCheck(args[i]);
                if(!numCheck)
                    break;
            }

            // If even a single argument is not a number then add them.
            if (numCheck) {
                double sum = 0;
                for(int i = 0; i < args.length; i++)
                    sum += Double.parseDouble(args[i]);
                System.out.println("Sum of all the command line arguments = " + sum);
            }

            else if (!numCheck) {// If even a single argument is not a number then concatenate them.
                String newString = "";
                for(int i = 0; i < args.length; i++)
                    newString += args[i];
                System.out.println("Concatenated command line arguments string = " + newString);
            }
        } else if (args.length == 1) {
            System.out.println("Command Line argument passed: " + args[0]);
        } else {
            System.out.println("No Command Line arguments passed!");
        }
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