// SPDX-License-Identifier: GPL-3.0
pragma solidity >=0.7.0 <0.9.0;

contract identity{
    uint Age;
    string Name;
    constructor(){
        Name = "Vikash";
        Age=28;
    } 
    function call_Name() view public returns (string memory){
        return Name;
    }
    function call_Age() view public returns(uint){
        return Age;
    } 

    function setage() public {
        Age = Age+1;
    }

}