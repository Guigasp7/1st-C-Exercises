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

void enemy_attack(struct s_enemy* my_enemy, struct s_player* my_player)
{
	my_player->life = my_player->life - (my_enemy->attack - my_player->armor);
	my_player->armor -= my_enemy->attack;
}
