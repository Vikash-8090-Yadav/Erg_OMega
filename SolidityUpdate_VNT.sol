
// SPDX-License-Identifier: MIT
pragma solidity ^0.8.0;
contract Bank {
    address payable public admin;
    mapping(address => uint) public balances;
    constructor() public {
        admin = payable(msg.sender);
    }

    function deposit() public payable {
        require(msg.value > 0, "Cannot deposit 0 or negative value.");
        uint depositAmount = msg.value;
        uint adminCommission = depositAmount * 10 / 100;
        require(adminCommission > 0);
        admin.transfer(adminCommission);
        balances[msg.sender] += depositAmount - adminCommission;
    }

    function withdraw(uint amount) public {
        require(balances[msg.sender] >= amount, "Insufficient funds.");
        uint withdrawalAmount = amount;
        uint adminCommission = withdrawalAmount * 10 / 100;
        require(adminCommission > 0);
        admin.transfer(adminCommission);
        payable(msg.sender).transfer(withdrawalAmount - adminCommission);
        balances[msg.sender] -= amount;
    }

    function contractAddress() public view returns (uint){
        return address(this).balance;
    }

    function transferFunds() public {
            require(msg.sender == admin, "Only the owner can call this function.");
           admin.transfer(address(this).balance);
        }
}

