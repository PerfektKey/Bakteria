#pragma once

#include <math.h>
#include "../header/building.h"

class spawner : public building {
private:
	ItemType Spawn;

	float timeToSpawn;
	float elapsedTime;
public:
	spawner(uint16_t, uint16_t, world*, uint16_t, uint16_t, ItemType);
	~spawner();

	void update(float);
};
