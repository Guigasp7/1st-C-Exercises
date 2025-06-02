typedef struct s_enemy
{
	char* name;
	int life;
	int attack;
	char* cry;
}t_enemy;
void enemy_construct(struct s_enemy* my_enemy, int life, int attack, char const* name, char const* cry);
void enemy_destruct(struct s_enemy* my_enemy);
void enemy_cry(const struct s_enemy* my_enemy);
