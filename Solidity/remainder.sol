// SPDX-License-Identifier: GPL-3.0

pragma solidity >=0.7.0 <0.9.0;


contract remainder{
    function rem(int a) pure  public returns(int){
        int ans = a%3;
        return ans;
    }
}