// SPDX-License-Identifier: GPL-3.0

pragma solidity >=0.7.0 <0.9.0;



contract digitsum{
    int ans;
    constructor(){
        ans=0;
    }
    function digitsu(int a) public {
        while(a>0){
            ans = ans+(a%10);
            a = a/10;
        }

    }
    function clear() public{
        ans =0;
    }
    function get() view public returns(int){
        return ans;
    }
}