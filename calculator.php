<!DOCTYPE html>
<html>
  <head>
    <title>Calculator</title>
    <link rel="stylesheet" type="text/css" href="question1.css">
  </head>


  <body>

    <h1>Sphere, Cylinder and Cone Calculator</h1>
    <p>Type in the fields and hit go.</p>

    <?php
       // define variables and set to empty values
       $arg1 = $arg2 = $arg3 = $arg4 = $output = $retc = "";

       if ($_SERVER["REQUEST_METHOD"] == "POST") {
         $arg1 = test_input($_POST["arg1"]);
         $arg2 = test_input($_POST["arg2"]);
	 $arg3 = test_input($_POST["arg3"]);
	 $arg4 = test_input($_POST["arg4"]);
         exec("/usr/lib/cgi-bin/sp1a/calculator " . $arg1 . " " . $arg2 . " " . $arg3 . " " . $arg4, $output, $retc); 
       }

       function test_input($data) {
         $data = trim($data);
         $data = stripslashes($data);
         $data = htmlspecialchars($data);
         return $data;
       }
    ?>

    <form method="post" action="<?php echo htmlspecialchars($_SERVER["PHP_SELF"]);?>">
      Radius: <input type="text" name="arg1"><br>
      Height: <input type="text" name="arg2"><br>
      Shape: <input type="text" name="arg3"><br>
      What to find (volume or surfacearea): <input type="text" name="arg4"><br>
      <br>
      <input type="submit" value="Go!">
    </form>

    <?php
       // only display if return code is numeric - i.e. exec has been called
       if (is_numeric($retc)) {
         echo "<h2>Program Output (volume):</h2>";
         foreach ($output as $line) {
           echo $line;
           echo "<br>";
         }
       
       }
    ?>
    
  </body>
</html>
