// Define the first interface
interface InterfaceA {
    void methodA();
}

// Define the second interface
interface InterfaceB {
    void methodB();
}

// Implement both interfaces in a class using 'extends'
class MyClass implements InterfaceA, InterfaceB {
    @Override
    public void methodA() {
        System.out.println("Method A from InterfaceA");
    }

    @Override
    public void methodB() {
        System.out.println("Method B from InterfaceB");
    }
}

public class multipleInheritance {
    public static void main(String[] args) {
        MyClass myObject = new MyClass();
        myObject.methodA();
        myObject.methodB();
    }
}
