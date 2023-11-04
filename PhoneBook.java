import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;
import java.util.Hashtable;

public class PhoneBook {
    public static void main(String[] args) {
        Hashtable<String, String> phoneBook = new Hashtable<>();

        try (BufferedReader reader = new BufferedReader(new FileReader("phonebook.txt"))) {
            String line;
            while ((line = reader.readLine()) != null) {
                String[] parts = line.split(",");
                if (parts.length == 2) {
                    String name = parts[0].trim();
                    String phoneNumber = parts[1].trim();
                    phoneBook.put(name, phoneNumber);
                }
            }
        } catch (IOException e) {
            e.printStackTrace();
        }

        // Example: Get a phone number by name
        String searchName = "Ram";
        if (phoneBook.containsKey(searchName)) {
            String phoneNumber = phoneBook.get(searchName);
            System.out.println("Phone number for " + searchName + ": " + phoneNumber);
        } else {
            System.out.println("Phone number not found for " + searchName);
        }
    }
}
