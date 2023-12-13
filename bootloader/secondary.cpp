// all of this needs to run in RAM

void this_runs_from_ram()
{
    // disable XIP, we can no longer run functions stored in flash at this point
    // reconfigure CSN away from Pico board and to the cartridge chip
    // validate program on cartridge
    // renable XIP
    // jump to entry on cartridge via soft reset?
}

int main()
{
    this_runs_from_ram();
}
