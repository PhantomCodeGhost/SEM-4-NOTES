<!-- Q1. Write a PHP script to check whether accepted number is prime or not. -->

<html>
<body>
<form method="POST">
    <label for="num">Enter Any Number : </label><br>
    <input type="text" name="number" id="num" required>
    <input type="Submit" name="Submit" value="Submit">

</form>
<?php

if($_POST){

    $input = $_POST['number'];
    $count = 0;

    for($i = 1; $i<$input; $i++){
        if($input % $i == 0 ){
            $count+= 1;
        }
            
    }

    if($count < 2){
        echo "$input IS Prime!! .";
    }
    else{
        echo "$input IS NOT PRIME.";
        }
    }
?>

</body>
</html>


<!-- Q2. Write a menu driven program to perform the following operation on an associative array
    a) Reverse the order of each element’s key-value pair. [Hint: array_flip()]
    b) Traverse the element in an array in random order. [Hint: shuffle()]  -->

    <?php

$assoc_array = [
    "Name" => "Parth",
    "Age" => "21",
    "City" => "Pune"
];

echo "Menu:\n";
echo "a) Flip the key-value pairs\n";
echo "b) Shuffle the array traversal\n";
echo "Enter your choice (a/b): ";

$choice = trim(fgets(STDIN));

echo "Original Array:\n";
print_r($assoc_array);

switch ($choice) {
    case 'a':
        $flipped = array_flip($assoc_array);
        echo "Flipped Array:\n";
        print_r($flipped);
        break;

    case 'b':
        echo "Shuffled Traversal:\n";
        $keys = array_keys($assoc_array);
        shuffle($keys);
        foreach ($keys as $key) {
            echo "$key: " . $assoc_array[$key] . "\n";
        }
        break;

    default:
        echo "Invalid choice.\n";
}
?>
