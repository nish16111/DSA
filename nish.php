<?php
    $name = $_POST['name'];
    $salary = $_POST['salary'];
    $des = $_POST['des'];

    $con = new mysqli('localhost', 'root', '', 'emp_database');

    $sql = "INSERT INTO `emp_table` (`emp_name`, `emp_salary`, `emp_des` ) 
    VALUES ('$name', '$salary', '$des');";

    if($con->query($sql) === TRUE){
        echo "inserted";
    }

    else{
        echo "error";
    }
?>