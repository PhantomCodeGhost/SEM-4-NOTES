


Q2 


import java.util.*;

interface Operation{
        float PI = 3.14f;

        float area();
        float volume();
}
class Circle implements Operation{
        int radius;

        Circle(int radius){
        this.radius = radius;
        }

        public float volume(){

                return  2 * PI * radius;

        }

        public float area(){
                return PI * radius * radius;
        }


}

public class Operations{
        public static void main(String[] args){
                Circle c1 = new Circle(5);

                System.out.println("Area : " + c1.area());
                System.out.println("Volume : " + c1.volume());

        }

}