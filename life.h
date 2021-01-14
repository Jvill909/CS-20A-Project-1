#ifndef Project1_life_h
#define Project1_life_h

class World;

class Life {
public:

	int getCol() const; // const member functions cannot modify member variables.
	int getRow() const;
	int getHeight() const;
	int getWidth() const;
	char getFromFigure(int r, int c) const;

protected:
	int m_col;
	int m_row;
	int m_height;
	int m_width;
	char **m_sprite;
	World *m_world;
};

#endif