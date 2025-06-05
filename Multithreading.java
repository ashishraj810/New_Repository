public class Multithreading {
    public static void main(String[] args) {
        System.out.println("aasma sitaro saaaa...");
        Thread t1 = new Thread( ()->{
            System.out.println("hello");
        });
        Thread t2 = new Thread( ()->{
            System.out.println("namaste");
        });

        t1.start();
        t2.start();
    }
    
}
