<?php
    $size = fgets(STDIN);
    
    for ( $i = 0, $val = 1; $i < $size; $i++, $val += $size) {
        echo implode(' ', range($val, $size + $val -1)) . PHP_EOL;
    }
?>