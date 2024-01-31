/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazura <bazuara@student.42madrid.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 15:48:24 by bazura            #+#    #+#             */
/*   Updated: 2024/01/31 12:07:01 by bazura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ClapTrap.hpp>
#include <ScavTrap.hpp>
#include <FragTrap.hpp>

int main(void) {
  ClapTrap clap("ClapTrap");
  ScavTrap scav("Mordecai");
  FragTrap frag("Brick");

  clap.attack("target");
  scav.attack("target");
  frag.attack("target");
  clap.takeDamage(10);
  scav.takeDamage(10);
  frag.takeDamage(10);
  clap.beRepaired(10);
  scav.beRepaired(10);
  frag.beRepaired(10);

  scav.guardGate();
  frag.highFivesGuys();

  return 0;
}
