// SPDX-License-Identifier: GPL-3.0

pragma solidity >=0.7.0 <0.9.0;

contract table{

    // function printtable(unit i) public returns(uint){

    //     return 

    // }
    string public s = "hello";
    uint[] public arr;
    function getnumber(uint x) public{
        for(uint i =1;i<=10;++i){
            arr.push(x*i);
        }
    }
    
}