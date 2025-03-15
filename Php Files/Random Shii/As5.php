
SET A Q1
------------------------------
<!-- <?php
// Basic Data Base Connection 
$DB_HOST = "localhost";
$DB_USER = "root";
$DB_PASS = "";
$DB_DATABASE = "real_estate";

$conn = new mysqli($DB_HOST,$DB_USER,$DB_PASS,$DB_DATABASE);

if($conn->connect_error){
    die("Failed to connect".$conn->connect_error);
}
// End

if($_SERVER["REQUEST_METHOD"] == "POST"){

    $owner_name = $_POST['owner_name'];

    $sql = "SELECT pno, description, area FROM Property WHERE oname = '$owner_name' ";

    $result = $conn->query($sql);

    if($result->num_rows > 0){
        echo "<h2>Property Owned by $owner_name </h2>";
        while($row = $result-> fetch_assoc()){
            echo "Property No L ".$row["pno"]."<br>";
            echo "Property Description : ".$row["description"]."<br>";
            echo "Area : ".$row["area"]."<br><hr>";
        }

    }
}      

$conn->close();
?>


<html><body>
  <form method="Post">
    <h2>Owner Property Search</h2>

    Owner Name : <input type="text" name="owner_name" required>
    <input type="submit" value="Search">

</form>
    
</body>
</html>
 -->

 SET A Q2
 ------------------------------

 <!-- <?php
$DB_HOST ="localhost";
$DB_USER ="root";
$DB_PASS ="";
$DB_DATABASE ="Product";

$conn = new mysqli($DB_HOST, $DB_USER, $DB_PASS, $DB_DATABASE);

if($conn->connect_error){
    die("Failed To Connect".$conn->connect_error);
}

if(isset($_POST['order_date']) ){

    $order_date = $_POST['order_date'];
    
    $order_query = "SELECT * FROM Sales_order WHERE s_order_date < '$order_date'";

    $order_result = $conn->query($order_query);

    if($order_result->num_rows > 0){
        echo "<h2>All Orders Before $order_date</h2>"."<br>";
        while($row = $order_result->fetch_assoc()){
            echo "Order Number".$row["sonumber"]."<br>";
            echo "Order Date : ".$row["s_order_date"]."<br>";
            echo "Client No : ".$row["clientno"]."<br>"."<hr>";
        }
    }

}

$conn->close();
?>

<!html>
<head>
    <title>Document</title>
</head>
<body bgcolor="Beige">
    <h3>Select Date</h3>
    <form method="post">
        <input type="date" name = "order_date" required>
        <input type="Submit" value ="Search">
</form>
</body>
</html> -->
  

 SET A Q3
 ------------------------------








