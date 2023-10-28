import java.io.File;
import java.text.SimpleDateFormat;
import java.util.Date;

public class Files {
    public static void main(String[] args) {
        // Replace this with the path to the file you want to inspect
        File file = new File("Inheritance");

        if (file.exists()) {
            // Display file properties
            System.out.println("File Name: " + file.getName());
            System.out.println("Absolute Path: " + file.getAbsolutePath());
            System.out.println("File Size: " + file.length() + " bytes");

            // Display last modified date
            long lastModifiedTimestamp = file.lastModified();
            Date lastModifiedDate = new Date(lastModifiedTimestamp);
            SimpleDateFormat dateFormat = new SimpleDateFormat("dd/MM/yyyy HH:mm:ss");
            System.out.println("Last Modified: " + dateFormat.format(lastModifiedDate));
            
            System.out.println("Is Directory: " + file.isDirectory());
            System.out.println("Is File: " + file.isFile());
        } else {
            System.out.println("The specified file does not exist.");
        }
    }
}
