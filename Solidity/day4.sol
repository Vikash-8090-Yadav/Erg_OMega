// SPDX-License-Identifier: GPL-3.0

pragma solidity >=0.7.0 <0.9.0;

contract day4{
    function evaluate(int a , int b) pure public returns(int){
        int ans = (a+b)-(a-b);
        return ans;
    }
}