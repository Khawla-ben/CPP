

#include "Contact.hpp"

Contact::Contact() :
	index(-1),
	num(-1),
	first_name(""),
	last_name(""),
	nickname(""),
	phone_number(""),
	darkest_secret("") {}

void Contact::setIndex(int value)
{
	// this->index = value;
	index = value;
}

const int& Contact::getIndex() const 
{
	return this->index;
}

void Contact::setNum(int value)
{
	num = value;
}

const int& Contact::getNum() const
{
	return this->num;
}

void Contact::setFirstName(const std::string& value)
{
	first_name = value;
}

const std::string& Contact::getFirstName() const
{
	return this->first_name;
}

void Contact::setLastName(const std::string& value)
{
	last_name = value;
}

const std::string& Contact::getLastName() const
{
	return this->last_name;
}

void Contact::setNickname(const std::string& value)
{
	nickname = value;
}

const std::string& Contact::getNickname() const
{
	return this->nickname;
}

void Contact::setPhonenumber(const std::string& value)
{
	phone_number = value;
}

const std::string& Contact::getPhonenumber() const
{
	return this->phone_number;
}

void Contact::setDarkestsecret(const std::string& value)
{
	darkest_secret = value;
}

const std::string& Contact::getDarkestsecret() const
{
	return this->darkest_secret;
}

Contact::~Contact() {}
