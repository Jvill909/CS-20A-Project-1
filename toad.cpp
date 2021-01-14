#include "toad.h"
#include "utils.h"

///////////////////////////////////////////////////////////////////////////
// Toad Implemention
///////////////////////////////////////////////////////////////////////////

Toad::Toad(int r, int c) {

	m_col = c;
	m_row = r;
	m_height = TOAD_HEIGHT;
	m_width = TOAD_WIDTH;

	//Allocate space for figure
	m_sprite = new char*[TOAD_HEIGHT];
	for (int i = 0; i < TOAD_HEIGHT; i++) {
		m_sprite[i] = new char[TOAD_WIDTH];
	}

	//Initialize figure
	for (int i = 0; i < TOAD_HEIGHT; i++) {
		for (int j = 0; j < TOAD_WIDTH; j++) {
			m_sprite[i][j] = ALIVE;
		}
	}

	m_sprite[0][3] = DEAD;
	m_sprite[1][0] = DEAD;
}

Toad::~Toad() {
	for (int i = 0; i < TOAD_HEIGHT; i++) {
		delete[] m_sprite[i];
	}
	delete[] m_sprite;
}