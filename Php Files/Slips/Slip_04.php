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


<!-- Q2. Write a PHP script for the following: Design a form to accept two strings. Compare the
two strings using both methods (= = operator & strcmp function). Append second string to
the first string. Accept the position from the user; from where the characters from the first
string are reversed. (Use radio buttons) -->

<html>
    <head></head>
    <body>
    <form method="POST">
    <label for="string1">Enter string 1 : </label><br>
    <input type="text" name="string1" id="string1" required><br><br>

    <label for="string2">Enter string 2 : </label><br>
    <input type="text" name="string2" id="string2" required><br><br>

    <label>Enter position to reverse the String From</label><br><br>
    <input type="radio" id="pos1" name="position" value="0" required>
    <label for="pos1">Positon 1</label><br>
    <input type="radio" id="pos2" name="position" value="1" required>
    <label for="pos2">Position 2</label><br> 
    <input type="radio" id="pos3" name="position" value="2" required>
    <label for="pos3">Position 3</label><br>

    <input type="Submit" name="Submit" value="Submit">
</form>
<?php

    if(isset($_POST['Submit'])){

        $string1 = $_POST['string1'];
        $string2 = $_POST['string2'];
        $position = $_POST['position'];

        $comparison_operator = ($string1 == $string2) ? "Strings are Equal. " : "Strings are NOT Equal";

        $comparison_strcmp = (strcmp($string1, $string2) == 0)  ? "Strings are Equal ." : "Strings are NOT Equal";

        $string_append = $string1.$string2;

        $reversed_string = substr($string1 , 0, $position).strrev(substr($string1, $position));

        echo "<strong>$string2 appended to $string1 : </strong>$string_append .<br>";
        echo "<strong>Comparison using = = operator : </strong>$comparison_operator<br>";
        echo "<strong>Comparison using strcmp function :  </strong>$comparison_strcmp.<br>";
        echo "<strong>Reversed string with position $position : </strong>$reversed_string<br>";

    }

?>
</body>
</html>



