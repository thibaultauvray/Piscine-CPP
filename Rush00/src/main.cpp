/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tauvray <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/07 13:02:04 by tauvray           #+#    #+#             */
/*   Updated: 2015/11/08 18:58:59 by tauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_retro.hpp"

static Player		*ft_keyhook(Player *player, int key, Ennemy* horde, int *score)
{
	int ret;
	bool o;

	o = TRUE;
	ret = 0;
	usleep(300);
	if (key == KEY_LEFT)
	{
		for (int i = 0; i < 30 ; i++)
		{
			if (player->getX() - 1 == horde[i].getX() && player->getY() == horde[i].getY())
				o = FALSE;
		}
		if (o == TRUE)
			player->moveLeft();
		else
		{
			score--;
			player->take_damage(score);
		}
	}
	else if (key == KEY_RIGHT)
	{
		for (int i = 0; i < 30 ; i++)
		{
			if (player->getX() + 1== horde[i].getX() && player->getY() == horde[i].getY())
				o = FALSE;
		}
		if (o == TRUE)
			player->moveRight();
		else
		{
			score--;
			player->take_damage(score);
		}
	}
	else if (key == ' ')
	{
		player->attackP(nbrTir);
		nbrTir++;
	}
	return (player);
}

void ft_score(int score)
{
	int	m_x;
	int	m_y;
	int	x;
	int	y;

	start_color();
	init_pair(1, COLOR_RED, COLOR_BLUE);
	getmaxyx(stdscr, m_y, m_x);
	x = (m_x / 2) - 20;
	y = (m_y / 2) - 5;
	attron(COLOR_PAIR(1));
	while (x < (m_x / 2) + 20)
	{
		while (y < (m_y / 2) + 5)
		{
			mvprintw(y, x, " ");
			y++;
		}
		y = (m_y / 2) - 5;
		x++;
	}
	attron(A_BOLD);
	mvprintw((m_y / 2) - 2, (m_x / 2) - 10, " YOU FINISH WITH %i POINTS", score);
	attroff(A_BOLD);
	attroff(COLOR_PAIR(1));
	refresh();
	nodelay(stdscr, FALSE);
	getch();
	endwin();
}


void ft_game_over()
{
	int	m_x;
	int	m_y;
	int	x;
	int	y;

	start_color();
	init_pair(1, COLOR_RED, COLOR_BLUE);
	getmaxyx(stdscr, m_y, m_x);
	x = (m_x / 2) - 20;
	y = (m_y / 2) - 5;
	attron(COLOR_PAIR(1));
	while (x < (m_x / 2) + 20)
	{
		while (y < (m_y / 2) + 5)
		{
			mvprintw(y, x, " ");
			y++;
		}
		y = (m_y / 2) - 5;
		x++;
	}
	attron(A_BOLD);
	mvprintw((m_y / 2), (m_x / 2), "%s", "GAME OVER");
	attroff(A_BOLD);
	attroff(COLOR_PAIR(1));
	refresh();
	nodelay(stdscr, FALSE);
	getch();
	endwin();
}

void		ft_getUI( int score, Player *player, time_t start)
{
	int		nbAmmo;

	double sec = difftime( time(0), start);
	nbAmmo = 299 - nbrTir;
	mvprintw(1, 1, "TIME : %1.f", sec);
	mvprintw(2, 1, "SCORE : %i", score);
	mvprintw(3, 1, "LEVEL : %i", player->getLevel());
	if (nbAmmo > 100)
		mvprintw(4, 1, "AMMO : %i", nbAmmo);
	else if (nbAmmo < 100 && nbAmmo > -1)
	{
		mvprintw(4, 1, "AMMO : %2i", nbAmmo);
		mvprintw(4, 10, " ");
	}
}

WINDOW		*ft_init( WINDOW *screen, Player *player)
{
	if (!(screen = initscr()))
		return (NULL);
	screen = subwin(stdscr, 0, 100, 0, (COLS / 2) - 50);
	wborder(screen, '|', '|', '-', '-', '+', '+', '+', '+');
	curs_set(FALSE);
	noecho();
	refresh();
	nonl();
	mvprintw(player->getY(), player->getX(), player->getShape().c_str());
	keypad(stdscr, TRUE);
	nodelay(stdscr, TRUE);
	return (screen);
}

void	ft_finish(int score, Player *player)
{
	if (player->getHP() == 0)
	{
		ft_game_over();
		exit(1);
	}
	if (nbrTir == 300)
	{
		ft_score(score);
		exit(1);
	}

}

int			ft_max( void )
{
	int	m_x;
	int	m_y;

	getmaxyx(stdscr, m_y, m_x);
	if (m_x != 318 && m_y != 84)
		return (-1);
	return (1);
}
int main( void )
{
	WINDOW 	*screen = NULL;
	int		j;
	bool	e;
	time_t start = time(0);
	int		i;
	int		n;
	Ennemy 	*horde = new Ennemy[30];
	Player	*player = new Player();
	Ennemy *opp = new Ennemy("#", 170, 20);
	int	key = 0;
	int score = 0;

	if ((screen = ft_init(screen, player)) == NULL)
		return (-1);
	n  = 0;
	i = 0;
	j = 0;
	e = TRUE;
	while(1)
	{
		if (ft_max() == -1)
		{
			endwin();
			std::cout << "Merci de le lancer en plein ecran ! " << std::endl;
			return (-1);
		}

		ft_getUI(score, player, start);
		key = getch();
		player = ft_keyhook(player, key, horde, &score);
		mvprintw(opp->getY(), opp->getX(), opp->getShape().c_str());
		mvprintw(player->getY(), player->getX(), player->getShape().c_str());
		if (j % 50 == 1)
		{
			mvprintw(opp->_bullet[5].getY(), opp->_bullet[5].getX(), opp->_bullet[5].getShape().c_str());
			if ((opp->_bullet[5].getX() == player->getX()) && (opp->_bullet[5].getY() - 1 == player->getY())){
				score--;
				player->take_damage(&score);
			}

			for (int i = 0; i < nbrTir; i++)
			{
				if (player->_bullet[i].getHP() > 0){
					player->_bullet[i].moveUp();
					mvprintw(player->_bullet[i].getY(), player->_bullet[i].getX(), player->_bullet[i].getShape().c_str());
				}
			}
		}
		if (opp->_bullet[5].getHP() == 0)
			e = TRUE;
		if (i % 500 == 1)
		{
			if (rand() % 5 == 0 && e == TRUE)
			{
						e = FALSE;
						opp->attack(5);
			}
						opp->_bullet[5].moveDown();


			for (int i = 0; i < 29; i++)
			{
				if (horde[i].getHP() > 0){
					mvprintw(horde[i].getY(), horde[i].getX(), horde[i].getShape().c_str());
					horde[i].moveDown();
				}
			}
		}
		for (int i = 0; i < nbrTir; i++){
			for (int j = 0; j < 30; j++){
				if ((player->_bullet[i].getY() + 1 == horde[j].getY())
						&& (player->_bullet[i].getX() == horde[j].getX() && horde[j].getHP() > 0 && player->_bullet[i].getHP() > 0)) {
					horde[j].take_damage(&score);
					player->_bullet[i].die();
				}
			if ((player->_bullet[i].getY() + 1 == opp->getY())
						&& (player->_bullet[i].getX() == opp->getX() && opp->getHP() > 0 && player->_bullet[i].getHP() > 0)) {
					opp->take_damage(&score);
					player->_bullet[i].die();
				}

			}

		}
		for (int i = 0; i < 30 ; i++){
			if ((horde[i].getX() == player->getX()) && (horde[i].getY() - 1 == player->getY())){
				score--;
				player->take_damage(&score);
			}

		}
		if (horde->detectVaisseau(horde) == 29)
		{
			i = 0;
			j= 0;
			opp->refreshData();
			player->levelUp();
			clear();
			wborder(screen, '|', '|', '-', '-', '+', '+', '+', '+');
			for (int i = 0 ; i < 29; i++)
				horde[i].refreshData(player->getLevel());
		}
		refresh();
		ft_finish(score, player);
		usleep( 100 );
		i++;
		j++;
	}
	return 0;
}
