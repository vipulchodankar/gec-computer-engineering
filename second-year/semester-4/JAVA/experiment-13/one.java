import java.util.*;

class myObject {
	private int num;

	public myObject(int n) {
		this.num = n;
	}

	public int getNum() {
		return num;
	}

	public String toString() {
		return String.valueOf(num);
	}
}

class compareObject implements Comparator<myObject> {
	public int compare(myObject a, myObject b) {
		return a.getNum() - b.getNum();
	}
}

public class one {
	public static void main(String[] args) {
		List<myObject> col = new ArrayList<myObject>();
		col.add(new myObject(4));
		col.add(new myObject(2));
		col.add(new myObject(0));
		col.add(new myObject(6));
		col.add(new myObject(9));
		col.add(new myObject(1));

		System.out.println("\nThe Unsorted Collection is:");
		for (myObject i : col)
			System.out.print(i + " ");

		System.out.println("\n\nThe Sorted Collection is:");

		compareObject comparator = new compareObject();
		Collections.sort(col, comparator);
		for (myObject i : col)
			System.out.print(i + " ");

		System.out.println("\n\nSearching for '2'");
		int index = Collections.binarySearch(col, new myObject(2), comparator);
		System.out.println("Found at index " + index + " using binary search.");
	}
}
