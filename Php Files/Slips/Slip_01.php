<!-- Q1. Write a PHP script to get the PHP version and configuration information. -->

<?php 
    phpinfo();
?>

<!-- Q2. Write a menu driven program to perform the following operations on associative arrays:
a) Merge the given arrays.
b) Find the intersection of two arrays.
c) Find the union of two arrays.
d) Find set difference of two arrays. -->

<?php
$arr1 = [
    "Mango" => 2,
    "Grapes" => 8,
    "Banana" => 12,
    "Pear" => 10,
];
$arr2 = [
    "Grapes" => 8,
    "Mango" => 2,
    "Banana" => 7,
    "Orange" => 10
];

function mergeArray($arr1, $arr2){
    return array_merge($arr1, $arr2);
}

function intersection($arr1, $arr2){
    return array_intersect($arr1, $arr2);
}

function union($arr1, $arr2){
    return $arr1 + $arr2;  // Preserves values from $arr1 if keys match
}

function setDifference($arr1, $arr2){
    return array_diff($arr1, $arr2);
}

echo "MENU - Associative Array Operations\n";
echo "a) Merge Arrays\n";
echo "b) Intersection\n";
echo "c) Union\n";
echo "d) Set Difference\n";
echo "Enter your choice (a/b/c/d): ";

$choice = trim(fgets(STDIN));
echo "\nResult:\n";

switch($choice){
    case 'a':
        print_r(mergeArray($arr1, $arr2));
        break;
    case 'b':
        print_r(intersection($arr1, $arr2));
        break;
    case 'c':
        print_r(union($arr1, $arr2));
        break;
    case 'd':
        print_r(setDifference($arr1, $arr2));
        break;
    default:
        echo "Invalid choice.\n";
}
?>
