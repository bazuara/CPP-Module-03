/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazura <bazuara@student.42madrid.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 11:58:45 by bazura            #+#    #+#             */
/*   Updated: 2024/02/02 11:27:55 by bazura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <clapTrap.hpp>

class FragTrap : public ClapTrap {
 protected:
  std::string name;
  unsigned int hit_points;
  unsigned int energy_points;
  unsigned int attack_damage;

 public:
  explicit FragTrap(std::string name);
  ~FragTrap();
  void attack(const std::string& target);
  void takeDamage(unsigned int amount);
  void beRepaired(unsigned int amount);
  void highFivesGuys();
};

#endif  // FRAGTRAP_HPP
