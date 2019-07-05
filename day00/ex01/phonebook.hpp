/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovodra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/01 15:26:46 by rnovodra          #+#    #+#             */
/*   Updated: 2018/10/01 15:26:47 by rnovodra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <string>


class	contact {

public:
	contact(void);
	~contact(void);

	std::string		data[11];

};

class	phonebook {

public:
	phonebook(void);
	~phonebook(void);

	void	add_user(void);
	void	search_user(void);

private:
	contact		_contacts[8];
	size_t		_number_contact;
	
	enum _infor {
		first_name, last_name, nickname,
		login, postal_address, email_address, phone_number, birthday_date,
		favorite_meal, underwear_color, darkest_secret
	};
	inline const char *_put_info(int i);
	void	_get_contact(std::string line_index);
};

#endif
