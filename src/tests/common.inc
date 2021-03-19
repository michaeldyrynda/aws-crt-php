<?php

use AWS\CRT\CRT as CRT;

abstract class CrtTestCase extends PHPUnit_Framework_TestCase {
    // Ensure that after every test there are no errors in the CRT itself
    protected function assertPostConditions() {
        if (CRT::last_error()) {
            $this->fail("Test left an error on the stack: " . CRT::error_name(CRT::last_error()));
        }
    }
}