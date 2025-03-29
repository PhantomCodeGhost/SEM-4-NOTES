<!-- Q1. Write a PHP script to script to display time table of your class( use HTML table tags in
echo). -->

<html>
    <head><style>
        body{
            margin : 20px;
        }
        table{
            border-collapse: collapse;     
            
        }
        th,td{
            border: 2px solid;
            text-align :  center;
        }
        th{ 
            background :Grey;
        }

    </style></head>
    <body>
<?php
    $timetable = [
        ['time'=>'8-9am','Monday'=>'Cpp','Tuesday'=>'Maths','Wednesday'=>'Python','Thursday'=>'Cpp','Friday'=>'Evs'],
        ['time'=>'9-10am','Monday'=>'Cpp','Tuesday'=>'Maths','Wednesday'=>'Python','Thursday'=>'Cpp','Friday'=>'Evs'],
        ['time'=>'10-11am','Monday'=>'Evs','Tuesday'=>'Maths','Wednesday'=>'Python','Thursday'=>'Cpp','Friday'=>'Evs'],
        ['time'=>'11-12am','Monday'=>'Break','Tuesday'=>'Break','Wednesday'=>'Break','Thursday'=>'Break','Friday'=>'Break'],
        ['time'=>'12-1am','Monday'=>'Python','Tuesday'=>'Maths','Wednesday'=>'Python','Thursday'=>'Cpp','Friday'=>'Evs']
    ];
    echo "<h1>Time-Table</h1>";
    echo "<table>";
    echo "<tr>";
    echo "<th>Time</th>";
    echo "<th>Monday</th>";    
    echo "<th>Tuesday</th>";    
    echo "<th>Wednesday</th>";    
    echo "<th>Thursday</th>";    
    echo "<th>Friday</th>";    
    echo "</tr>";

    foreach ($timetable as $row) {
        echo "<tr>";
        echo "<td>".$row['time']."</td>";
        echo "<td>".$row['Monday']."</td>";
        echo "<td>".$row['Tuesday']."</td>";
        echo "<td>".$row['Wednesday']."</td>";
        echo "<td>".$row['Thursday']."</td>";
        echo "<td>".$row['Friday']."</td>";
        echo "</tr>";
    }
?>

</table>
    </body>
</html>



<!-- Q2. Write a PHP script for the following: Design a form to accept the details of 5 different
items, such as item code, item name, units sold, rate. Display the bill in the tabular format.
Use only 4 text boxes. (Hint : Use of explode function.) -->

<html>
<head>
    <title>Bill Calculation</title>
</head>
<body>

<h2>Enter Item Details</h2>
<form method="post">
    <label for="items">Enter Item Details (ItemCode, ItemName, UnitsSold, Rate) :</label><br>
    <textarea name="items" rows="5" cols="50" placeholder="Example: 101, Pen, 10, 5; 102, Pencil, 20, 3; 103, Notebook, 5, 50"></textarea><br><br>
    <input type="submit" value="Generate Bill">
</form>

<?php
if ($_SERVER['REQUEST_METHOD'] == 'POST') {
    // Get the item details from the textarea
    $input = isset($_POST['items']) ? trim($_POST['items']) : '';

    // Split the input into individual items using semicolon as the delimiter
    $items = explode(';', $input);
    
        echo "<h3>Bill</h3>";
        echo "<table border='1' cellpadding='5'>";
        echo "<tr><th>Item Code</th><th>Item Name</th><th>Units Sold</th><th>Rate</th><th>Total</th></tr>";

        // Loop through each item and display it
        foreach ($items as $item) {
            // Trim any extra spaces
            $item = trim($item);

            // Split the item details by commas
            $item_details = explode(",", $item);

            // Check if the item has 4 values (ItemCode, ItemName, UnitsSold, Rate)
            if (count($item_details) == 4) {
                // Assign values to variables
                list($item_code, $item_name, $units_sold, $rate) = $item_details;

                // Calculate the total for the item  b
                $total = $units_sold * $rate;

                // Display the item details in the table
                echo "<tr>";
                echo "<td>$item_code</td>";
                echo "<td>$item_name</td>";
                echo "<td>$units_sold</td>";
                echo "<td>$rate</td>";
                echo "<td>$total</td>";
                echo "</tr>";
            } else {
                // Handle invalid item details if needed
                echo "<tr><td colspan='5'>Invalid item details: $item. Please enter 4 comma-separated values.</td></tr>";
            }
        }

        echo "</table>";
}
?>
</body>
</html>

<!-- Example :

101, Pen, 10, 5; 102, Pencil, 20, 3; 103, Notebook, 5, 50; 104, Eraser, 15, 2; 105, Sharpener, 8, 10

-->