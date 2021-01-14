#include "ring.h"
#include "utils.h"

///////////////////////////////////////////////////////////////////////////
// Ring Implemention
///////////////////////////////////////////////////////////////////////////

Ring::Ring(int r, int c) {
	m_col = c;
	m_row = r;
	m_height = RING_SIZE;
	m_width = RING_SIZE;

	// Allocate space for figure
	m_sprite = new char*[RING_SIZE];
	for (int i = 0; i < RING_SIZE; i++) {
		m_sprite[i] = new char[RING_SIZE];
	}

	// Initialize figure
	for (int i = 0; i < RING_SIZE; i++) {
		for (int j = 0; j < RING_SIZE; j++) {
			m_sprite[i][j] = DEAD;
		}
	}
	m_sprite[0][0] = ALIVE;
	m_sprite[0][1] = ALIVE;
	m_sprite[0][2] = ALIVE;
	m_sprite[0][3] = ALIVE;
	m_sprite[3][0] = ALIVE;
	m_sprite[3][1] = ALIVE;
	m_sprite[3][2] = ALIVE;
	m_sprite[3][3] = ALIVE;
}

Ring::~Ring() {
	for (int i = 0; i < RING_SIZE; i++) {
		delete[] m_sprite[i];
	}
	delete[] m_sprite;
}
