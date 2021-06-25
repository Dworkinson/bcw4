<?php
    function arrayPrint($filename, $array) {
        file_put_contents($filename, implode(' ', $array) . "\n") . PHP_EOL;
    }
?>
