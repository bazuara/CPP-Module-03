/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazura <bazuara@student.42madrid.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 15:48:24 by bazura            #+#    #+#             */
/*   Updated: 2024/01/30 17:13:50 by bazura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ClapTrap.hpp>
#include <ScavTrap.hpp>

int main(void) {
  ClapTrap clap("ClapTrap");
  ScavTrap scav("Mordecai");
  clap.attack("target");
  scav.attack("target");
  clap.takeDamage(10);
  scav.takeDamage(10);
  clap.beRepaired(10);
  scav.beRepaired(10);
  return 0;
}
