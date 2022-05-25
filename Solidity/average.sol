// SPDX-License-Identifier: GPL-3.0

pragma solidity >=0.7.0 <0.9.0;

contract avg{
    function average(int a,int b,int c) pure public returns(int){
        int ans = (a+b+c)/3;
        return ans;

    }
}