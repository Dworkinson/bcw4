<?php
    $val = fgets(STDIN);
    
    echo implode(' ', range(0, $val, 3)) . PHP_EOL;
?>