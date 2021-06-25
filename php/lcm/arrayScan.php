<?php
    $array = array();

    $array["fruit"] = "apple";
    $array["vegetable"] = "tomato";
    $array["berry"] = "blackberry";

    $keys = array_keys($array);
    $values = array_values($array);

    for ( $i = 0; $i < count($array); $i++ ) {
        echo $keys[$i] . " = " . $values[$i] . PHP_EOL;
    }
?>