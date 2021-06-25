<?php
    $val = fgets(STDIN);
    
    echo implode(' ', range(0, $val, 5)) . PHP_EOL;
?>