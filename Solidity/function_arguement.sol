// SPDX-License-Identifier: GPL-3.0

pragma solidity >=0.7.0 <0.9.0;

contract functi{
    uint num;
    function set(uint _num) public {
        num = _num;
    }
    function get() view public returns (uint){
        return num;
    }
}