// SPDX-License-Identifier: GPL-3.0

pragma solidity >=0.7.0 <0.9.0;


contract nth{
    // uint [] public arr;
    // uint ans=0;
    // function call() public  {
    //     arr[0] =a;
    //     arr[1] =b;
    //     arr[2] =c;
       
    //     // ans=n;
        
    // }
    // function get() view public returns(uint){
    //     return arr[0]; 
    // }
        function nthTerm(
        uint256 n,
        uint256 a,
        uint256 b,
        uint256 c
    ) public pure returns (uint256) {
        uint256[100] memory arr;
        uint256 i;
        arr[1] = a;
        arr[2] = b;
        arr[3] = c;
        for (i = 4; i <= n; i++) {
            arr[i] = arr[i - 1] + arr[i - 2] + arr[i - 3];
        }
        return arr[n];
    }
}