// SPDX-License-Identifier: GPL-3.0

pragma solidity >=0.7.0 <0.9.0;

contract call{
    uint number = 10;

    function returnStateVariable() view  public returns(uint){
        return number;
    }
    function returnLocalVariable( )  pure  public returns(uint){
        uint x =20;
        return x;
        
    }
}