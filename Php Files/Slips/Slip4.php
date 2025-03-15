<!-- Q1. Write a PHP script to declare three variables and print maximum among them-->

<?php
$a = 10;
$b = 20;
$c = 30;
$max = $a;
if($b > $max){
    $max = $b;
}
if($c > $max){
    $max = $c;
}

echo "The maximum number is : $max";
?>

