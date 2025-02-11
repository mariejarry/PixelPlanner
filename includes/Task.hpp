#pragma once

#include <iostream>

class Task
{
private:
	std::string _name;
	std::string	_date;
	bool		_completed;

public:
	Task();
	Task(std::string name, std::string date);
	~Task();

	std::string	getName();
	std::string getDate();
	bool		getCompleted();

	void	setName(std::string name);
	void	setDate(std::string date);
	void	setCompleted(bool completed);
};
