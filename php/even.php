<?php
    $val = fgets(STDIN);
    $val -= $val % 2;
    
    echo implode(' ', range(0, $val, 2)) . PHP_EOL;
?>