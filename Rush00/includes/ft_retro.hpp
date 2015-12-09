/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_retro.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tauvray <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/07 12:52:39 by tauvray           #+#    #+#             */
/*   Updated: 2015/11/08 18:59:54 by tauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FT_RETRO_HPP
# define FT_RETRO_HPP

# include <iostream>
# include <ncurses.h>
# include <time.h>

# define MAXH 83
# define MAXW 318
# define LIMITXD 207
# define LIMITXG 110
# define WIDTH 100

class GameEntity{

	public:
		GameEntity( void );
		GameEntity( GameEntity const &src );
		GameEntity( std::string shape);
		~GameEntity( void );

		void die();	
		GameEntity &operator=(GameEntity const & src);
		std::string		getShape() const;
		int				getX() const;
		int				getY() const;
		int				getHP() const;
		int				getArea() const;
		void			moveLeft();
		void			moveDown();
		void			moveRight();
		void			moveUp();
		void 			take_damage(int *score);


	protected:
		std::string _shape;
		int _x;
		int _y;
		int _HP;
		int _area;
		int _size;

};

class Bullets : public GameEntity
{
	public:
		Bullets( void );
		Bullets( Bullets const &src );
		Bullets &operator=(Bullets const & src);
		void	setHP(int d);
		~Bullets( void );
		void	setX( int x );
		void	setY( int y );
};


class Ennemy : public GameEntity
{
	public:
		Ennemy( void );
		Ennemy( Ennemy const &src );
		Ennemy( std::string type, int x, int y);
		virtual ~Ennemy( void );
		void attack(int d);
		void 	init_coord();
		int		detectVaisseau(Ennemy *horde);
		void	refreshData(int n);
		void	refreshData();
		Ennemy	&operator= (Ennemy const &src);
		Bullets		*_bullet;
	protected:
		Ennemy	*_horde;
};

class Player : public GameEntity
{
	public:
		Player( void );
		Player( Player const &src );
		void		levelUp();
		void		HPup(int *score);
		int			getLevel() const;
		virtual ~Player( void );
		Player	&operator= (Player const &src);
		void attackP( int d );
		Bullets		*_bullet;

	private:
		int		_level;
};

static int		nbrTir = -1;



#endif
