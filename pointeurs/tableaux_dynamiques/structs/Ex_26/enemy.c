#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include "my_put_number.h"
#include "my_put_string.h"
#include "my_put_char.h"
#include "string_duplicate.h"
#include "string_safe_copy.h"
#include "string_sized_copy.h"
#include "string_length.h"
#include "enemy.h"

int main(int ac, char ** av)
{
	struct s_enemy my_enemy;
	enemy_construct(&my_enemy, 30, 9 , "NastyGuy", "Let's get nasty!");
	my_put_string("Enemy:\n");
	my_put_string(" - name: ");
	my_put_string(my_enemy.name);
	my_put_string("\n - life: ");
	my_put_number(my_enemy.life);
	my_put_string("\n - attack: ");
	my_put_number(my_enemy.attack);
	my_put_string("\n - cry: ");
	my_put_string(my_enemy.cry);
	my_put_string("\n\n");
	enemy_cry(&my_enemy);
	enemy_destruct(&my_enemy);
	t_enemy* modifiable_enemy = &my_enemy;
	const t_enemy* the_boss = modifiable_enemy;
	enemy_construct(modifiable_enemy, 1, 1, "Jonathan", "Noooooob!!!");
	enemy_cry(the_boss);
	enemy_destruct(modifiable_enemy);
	return EXIT_SUCCESS;
}

void enemy_construct(struct s_enemy* my_enemy, int life, int attack, char const* name, char const* cry)
{
	my_enemy -> name = string_duplicate(name);
	my_enemy -> life = life;
	my_enemy -> attack = attack;
	my_enemy -> cry = string_duplicate(cry);
	my_put_string(name);
	my_put_string(" is born.\n");
}

void enemy_destruct(struct s_enemy* my_enemy)
{
	my_put_string(my_enemy->name);
	my_put_string(" died.\n");
	free(my_enemy->name);
	free(my_enemy->cry);
}

void enemy_cry(const struct s_enemy* my_enemy)
{
	my_put_string("\nNastyGuy: ");
	my_put_string(my_enemy->cry);
}
