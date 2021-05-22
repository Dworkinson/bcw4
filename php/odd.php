<?php
    $val = fgets(STDIN);

    echo implode(' ', range(1, $val, 2)) . PHP_EOL;
?>