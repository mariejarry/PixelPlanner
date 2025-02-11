#include "../includes/task.hpp"

//task default constructor
Task::Task()
{
}

//task constructor
Task::Task(std::string name, std::string date) : _name(name), _date(date)
{
	this->_completed = false;
}
//task destructor
Task::~Task()
{
}

//Getters
std::string	Task::getName(){return this->_name;}
std::string Task::getDate(){return this->_date;}
bool		Task::getCompleted(){return this->_completed;}

//Setters
void	Task::setName(std::string name){this->_name = name;}
void	Task::setDate(std::string date){this->_date = date;}
void	Task::setCompleted(bool completed){this->_completed = completed;}