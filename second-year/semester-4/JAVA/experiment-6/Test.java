import java.util.ArrayList;

class Test {
    public static void main(String args[]) {
        ArrayList<Integer> arr = new ArrayList<Integer>(10);
        
        //! add(Class obj) - adds an object 'obj' of type 'Class' to the ArrayList
        arr.add(5);
        arr.add(1);
        arr.add(2);
        arr.add(7);
        
        System.out.print("\nInitial ");
        display(arr);

        //! get(int index) - returns the object located at the given index in the ArrayList
        System.out.println("\nElement at index 0: " + arr.get(0) );
        
        //! size() - returns the size of the ArrayList
        System.out.println("\nSize of ArrayList: " + arr.size() );
        
        //! remove(int index) - removes the object located at the given index from the ArrayList
        arr.remove(1);
        System.out.println("\nAfter removing element at index 1");
        display(arr);

        
        //! set(int index, Class obj) - updates the object at the given index with Class obj
        arr.set(1, 6);
        System.out.println("\nAfter updating element at index 1");
        display(arr);

        //! contains(Class obj) - returns true if the ArrayList has the element obj
        System.out.println("\nDoes the ArrayList contain 7? -> " + arr.contains(7));

        //! clear() - clears the ArrayList
        arr.clear();
        System.out.println("\nAfter clearing ArrayList, ");
        display(arr);
    }

    public static void display(ArrayList<Integer> arr) {
        System.out.print("ArrayList: ");
        
        for(Integer a : arr)
            System.out.print(a + " ");

        System.out.println(" ");
    }
}

/*
 * add() remove() get() size() set()
 * 
 */