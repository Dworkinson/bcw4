<?php
    $dividend = fgets(STDIN);
    $divisor = fgets(STDIN);
    
    echo $dividend + abs($dividend % $divisor) . PHP_EOL;
?>