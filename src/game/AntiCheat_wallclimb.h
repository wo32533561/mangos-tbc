#pragma once

#include "AntiCheat.h"

class AntiCheat_wallclimb : public AntiCheat
{
public:
    AntiCheat_wallclimb(Player* player);

    bool HandleMovement(MovementInfo& moveInfo, Opcodes opcode);
    void HandleTeleport();
private:
    bool jumping;
};