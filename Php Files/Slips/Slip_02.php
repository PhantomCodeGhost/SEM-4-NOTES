
<!-- Q1. Write a PHP script to display student information on web page.  -->

<html>
<head>
<title>Students </title>
</head>
<body>

    <h2>Student information</h2>

    <?php
    
    $name = "John";
    $age = 21;
    $grade  = "A";

    echo "<p>Name : $name</p>";
    echo "<p>Age : $age</p>";
    echo "<p>Grade : $grade</p>";
  
    ?>
</body>
</html>





<!-- Q2. Write a PHP program to define Interface shape which has two method as area() and
volume(). Define a constant PI. Create a class Cylinder implement this interface and
calculate area and Volume -->


<?php

interface Shape{

    const PI = 3.1416;

    public function area();
    public function volume();

}
class Cylinder implements Shape{
    private $radius;
    private $height;


    public function __construct($radius , $height){

        $this->radius = $radius;
        $this->height = $height;
    }

    public function area(){
        return 2 * self::PI * $this->radius * ($this->radius + $this->radius);
    }

    public function volume(){
        // PI r^2 * h
        return self::PI * pow($this->radius, 2) * $this->height; 
    }
}
$cylinder = new Cylinder(3, 5);
echo "Area of Cylinder : ".$cylinder->area()."<br>";
echo "Volume of Cylinder : ".$cylinder->volume();
?>


