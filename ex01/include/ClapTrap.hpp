/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazura <bazuara@student.42madrid.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 15:48:18 by bazura            #+#    #+#             */
/*   Updated: 2024/01/30 17:18:19 by bazura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP_
#define CLAPTRAP_HPP_

#include <string>
#include <iostream>

class ClapTrap {
 private:
  std::string name;
  unsigned int hit_points;
  unsigned int energy_points;
  unsigned int attack_damage;

 public:
  explicit ClapTrap(std::string name);
  ~ClapTrap();
  void attack(const std::string& target);
  void takeDamage(unsigned int amount);
  void beRepaired(unsigned int amount);
};

#endif  // CLAPTRAP_HPP_
