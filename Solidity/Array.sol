// SPDX-License-Identifier: GPL-3.0

pragma solidity >=0.7.0 <0.9.0;


contract Array{

    // stattic array 
    uint[4] public  arr = [1,2,3];


    function len() view public returns (uint) {
        return arr.length;
    }
    // function push(uint ele)  public {
    //     arr.push(ele);
    // }

    // Dynamic array
    // uint[] public arr;
    // function push(uint element) public{
    //     arr.push(element);
    // }
    // function pop() public{
    //     arr.pop();
    // }

    // function len() view public returns (uint){
    //     return arr.length;
    // }

}