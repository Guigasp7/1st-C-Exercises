struct s_weapon;
struct s_enemy;

typedef struct s_player
{
	char* name;
	char* shout;
	struct s_weapon* weapon;
	int life;
	int armor;
}

void player_construct(struct s_player* my_player, int life, int armor, char const* name, char const shout);
void player_destruct(struct s_player* my_player, struct s_weapon* my_weapon);
void player_pick_up_weapon(struct s_player* my_player, struct s_weapon my_weapon);
void player_shout(const struct s_player* my_player);
void player_attack(struct s_player* my_player, struct s_enemy* my_enemy);
