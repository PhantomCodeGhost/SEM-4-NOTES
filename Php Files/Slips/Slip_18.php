<!-- Q2. Property (pno, description, area)
    a. Owner (oname, address, phone)
    b. An owner can have one or more properties, but a property belongs to exactly one
        owner.
    c. Accept owner name from the user. Write a PHP script which will display all
        properties which are own by that owner.  -->

<html>
<body>

    <form method="POST">
        <label for="oname"><h2>Enter Owner Name to Fetch : </h2></label>
        <input type="text" name="oname" id="oname" required>
        <input type="Submit" value="Fetch">
</form>
<?php
$DB_HOST = "localhost";
$DB_USER = "root";
$DB_PASS = "";
$DB_DATABASE = "real_estate";

$conn = new mysqli($DB_HOST,$DB_USER,$DB_PASS,$DB_DATABASE);

if($conn->connect_error){
    die("Failed to connect".$conn->connect_error);
}
if(isset($_POST['oname'])){
    $oname = $_POST['oname'];
    
    $owner_query = "SELECT * FROM Property WHERE oname = '$oname' ";

    $owner_result = $conn->query($owner_query);

    if($owner_result->num_rows > 0){
        echo "<h2>Properties Owned By $oname : </h2>"."<br>";
        while($row = $owner_result->fetch_assoc()){
            echo "Property No : ".$row['pno']."<br>";
            echo "Description : ".$row['description']."<br>";
            echo "Area : ".$row['area']."<br>";
            echo "Owner Name : ".$row['oname']."<br>";

        }
    }
}

$conn->close();
?>
</body>
</html>