class Example {
    static int x;
    Example () {
        x=10;
    }

    void increment() {
        ++x;
    }
}

class MainClass {
    public static void main(String args[]) {
        Example obj1 = new Example();
        Example obj2 = new Example();
        obj1.x = 0;
        obj1.increment();
        obj2.increment();

        System.out.println(obj1.x + obj2.x);
    }
}