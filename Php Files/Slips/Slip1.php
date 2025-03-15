<!-- Q1. Write a PHP script to get the PHP version and configuration information. -->

<?php 
    phpinfo();
?>

<!-- Q2. Write a menu driven program to perform the following operations on associative arrays:
a) Merge the given arrays.
b) Find the intersection of two arrays.
c) Find the union of two arrays.
d) Find set difference of two arrays. -->

<html>
<head>
</head>
<body>
    <h1>Array Operations</h1><br>
    <?php
        $arr1 = [
            "Mango"=> 2,
            "Grapes"=> 8,
            "Banana"=> 12,
            "Pear"=> 10,
        ];
        $arr2 = [
            "Grapes"=> 8,
            "Mango"=> 2,
            "Banana"=> 7,
            "Orange" => 10
        ];
    
        function mergeArray($arr1, $arr2){
            return array_merge($arr1, $arr2);
        }

        function intersection($arr1, $arr2){
            return array_intersect($arr1 , $arr2);
        }
        
        function union($arr1, $arr2){

            return $arr1 + $arr2;
        }

        function setDifference($arr1, $arr2){
            return array_diff($arr1, $arr2);
        }

        echo "<h3>Merge Arrays : </h3>>";
        print_r(mergeArray($arr1, $arr2));

        echo "<h3>Array Interesection : </h3>";
        print_r(intersection($arr1, $arr2));

        echo "<h3>Array Union : </h3>";
        print_r(union($arr1, $arr2));

        echo "<h3>Set Difference : </h3>";
        print_r(setDifference($arr1, $arr2));

    ?>
<body>
</html>
