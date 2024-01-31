/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazura <bazuara@student.42madrid.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 12:00:52 by bazura            #+#    #+#             */
/*   Updated: 2024/01/31 12:09:11 by bazura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <FragTrap.hpp>

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
  std::cout << "FragTrap constructor called" << std::endl;
  this->name = name;
  this->hit_points = 100;
  this->energy_points = 50;
  this->attack_damage = 20;
}  // FragTrap constructor

FragTrap::~FragTrap() {
  std::cout << "FragTrap " << this->name << " destructor called" << std::endl;
}  // FragTrap destructor

void FragTrap::attack(const std::string& target) {
  if (this->energy_points <= 0) {
    std::cout << "FragTrap " << this->name << " has no energy points!"
              << std::endl;
    return;
  }
  this->energy_points -= 1;
  std::cout << "FragTrap " << this->name << " attacks " << target
            << ", causing " << this->attack_damage << " points of damage! "
            << this->energy_points << " EP remaining" << std::endl;
}  // attack

void FragTrap::takeDamage(unsigned int amount) {
  std::cout << "FragTrap " << this->name << " takes " << amount
            << " points of damage!" << std::endl;
}  // takeDamage

void FragTrap::beRepaired(unsigned int amount) {
  if (this->energy_points <= 0) {
    std::cout << "FragTrap " << this->name << " has no energy points!"
              << std::endl;
    return;
  }
  this->energy_points -= 1;
  std::cout << "FragTrap " << this->name << " is repaired " << amount
            << " points! " << this->energy_points << " EP remaining"
            << std::endl;
}  // beRepaired

void FragTrap::highFivesGuys() {
  std::cout << "FragTrap " << this->name << " says: \"High five, guys!\""
            << std::endl;
}  // highFivesGuys
