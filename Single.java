public class Single {

    public static void main(String[] args) {
        //Single singleInstance = new Single();  // Create an instance of the outer class
        Gravitational G = new Gravitational();  // Create an instance of the inner class
        G.Force();
        G.Gravity();
    }

    
}
class FundamentalForce {
        void Force() {
            System.out.println("There are four fundamental forces.");
        }
    }

class Gravitational extends FundamentalForce {
        void Gravity() {
            System.out.println("Fruits fall to the ground due to gravitational Force.");
        }
}