//
// Created by Tadeusz Kondracki on 3/29/22.
//

#ifndef IRCSERV_CLIENT_HPP
#define IRCSERV_CLIENT_HPP

#include <iostream>
#include <vector>

class Client
{
public:
	Client();
	Client(Client const &inst);
	~Client();

	Client &operator=(Client const &rhs);

private:
	int							_fd;
	std::string					nickname;
	std::vector<std::string>	_channels;
};

std::iostream &operator<<(std::iostream &io, Client const & client);

#endif //IRCSERV_CLIENT_HPP
