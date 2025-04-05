<!-- Q1. Write a PHP script to check number 153 is Armstrong or not -->

<?php
function isArmstrong($number){
    $sum = 0;
    $temp = $number;
    $digits = strlen((string)$number);

    while ($temp != 0){
        $remainder = $temp % 10; // Extract the Last digit
        $sum += pow($remainder , $digits); // Square of last digit
        $temp = (int)($temp / 10); // Remove last digit
    }
    return $sum == $number;
}
$number = 153;
echo isArmstrong($number) ? "$number is Armstrong ." : "$number is not an Armstrong number.";
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


