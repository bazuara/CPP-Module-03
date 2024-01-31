/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazura <bazuara@student.42madrid.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 15:51:24 by bazura            #+#    #+#             */
/*   Updated: 2024/01/30 17:21:17 by bazura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ClapTrap.hpp>

ClapTrap::ClapTrap(std::string name) : name(name) {
  std::cout << "ClapTrap constructor called" << std::endl;
  this->hit_points = 10;
  this->energy_points = 10;
  this->attack_damage = 0;
}  // ClapTrap constructor

ClapTrap::~ClapTrap() {
  std::cout << "ClapTrap " << this->name << " destructor called" << std::endl;
}  // ClapTrap destructor

void ClapTrap::attack(const std::string& target) {
  if (this->energy_points <= 0) {
    std::cout << "ClapTrap " << this->name << " has no energy points!"
              << std::endl;
    return;
  }
  std::cout << "ClapTrap " << this->name << " attacks " << target
            << ", causing " << this->attack_damage << " points of damage! "
            << this->energy_points << " EP remaining" << std::endl;
  this->energy_points -= 1;
}  // attack

void ClapTrap::takeDamage(unsigned int amount) {
  std::cout << "ClapTrap " << this->name << " takes " << amount
            << " points of damage!" << std::endl;
}  // takeDamage

void ClapTrap::beRepaired(unsigned int amount) {
  if (this->energy_points <= 0) {
    std::cout << "ClapTrap " << this->name << " has no energy points!"
              << std::endl;
    return;
  }
  std::cout << "ClapTrap " << this->name << " is repaired " << amount
            << " points! " << this->energy_points << " EP remaining"
            << std::endl;
  this->energy_points -= 1;
}  // beRepaired
