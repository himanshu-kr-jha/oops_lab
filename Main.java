class Employee {
    String name;
    int id;

    public Employee(String name, int id) {
        this.name = name;
        this.id = id;
    }

    void calculateSalary() {
        // Calculate and print the salary here
    }
}

class Faculty extends Employee {
    int teachingHours;

    public Faculty(String name, int id, int teachingHours) {
        super(name, id);
        this.teachingHours = teachingHours;
    }

    @Override
    void calculateSalary() {
        // Calculate faculty salary based on teaching hours
    }
}

class Staff extends Employee {
    int overtimeHours;

    public Staff(String name, int id, int overtimeHours) {
        super(name, id);
        this.overtimeHours = overtimeHours;
    }

    @Override
    void calculateSalary() {
        // Calculate staff salary based on overtime hours
    }

    public static void main(String[] args) {
        Faculty faculty = new Faculty("John", 101, 40);
        Staff staff = new Staff("Alice", 102, 10);

        faculty.calculateSalary();
        staff.calculateSalary();
    }
}
