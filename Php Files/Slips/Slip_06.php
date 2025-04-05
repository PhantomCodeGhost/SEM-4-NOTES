<!-- Q1. Write a PHP script to check whether accepted number is prime or not. -->

<html>
<body>
<form method="POST">
    <label for="num">Enter Any Number : </label><br>
    <input type="text" name="number" id="num" required>
    <input type="Submit" name="Submit" value="Submit">

</form>
<?php

if($_POST){

    $input = $_POST['number'];
    $count = 0;

    for($i = 1; $i<$input; $i++){
        if($input % $i == 0 ){
            $count+= 1;
        }
            
    }

    if($count < 2){
        echo "$input IS Prime!! .";
    }
    else{
        echo "$input IS NOT PRIME.";
        }
    }
?>

</body>
</html>


<!-- Q2. Write a menu driven program to perform the following operation on an associative array
    a) Reverse the order of each element’s key-value pair. [Hint: array_flip()]
    b) Traverse the element in an array in random order. [Hint: shuffle()]  -->

    <html><body>
<form method="POST">
    <label for="operation">Select An Operation : </label><br><br>
    <label for="flip">Flip</label>
    <input type="radio" id="flip" name="operation" value="flip" required><br>
    <label for="shuffle">Shuffle</label>
    <input type="radio" id="shuffle" name="operation" value="shuffle" required><br><br>
    <input type="Submit" name="Submit" value="Submit">
</form>
<?php
    $assoc_array = [
        "Name"=>"Parth",
        "Age"=>"21",
        "City"=>"Pune"
    ];

    if(isset($_POST['Submit'])){

        $operation = $_POST['operation'];

    echo "Original Array : <pre>";
    print_r($assoc_array);
    echo "</pre>";

    switch ($operation){

        case "flip" : 
            $flipped = array_flip($assoc_array);
            echo "Flipped Array : ";
            echo "<pre>";
            print_r($flipped);
            echo "</pre>";
        break;
        case "shuffle": 
            echo "<h2>Shuffled Array : </h2>";
            echo "<pre>";
            $keys = array_keys($assoc_array);
            shuffle($keys);
            foreach ($keys as $key){
                echo "$key: ".$assoc_array[$key]."<br>";    

            }
            echo "</pre>";
        break;
        default : 
            echo "Select Valid Operation .";
        break;
    }
    }
?>
</body>
</html>
 


