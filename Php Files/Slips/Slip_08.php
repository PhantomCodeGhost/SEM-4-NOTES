
<!-- Q1. Design a HTML form to accept a string. Write a PHP function that checks whether a
passed string is a palindrome or not?  -->
<html>
<body>
    <form method="POST">
    <input type="text" name = "str" placeholder = "Enter a String" required>
    <input type="Submit" name="Submit" value="Check">
</form>
<?php
    if(isset($_POST['str'])){
        $str = $_POST['str'];   

        function isPalindrome($str){
            $str = strtolower($str);  
            return $str == strrev($str);
        }

    if(isPalindrome($str) == $str){
        echo"The string $str is a Palindrome!";
    }
    else{
        echo"The string $str is not a Palindrome!";
    }

    }
?>
</body>
</html>



<!-- Q2. Declare a Multidimensional Array. Display specific element from a Multidimensional
array. Also delete given element from the Multidimensional array.(After each operation
display array content.) -->

<?php

$mul_array = array(
    array("Tony",45,"Gotham"),
    array("Mark",50,"LA"),
    array("Savlon",43,"Mumbai")
);
echo "<h2>Original Array : </h2><hr>";
print_r($mul_array);

echo "<br><h2>Specific Element from the mul array : </h2><hr>".$mul_array[2][0];

unset($mul_array[2][0]); // Delete Specific Value
$mul_array[2] = array_values($mul_array[2]); // Re-index sub-array
echo "<h2> Array after Deletion : </h2><hr>";
print_r($mul_array);

?>

