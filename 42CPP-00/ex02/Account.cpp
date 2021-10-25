#include "Account.hpp"
#include <iostream>
#include <iomanip>
#include <string>
#include <cstring>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int	Account::getNbAccounts(void){
	return (Account::_nbAccounts);
}

int	Account::getTotalAmount(void){
	return (Account::_totalAmount);
}

int	Account::getNbDeposits(void){
	return (Account::_totalNbDeposits);
}

int	Account::getNbWithdrawals(void){
	return (Account::_totalNbWithdrawals);
}

Account::Account(int initial_deposit){
	Account::_displayTimestamp();
	this->_accountIndex = this->_nbAccounts;
	Account::_nbAccounts += 1;
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	Account::_totalAmount += this->_amount;
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";created" << std::endl;
}

Account::~Account(){
	Account::_nbAccounts--;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";closed" << std::endl;
}

void	Account::displayAccountsInfos(void){
	Account::_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts();
	std::cout << ";total:" << getTotalAmount();
	std::cout << ";deposits:" << getNbDeposits();
	std::cout << ";withdrawals:" << getNbWithdrawals() << std::endl;
}

void	Account::makeDeposit(int deposit){
	Account::_displayTimestamp();
	this->_nbDeposits++;
	Account::_totalNbDeposits++;
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";p_amount:" << this->_amount;
	std::cout << ";deposit:" << deposit;
	this->_amount += deposit;
	Account::_totalAmount += deposit;
	std::cout << ";amount:" << this->_amount;
	std::cout << ";nb_deposits:" << this->_nbDeposits << std::endl;
}

bool	Account::makeWithdrawal(int withdrawal){
	Account::_displayTimestamp();
	if (this->_amount >= withdrawal)
	{
		this->_nbWithdrawals++;
		Account::_totalNbWithdrawals++;
		std::cout << "index:" << this->_accountIndex;
		std::cout << ";p_amount:" << this->_amount;
		std::cout << ";withdrawal:" << withdrawal;
		this->_amount -= withdrawal;
		Account::_totalAmount -= withdrawal;
		std::cout << ";amount:" << this->_amount;
		std::cout << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
		return (true);
	}
	else
	{
		std::cout << "index:" << this->_accountIndex;
		std::cout << ";p_amount:" << this->_amount;
		std::cout << ";withdrawal:" << "refused" << std::endl;
		return (false);
	}
}

void	Account::displayStatus(void) const{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";amount:" << this->_amount;
	std::cout << ";deposits:" << this->_nbDeposits;
	std::cout << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

void	Account::_displayTimestamp(void){
    std::time_t	t = std::time(0);
    std::tm*	now = std::localtime(&t);

	std::cout << "[" << (now->tm_year + 1900);
	if (now->tm_mday < 9)
		std::cout << 0 << (now->tm_mon + 1);
	else
		std::cout << (now->tm_mon + 1);
	if (now->tm_mday < 10)
		std::cout << 0 << (now->tm_mday) << "_";
	else
		std::cout << (now->tm_mday) << "_";
	if (now->tm_mday < 10)
		std::cout << 0 << (now->tm_hour);
	else
		std::cout << (now->tm_hour);
	if (now->tm_min < 10)
		std::cout << 0 << (now->tm_min);
	else
		std::cout << (now->tm_min);
	if (now->tm_sec < 10)
		std::cout << 0 << (now->tm_sec) << "] ";
	else
		std::cout << (now->tm_sec) << "] ";
}
