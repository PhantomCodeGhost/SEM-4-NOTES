<!-- 
    SET B Q3

<form method = "post">
    Enter a Number : <input type="text" name="input"><br>
    <input type="Submit" name="Submit">

</form>
<?php
if($_POST){

    $input = $_POST['input'];
}

$count = 0;
for($i= 1; $i<=$input; $i++){
    if($input % $i == 0){
        $count += 1;
        
    }
}
    if($count == 2){
        echo $input."Is a Prime Number.";
    }else{
        echo $input."Is not a Prime Number.";
        }

?> -->


<!--  SET C Q2

<?php

$url = "https:www.chatgpt.com/";

$sourceCode = file_get_contents($url);
echo htmlspecialchars($sourceCode);

?> -->


<!-- SET C Q3

<?php

$number = 69;

$result = ($number > 30) ? "Greater than 30" : (($number > 20) ? "Greater than 20" : (($number > 10) ? "Greater than 10" : "10 or less "));

echo $result;

?> -->

<!-- # Example Ternary Operator 

<?php
$age = 25; // You can change this value to test with different ages

$category = ($age >= 65) ? "Senior" :
           (($age >= 18) ? "Adult" :
           (($age >= 13) ? "Teenager" :
           "Child"));

echo "You are a: " . $category;
?>

-->


<!-- 

Used (...)Variable-Length Arguments (Variadic Functions)
<?php
$sum = function(...$numbers) {
    return array_sum($numbers); // Calculate the sum of the numbers
};

echo $sum(1, 2, 3)."<br>"; // Outputs: 6
echo $sum(1, 2, 3, 4);     // Outputs: 10
?> 
-->


