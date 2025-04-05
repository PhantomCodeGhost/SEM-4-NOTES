<!-- Q1. Design a HTML form to accept a string. Write a php function to reverse a string -->

<html>
<body>
<form method="post">
<input type="text" name="string" placeholder="Enter a String" required>
<input type="Submit" name="Submit "value="Submit">
</form>
<?php

if(isset($_POST['string'])){
    $input = $_POST['string'];

    // $reversed = ;
    
    echo "<h2>Original Array</h2><br>";
    print_r($input);
    echo "<br>";
    echo "<h2>Reversed Array</h2>";
    print_r(strrev($input));

}

?>

</body>
</html>


<!-- Q2. Declare array. Reverse the order of elements, making the first element last and last
element first and similarly rearranging other array elements.[Hint : array_reverse()] -->

<?php

$fruits = ["Apple","Banana","StrawBerry","Orange","Mango"];

echo "Original Array : ";
print_r($fruits);

echo "Reversed Array : ";
print_r(array_reverse($fruits));

?>