/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazura <bazuara@student.42madrid.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 15:48:24 by bazura            #+#    #+#             */
/*   Updated: 2024/01/30 16:23:48 by bazura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ClapTrap.hpp>

int main(void) {
  ClapTrap clap("ClapTrap");
  ClapTrap clap2("Mordecai");
  clap.attack("target");
  clap2.attack("target");
  clap.takeDamage(10);
  clap2.takeDamage(10);
  clap.beRepaired(10);
  clap2.beRepaired(10);
  return 0;
}
