// Add entries here
// These entries are example entries which you can replace, but they exist to get you started.
// Remember to modify include/constants/help_window.h to include identifiers so they can be used in event scripts.
const struct HelpWindow gHelpWindowInfo[] =
{
    [HELP_START_MENU] =
    {
        .header = COMPOUND_STRING("Information: Button Combos"),
        .desc = COMPOUND_STRING("In start menu\n"
                                "Help window: {SELECT_BUTTON} - Repel: {DPAD_LEFT} or {DPAD_RIGHT}\n"
                                "Heal Party: {L_BUTTON} - Open PC: {R_BUTTON}\n"
                                "In overworld\n"
                                "DexNav Search: {R_BUTTON}\n"
                                "Debug Menu: {L_BUTTON} + {START_BUTTON}\n"
                            ),
        .headerFont = FONT_NORMAL,
        .descFont = FONT_NORMAL
    },
    // Add more entries
};
