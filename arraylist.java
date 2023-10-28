import java.util.ArrayList;
public class arraylist {
    public static void main(String args[]){
        ArrayList <Integer> list =new ArrayList<>();
        list.add(1);
        list.add(2);
        list.add(3);
        list.add(2, 4);
        System.out.print("Arraylist is: ");
        System.out.println(list);
        System.out.print("Arraylist after deletion: ");
        list.remove(2);
        System.out.println(list);
    }
}
