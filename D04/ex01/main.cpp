/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tauvray <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/06 16:55:52 by tauvray           #+#    #+#             */
/*   Updated: 2015/11/07 12:10:18 by tauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "Character.hpp"
#include "Enemy.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"

	int main()
	{
		Character* zaz = new Character("zaz");
		std::cout << *zaz;

		Enemy* b = new RadScorpion();
		Enemy* c = new SuperMutant();
		Enemy* d = new SuperMutant();

		AWeapon* pr = new PlasmaRifle();
		AWeapon* pf = new PowerFist();
		zaz->equip(pr);
		std::cout << *zaz;
		zaz->equip(pf);
		zaz->attack(b);
		std::cout << *zaz;
		zaz->equip(pr);
		std::cout << *zaz;
		zaz->attack(b);
		std::cout << *zaz;
		zaz->attack(b);
		std::cout << *zaz;


		zaz->equip(pf);
		zaz->attack(c);
		std::cout << *zaz;
		zaz->attack(c);
		std::cout << *zaz;
		zaz->attack(c);
		std::cout << *zaz;
		zaz->attack(c);
		std::cout << *zaz;
		zaz->attack(c);
		zaz->attack(d);
		zaz->attack(d);
		zaz->recoverAP();
		zaz->attack(d);
		zaz->attack(d);
		zaz->attack(d);
		zaz->recoverAP();
		zaz->recoverAP();
		zaz->recoverAP();
		zaz->recoverAP();
		zaz->recoverAP();
		zaz->recoverAP();
		zaz->recoverAP();
		zaz->attack(d);
		zaz->attack(d);
		zaz->attack(d);
		return 0;
}
