<?php
    $size = fgets(STDIN);
    
    for ( $row = 0, $val = ($size * $size) - $size + 1; $row < $size; $row++, $val -= $size) {
        echo implode(' ', range($val, $size + $val - 1)) . PHP_EOL;
    }
?>