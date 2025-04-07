<!-- Q1. Write a PHP script to check number 153 is Armstrong or not -->

<?php

$num = 153;
$sum = pow(1,2)+pow(5,3)+pow(3,3);
if($sum == $num){
    echo "$num is Armstrong!!";
}else{
    echo "$num is Not Armstrong!!";

}


?>



<!-- Q2. Write a menu driven program to perform the following operations on an associative array:
    a) Display the elements of an array along with the keys.
    b) Display the size of an array
 -->

 <?php
    $assoc_array = [
    "name"=>"Parth",
    "age"=>"21",
    "city"=>"Pune"
    ];
    
    function displayArray($array){
        foreach($array as $key=>$value){
            echo "$key : $value\n";
        }
    
    }
    function displaySize($array){
        return count($array);

    }
    while(true){
        echo "\nMenu\n";
        echo "1. Display Array the elements Array (key=>value).\n";
        echo "2. Display the size of an array\n";
        echo "3. Exit.\n";
        echo "Enter your choice : ";

        $choice = trim(fgets(STDIN));

        switch ($choice){

        case 1:
            echo "Array Elements : \n";
            displayArray($assoc_array);
        break;
        case 2:
            echo "Size of Array : ".displaySize($assoc_array);    
        break;
        
        case 3:
            echo "Exiting ........";
            exit(0);
        default :
            echo "Invalid Choice . Please try again";
        break;
        }  
    }
?>


