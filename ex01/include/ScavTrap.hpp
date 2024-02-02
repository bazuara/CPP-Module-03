/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazura <bazuara@student.42madrid.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 16:47:22 by bazura            #+#    #+#             */
/*   Updated: 2024/02/02 11:13:04 by bazura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP_
#define SCAVTRAP_HPP_

#include <clapTrap.hpp>

class ScavTrap : public ClapTrap {
 protected:
  std::string name;
  unsigned int hit_points;
  unsigned int energy_points;
  unsigned int attack_damage;

 public:
  explicit ScavTrap(std::string name);
  ~ScavTrap();
  void attack(const std::string& target);
  void takeDamage(unsigned int amount);
  void beRepaired(unsigned int amount);
  void guardGate();
};

#endif  // SCAVTRAP_HPP_
