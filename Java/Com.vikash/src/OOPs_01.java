public class OOPs_01 {
    public static void main(String[] args) {
        person  p1 = new person();
       p1.get(12,"varun");
       p1.print();
       human h1 = new human();
       h1.get(12,"rahul");
       h1.print();
    }

}

class human extends person{
    human(){
        System.out.println("Hii , this is the human class");
    }
}

class person{
    String name;
    int age;


    void get(int age ,  String name ){
        this.age = age;
        this.name = name;
    }
    void print(){
        System.out.println(name);
        System.out.println(age);
    }
}