<!-- Q1. Write a PHP script to print following floyd’s triangle. -->
<?php
$num = 4;
$count = 1;

for($i = 0; $i<=$num; $i++){
    for($j = 0; $j<$i; $j++){
        echo $count." ";
        $count+= 1;
       
    }
    echo"<br>";    
}
?>


<!-- 
Q2. Sales_order (sonumber, s_order_date)
    a. Client (clientno, name, address)
    b. A client can give one or more sales_orders, but a sales_order belongs to exactly
    one client.
    c. Accept sales order date from the user. Write a PHP script which will display all
    orders which are placed before that date.  -->
    <html>
<body>
    <form method="POST">
        <input type="date" name="order_date">
        <input type="Submit" name="Submit" value="Fetch">
</form>
<?php

$DB_HOST = "localhost";
$DB_USER =  "root";
$DB_PASS = "";
$DB_DATABASE = "Product";

$conn = new mysqli($DB_HOST, $DB_USER, $DB_PASS, $DB_DATABASE);

if($conn->connect_error){
    die("Failed to connect".$conn->connect_error);
}

if(isset($_POST['order_date'])){

$order_date = $_POST['order_date'];

// $order_query = "SELECT * FROM Sales_order WHERE s_order_date < '$order_date'";
$order_query = "SELECT so.sonumber,so.s_order_date,c.name FROM Sales_order so JOIN Client c ON so.cno = c.clientno WHERE so.s_order_date < '$order_date'";

$order_result = $conn->query($order_query);

if($order_result->num_rows > 0){
    echo "<h2>Orders Before Date $order_date : </h2>"."<br>";
    while($row = $order_result->fetch_assoc()){
        echo "Order No : ".$row["sonumber"]."<br>";
        echo "Order Date : ".$row["s_order_date"]."<br>";
        echo "Client Name : ".$row["name"]."<br><br>";
    }
}
}
$conn->close();
?>
</body>