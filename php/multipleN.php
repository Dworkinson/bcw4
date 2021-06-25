<?php
    $max = fgets(STDIN);
    $divider = fgets(STDIN);
    
    echo implode(' ', range(0, $max, $divider)) . PHP_EOL;
?>