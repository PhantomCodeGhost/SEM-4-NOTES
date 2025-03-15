<!-- 

 <?php

function Factorial($num = 3){
    $fact = 1;
    if($num <= 1){
        return 1;
    }
    for($i = 1; $i<=$num; $i++){
        $fact *= $i;
    }
    return $fact;

} 


if($_POST){
    $num = $_POST['num'];
    $result = "The factorial of ".$num." is : ".Factorial($num);
}
?>
<html>
    <head>
    <body>
    <form method="post">
    <input type = "Number" name = "num" min="0" placeholder="Enter a number" required>
    <button type = "Submit">Calculate</button>
</form>
    <?php echo $result; ?>

</body>
</head>
</html>     -->


<!-- 
<?php

function reverseaString($str){

    return strrev($str);
    
}

    $result = "";
    if($_POST){
        $input = $_POST['str'];
        $result = "Reversed : ".reverseaString($input);
    }
    ?>
<html>
    <head>
        <body>
        <form method="post">
        <input type="text" name="str" placeholder"Enter a String" required>
        <button type="Submit">Revrse</button>
        <?php
        echo $result;
        ?>
</form> 
</body>
</head>
</html> -->

<!-- 


<?php

function isPalindrome($str){
    $str = strtolower($str);  // Convert to lowercase
    return $str == strrev($str);  // Check if the string is the same when reversed
}

$result = "";
if (isset($_POST['str'])) {
    // Sanitize user input to avoid XSS attacks
    $input = htmlspecialchars($_POST['str']);
    $result = isPalindrome($input);
    $showResult = true;// Set flag to true when form is submitted
}

?>

<html>
<body>
    <form method="Post">
        <input type="text" name="str" placeholder="Enter a String" required>
        <button>Check</button>
    </form>
    
    <?php 
    // Only show result after form submission
    if ( $showResult) {
        if ($result) {
            echo "<p>The string is a Palindrome.</p>";
        } else {
            echo "<p>The string is not a Palindrome.</p>";
        }
    }
    ?>
</body>
</html>
 -->


<!-- 
 <html>
    <body>
        <form method="Post">
            <input type="number" name="num" min= "0" placeholder="Enter a Number" required>
            <button type="Submit">Convert</button>


<?php
if(isset(($_POST['num']))){

    $number = $_POST['num'];
   

function numberToWords($num){
    $words = [
        "Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"
    ];

    $result = array_map(function ($digit) use ($words){

        return $words[$digit];
    }, str_split($num));

    return implode(" ",$result);
    
}
    if(is_numeric($number)){

        echo "<h3>Number in Words : </h3>";
        echo "<p>".numberToWords($number)."</p>";
    }else{

        echo "<p>Please Enter valid number .</p>";
    }


}
?>
</body>
</html> -->




