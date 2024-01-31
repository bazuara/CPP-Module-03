/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazura <bazuara@student.42madrid.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 16:50:21 by bazura            #+#    #+#             */
/*   Updated: 2024/01/30 17:24:59 by bazura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ScavTrap.hpp>

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
  std::cout << "ScavTrap constructor called" << std::endl;
  this->name = name;
  this->hit_points = 100;
  this->energy_points = 50;
  this->attack_damage = 20;
}  // ScavTrap constructor

ScavTrap::~ScavTrap() {
  std::cout << "ScavTrap " << this->name << " destructor called" << std::endl;
}  // ScavTrap destructor

void ScavTrap::attack(const std::string& target) {
  if (this->energy_points <= 0) {
    std::cout << "ScavTrap " << this->name << " has no energy points!"
              << std::endl;
    return;
  }
  this->energy_points -= 1;
  std::cout << "ScavTrap " << this->name << " attacks " << target
            << ", causing " << this->attack_damage << " points of damage! "
            << this->energy_points << " EP remaining" << std::endl;

}  // attack

void ScavTrap::takeDamage(unsigned int amount) {
  std::cout << "ScavTrap " << this->name << " takes " << amount
            << " points of damage!" << std::endl;
}  // takeDamage

void ScavTrap::beRepaired(unsigned int amount) {
  if (this->energy_points <= 0) {
    std::cout << "ScavTrap " << this->name << " has no energy points!"
              << std::endl;
    return;
  }
  this->energy_points -= 1;
  std::cout << "ScavTrap " << this->name << " is repaired " << amount
            << " points! " << this->energy_points << " EP remaining"
            << std::endl;
}  // beRepaired

void ScavTrap::guardGate() {
  std::cout << "ScavTrap " << this->name << " has entered in Gate keeper mode"
            << std::endl;
}  // guardGate
