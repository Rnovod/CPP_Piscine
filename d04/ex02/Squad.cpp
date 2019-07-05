/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovodra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 20:58:49 by rnovodra          #+#    #+#             */
/*   Updated: 2018/10/05 20:58:50 by rnovodra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad(void) : _units(0), _marines(NULL) {

	return;
}

Squad::Squad(Squad const & obj) {

	this->_units = obj._units;

	t_marine *copy;
	t_marine *input;

	copy = this->_marines;
	input = obj._marines;

	while (input)
	{
		if (copy != NULL)
			copy = NULL;
		else
			copy = new t_marine;
		copy->marine = input->marine;
		copy->next = NULL;
		copy = copy->next;
		input = input->next;
	}
	this->_marines = copy;
	delete input;
	return;
}

Squad::~Squad(void) {

	this->_destroyMarines();
	return ;
}

void	Squad::_destroyMarines(void) {

	t_marine	*tmp;

	while (this->_marines) {

		tmp = this->_marines->next;
		delete this->_marines->marine;
		delete this->_marines;
		this->_marines = tmp;
	}
	return ;
}

Squad::t_marine	*Squad::_createNewMarine(ISpaceMarine *marine) {

	t_marine	*new_marine = new t_marine;

	new_marine->marine = marine;
	new_marine->next = NULL;
	return new_marine;
}

Squad & Squad::operator=(Squad const & obj) {

	if (this != &obj) {

		this->_units = obj._units;
		if (this->_marines) {
			this->_destroyMarines();
			this->_marines = NULL;
		}

		t_marine *tmp;
		t_marine *begin;

		t_marine *input;

		input = obj._marines;
		begin = _createNewMarine(input->marine);
		tmp = begin;
		for (input = obj._marines; input != NULL; input = input->next) {
			
			tmp->next = _createNewMarine(input->marine);
			tmp = tmp->next;
		}
		this->_marines = begin;
	}
	return *this;
}

int		Squad::getCount() const {

	return this->_units;
}

int		Squad::push(ISpaceMarine *obj) {

	t_marine	*copy;

	if (this->_marines == NULL) {

		this->_marines = new t_marine;
		this->_marines->marine = obj;
		this->_marines->next = NULL;
		this->_units = this->_units + 1;
		return this->_units;
	}
	copy = this->_marines;
	while (copy->next)
		copy = copy->next;
	copy->next = new t_marine;
	copy->next->marine = obj;
	copy->next->next = NULL;
	this->_units = this->_units + 1;
	return this->_units;
}

ISpaceMarine*		Squad::getUnit(int i) const {

	t_marine	*unit;

	unit = this->_marines;
	for (; i != 0 && unit != NULL; i--) {
		unit = unit->next;
	}
	return unit->marine;
}
