<!-- Q1. Write a PHP script to display source code of a webpage. -->
 
<?php

$url = "https:www.chatgpt.com/";

$sourceCode = file_get_contents($url);
echo htmlspecialchars($sourceCode);

?> 


<!-- Q2. Write a PHP script to following xml file.
Store data for 5 players and display data of players who have scored more than 100 runs -->

<?php

$xmlFile = 'http://localhost/Slips/Cricket.xml';

$xml = simplexml_load_file($xmlFile);

echo "<h2>Player with more than 100 Runs </h2>";
echo "<ul>";
    foreach ($xml->player as $player){
        $runs = (int)$player->runs;
        if($runs > 100){
            echo "<li>";
            echo "<strong>Player name :  </strong>$player->name, ";
            echo "<strong>Runs :  </strong>$player->runs, ";
            echo "<strong>Wickets : </strong>$player->wickets, ";
            echo "</li>";

        }
    }

echo "<ul>";

?>

<!-- Below Is Xml File 

<cricket>
<player>
    <name>Pandya</name>
    <runs>120</runs>
    <wickets>2</wickets>
</player>
<player>
    <name>Virat</name>
    <runs>111</runs>
    <wickets>0</wickets>
</player>
<player>
    <name>Kl Rahul</name>
    <runs>101</runs>
    <wickets>0</wickets>
</player>
<player>
    <name>Bumrah</name>
    <runs>20</runs>
    <wickets>4</wickets>
</player>
<player>
    <name>Kuldeep</name>
    <runs>10</runs>
    <wickets>3</wickets>
</player>
</cricket> -->
