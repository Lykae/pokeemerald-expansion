#include "global.h"
#include "option_menu.h"
#include "bg.h"
#include "gpu_regs.h"
#include "international_string_util.h"
#include "main.h"
#include "menu.h"
#include "palette.h"
#include "scanline_effect.h"
#include "sprite.h"
#include "strings.h"
#include "task.h"
#include "text.h"
#include "text_window.h"
#include "window.h"
#include "event_data.h"
#include "string_util.h"
#include "gba/m4a_internal.h"
#include "constants/rgb.h"
#include "event_data.h"
#include "randomizer.h"
#include "constants/battle_mode.h"

#define tMenuSelection data[0]
#define tRandomizer data[1]
#define tRandoMisc data[2]
#define tScaling data[3]
#define tSeason data[4]
#define tBattleStyle data[5]
#define tSound data[6]
#define tButtonMode data[7]
#define tCompetitive data[8]
#define tWindowFrameType data[9]
#define tBattleSceneOff data[10]
#define tFollower data[11]
#define tBattleMode data[12]

// Page 1 menu items (standard options)
enum
{
    //MENUITEM_TEXTSPEED,
    MENUITEM_RANDOMIZER,
    MENUITEM_RANDO_MISC,
    MENUITEM_SCALING,
    MENUITEM_COMPETITIVE,
    MENUITEM_BATTLEMODE,
    MENUITEM_SEASON,
    MENUITEM_CANCEL,
    MENUITEM_COUNT,
};

// Page 2 menu items (extended options)
enum
{
    MENUITEM_BUTTONMODE,
    MENUITEM_FRAMETYPE,
    MENUITEM_BATTLESTYLE,
    MENUITEM_BATTLESCENE,
    MENUITEM_SOUND,
    MENUITEM_FOLLOWER,
    MENUITEM_CANCEL_PG2,
    MENUITEM_COUNT_PG2,
};

enum
{
    WIN_HEADER,
    WIN_OPTIONS
};

// Y-positions for Page 1 menu items
#define YPOS_BATTLESCENE  (MENUITEM_BATTLESCENE * 16)
#define YPOS_BATTLESTYLE  (MENUITEM_BATTLESTYLE * 16)
#define YPOS_RANDOMIZER   (MENUITEM_RANDOMIZER * 16)
#define YPOS_SOUND        (MENUITEM_SOUND * 16)
#define YPOS_RANDO_MISC   (MENUITEM_RANDO_MISC * 16)
#define YPOS_BUTTONMODE   (MENUITEM_BUTTONMODE * 16)
#define YPOS_COMPETITIVE   (MENUITEM_COMPETITIVE * 16)
#define YPOS_FRAMETYPE    (MENUITEM_FRAMETYPE * 16)
#define YPOS_SEASON       (MENUITEM_SEASON * 16)
#define YPOS_SCALING       (MENUITEM_SCALING * 16)

// Y-positions for Page 2 menu items
#define YPOS_FOLLOWER        (MENUITEM_FOLLOWER * 16)
#define YPOS_BATTLEMODE      (MENUITEM_BATTLEMODE * 16)
//#define YPOS_TEXTSPEED    (MENUITEM_TEXTSPEED * 16)
#define YPOS_BUTTONMODE   (MENUITEM_BUTTONMODE * 16)
#define YPOS_SOUND        (MENUITEM_SOUND * 16)
#define YPOS_BATTLESTYLE  (MENUITEM_BATTLESTYLE * 16)

// Total number of pages in the options menu (use L/R to navigate)
#define PAGE_COUNT  2

static void Task_OptionMenuFadeIn(u8 taskId);
static void Task_OptionMenuProcessInput(u8 taskId);
static void Task_OptionMenuFadeIn_Pg2(u8 taskId);
static void Task_OptionMenuProcessInput_Pg2(u8 taskId);
static void Task_OptionMenuSave(u8 taskId);
static void Task_OptionMenuFadeOut(u8 taskId);
static void HighlightOptionMenuItem(u8 selection);
//static u8 TextSpeed_ProcessInput(u8 selection);
//static void TextSpeed_DrawChoices(u8 selection);
static u8 BattleScene_ProcessInput(u8 selection);
static void BattleScene_DrawChoices(u8 selection);
static u8 BattleStyle_ProcessInput(u8 selection);
static void BattleStyle_DrawChoices(u8 selection);
static u8 Follower_ProcessInput(u8 selection);
static void Follower_DrawChoices(u8 selection);
static u8 Randomizer_ProcessInput(u8 selection);
static void Randomizer_DrawChoices(u8 selection);
static u8 RandoMisc_ProcessInput(u8 selection);
static void RandoMisc_DrawChoices(u8 selection);
static u8 Scaling_ProcessInput(u8 selection);
static void Scaling_DrawChoices(u8 selection);
static u8 Competitive_ProcessInput(u8 selection);
static void Competitive_DrawChoices(u8 selection);
static u8 Sound_ProcessInput(u8 selection);
static void Sound_DrawChoices(u8 selection);
static u8 FrameType_ProcessInput(u8 selection);
static void FrameType_DrawChoices(u8 selection);
static u8 ButtonMode_ProcessInput(u8 selection);
static void ButtonMode_DrawChoices(u8 selection);
static u8 Season_ProcessInput(u8 selection);
static void Season_DrawChoices(u8 selection);
static void DrawHeaderText(void);
static u8 BattleMode_ProcessInput(u8 selection);
static void BattleMode_DrawChoices(u8 selection);
static void DrawTextOption(void);
static void DrawOptionMenuTexts(void);
static void DrawBgWindowFrames(void);
static void SaveCurrentSettings(u8 taskId);

EWRAM_DATA static bool8 sArrowPressed = FALSE;
EWRAM_DATA static u8 sCurrPage = 0;

//static const u8 gText_Option[]             = _("OPTION");
//static const u8 gText_TextSpeedSlow[]      = _("{COLOR GREEN}{SHADOW LIGHT_GREEN}SLOW");
//static const u8 gText_TextSpeedMid[]       = _("{COLOR GREEN}{SHADOW LIGHT_GREEN}MID");
//static const u8 gText_TextSpeedFast[]      = _("{COLOR GREEN}{SHADOW LIGHT_GREEN}FAST");
static const u8 gText_SeasonSpring[]       = _("{COLOR GREEN}{SHADOW LIGHT_GREEN}SP");
static const u8 gText_SeasonSummer[]       = _("{COLOR GREEN}{SHADOW LIGHT_GREEN}SU");
static const u8 gText_SeasonFall[]         = _("{COLOR GREEN}{SHADOW LIGHT_GREEN}FA");
static const u8 gText_SeasonWinter[]        = _("{COLOR GREEN}{SHADOW LIGHT_GREEN}WI");
static const u8 gText_BattleSceneOn[]      = _("{COLOR GREEN}{SHADOW LIGHT_GREEN}ON");
static const u8 gText_BattleSceneOff[]     = _("{COLOR GREEN}{SHADOW LIGHT_GREEN}OFF");
static const u8 gText_BattleStyleShift[]   = _("{COLOR GREEN}{SHADOW LIGHT_GREEN}SHIFT");
static const u8 gText_BattleStyleSet[]     = _("{COLOR GREEN}{SHADOW LIGHT_GREEN}SET");
static const u8 gText_SoundMono[]          = _("{COLOR GREEN}{SHADOW LIGHT_GREEN}MONO");
static const u8 gText_SoundStereo[]        = _("{COLOR GREEN}{SHADOW LIGHT_GREEN}STEREO");
static const u8 gText_FrameType[]          = _("{COLOR GREEN}{SHADOW LIGHT_GREEN}TYPE");
static const u8 gText_FrameTypeNumber[]    = _("{COLOR GREEN}{SHADOW LIGHT_GREEN}");
static const u8 gText_ButtonTypeNormal[]   = _("{COLOR GREEN}{SHADOW LIGHT_GREEN}NORMAL");
static const u8 gText_ButtonTypeLR[]       = _("{COLOR GREEN}{SHADOW LIGHT_GREEN}LR");
static const u8 gText_ButtonTypeLEqualsA[] = _("{COLOR GREEN}{SHADOW LIGHT_GREEN}L=A");

//rando
static const u8 gText_RandomizerOff[]   = _("{COLOR GREEN}{SHADOW LIGHT_GREEN}OFF");
static const u8 gText_RandomizerRandom[]   = _("{COLOR GREEN}{SHADOW LIGHT_GREEN}RDM");
static const u8 gText_RandomizerLegendAware[]   = _("{COLOR GREEN}{SHADOW LIGHT_GREEN}AWARE");
static const u8 gText_RandomizerBst[]   = _("{COLOR GREEN}{SHADOW LIGHT_GREEN}BST");
static const u8 gText_RandomizerEvo[]   = _("{COLOR GREEN}{SHADOW LIGHT_GREEN}EVO");
static const u8 gText_RandomizerMiscOff[]   = _("{COLOR GREEN}{SHADOW LIGHT_GREEN}OFF");
static const u8 gText_RandomizerMiscItems[]   = _("{COLOR GREEN}{SHADOW LIGHT_GREEN}OW ITMS");
static const u8 gText_RandomizerMiscAbilities[]   = _("{COLOR GREEN}{SHADOW LIGHT_GREEN}ABLTY");
static const u8 gText_RandomizerMiscBoth[]   = _("{COLOR GREEN}{SHADOW LIGHT_GREEN}ALL");

//SCALING
static const u8 gText_ScalingOff[]   = _("{COLOR GREEN}{SHADOW LIGHT_GREEN}OFF");
static const u8 gText_ScalingEasy[]   = _("{COLOR GREEN}{SHADOW LIGHT_GREEN}EASY");
static const u8 gText_ScalingNormal[]   = _("{COLOR GREEN}{SHADOW LIGHT_GREEN}NORMAL");
static const u8 gText_ScalingHard[]   = _("{COLOR GREEN}{SHADOW LIGHT_GREEN}HARD");

//SCALING
static const u8 gText_CompetitiveOff[]   = _("{COLOR GREEN}{SHADOW LIGHT_GREEN}NORMAL");
static const u8 gText_CompetitiveOn[]   = _("{COLOR GREEN}{SHADOW LIGHT_GREEN}HARDER");

static const u16 sOptionMenuText_Pal[] = INCBIN_U16("graphics/interface/option_menu_text.gbapal");
// note: this is only used in the Japanese release
static const u8 sEqualSignGfx[] = INCBIN_U8("graphics/interface/option_menu_equals_sign.4bpp");

static const u8 *const sOptionMenuItemsNames[MENUITEM_COUNT] =
{
    [MENUITEM_RANDOMIZER] = COMPOUND_STRING("RANDOMIZER"),
    [MENUITEM_RANDO_MISC]       = COMPOUND_STRING("RANDOM MISC."),
    [MENUITEM_SCALING]      = COMPOUND_STRING("SCALING"),
    [MENUITEM_COMPETITIVE]  = COMPOUND_STRING("ENEMY MONS"),
    [MENUITEM_BATTLEMODE]      = gText_BattleMode,
    [MENUITEM_SEASON]      = COMPOUND_STRING("SEASON"),
    [MENUITEM_CANCEL]      = COMPOUND_STRING("CANCEL"),
};

static const u8 *const sOptionMenuItemsNames_Pg2[MENUITEM_COUNT_PG2] =
{
    [MENUITEM_BUTTONMODE]  = COMPOUND_STRING("BUTTON MODE"),
    [MENUITEM_FRAMETYPE]   = COMPOUND_STRING("FRAME"),
    //[MENUITEM_TEXTSPEED]   = COMPOUND_STRING("TEXT SPEED"),
    [MENUITEM_BATTLESTYLE] = COMPOUND_STRING("BATTLE STYLE"),
    [MENUITEM_BATTLESCENE]     = COMPOUND_STRING("BATTLE SCENE"),
    [MENUITEM_SOUND]       = COMPOUND_STRING("SOUND"),
    [MENUITEM_FOLLOWER]        = gText_Follower,
    [MENUITEM_CANCEL_PG2]      = gText_OptionMenuCancel,
};

static const struct WindowTemplate sOptionMenuWinTemplates[] =
{
    [WIN_HEADER] = {
        .bg = 1,
        .tilemapLeft = 2,
        .tilemapTop = 1,
        .width = 26,
        .height = 2,
        .paletteNum = 1,
        .baseBlock = 2
    },
    [WIN_OPTIONS] = {
        .bg = 0,
        .tilemapLeft = 2,
        .tilemapTop = 5,
        .width = 26,
        .height = 14,
        .paletteNum = 1,
        .baseBlock = 0x36
    },
    DUMMY_WIN_TEMPLATE
};

static const struct BgTemplate sOptionMenuBgTemplates[] =
{
    {
        .bg = 1,
        .charBaseIndex = 1,
        .mapBaseIndex = 30,
        .screenSize = 0,
        .paletteMode = 0,
        .priority = 0,
        .baseTile = 0
    },
    {
        .bg = 0,
        .charBaseIndex = 1,
        .mapBaseIndex = 31,
        .screenSize = 0,
        .paletteMode = 0,
        .priority = 1,
        .baseTile = 0
    }
};

static const u16 sOptionMenuBg_Pal[] = {RGB(17, 18, 31)};

static const s32 choicesXPos = 80;

static void MainCB2(void)
{
    RunTasks();
    AnimateSprites();
    BuildOamBuffer();
    UpdatePaletteFade();
}

static void VBlankCB(void)
{
    LoadOam();
    ProcessSpriteCopyRequests();
    TransferPlttBuffer();
}

static void ReadAllCurrentSettings(u8 taskId)
{
    gTasks[taskId].tMenuSelection = 0;
    //gTasks[taskId].tTextSpeed = gSaveBlock2Ptr->optionsTextSpeed;
    gTasks[taskId].tBattleSceneOff = gSaveBlock2Ptr->optionsBattleSceneOff;
    gTasks[taskId].tBattleStyle = gSaveBlock2Ptr->optionsBattleStyle;
    gTasks[taskId].tSound = gSaveBlock2Ptr->optionsSound;
    gTasks[taskId].tButtonMode = gSaveBlock2Ptr->optionsButtonMode;
    gTasks[taskId].tWindowFrameType = gSaveBlock2Ptr->optionsWindowFrameType;
    gTasks[taskId].tFollower = FlagGet(FLAG_POKEMON_FOLLOWERS);
    gTasks[taskId].tBattleMode = gSaveBlock2Ptr->battleMode;
	gTasks[taskId].tCompetitive = gSaveBlock2Ptr->optionsCompetitive;
    gTasks[taskId].tSeason = gSaveBlock2Ptr->optionsSeason;
    gTasks[taskId].tRandomizer = gSaveBlock1Ptr->optionsRandomizer;
    gTasks[taskId].tRandoMisc = gSaveBlock1Ptr->optionsRandoMisc;
    gTasks[taskId].tScaling = gSaveBlock1Ptr->optionsScaling;
}

static void DrawOptionsPg1(u8 taskId)
{  
    ReadAllCurrentSettings(taskId);
    //TextSpeed_DrawChoices(gTasks[taskId].tTextSpeed);
    Randomizer_DrawChoices(gTasks[taskId].tRandomizer);
    RandoMisc_DrawChoices(gTasks[taskId].tRandoMisc);
    Scaling_DrawChoices(gTasks[taskId].tScaling);
    Competitive_DrawChoices(gTasks[taskId].tCompetitive);
    BattleMode_DrawChoices(gTasks[taskId].tBattleMode);
    Season_DrawChoices(gTasks[taskId].tSeason);
    HighlightOptionMenuItem(gTasks[taskId].tMenuSelection);
    CopyWindowToVram(WIN_OPTIONS, COPYWIN_FULL);
}

static void DrawOptionsPg2(u8 taskId)
{
    ReadAllCurrentSettings(taskId);
    ButtonMode_DrawChoices(gTasks[taskId].tButtonMode);
    FrameType_DrawChoices(gTasks[taskId].tWindowFrameType);
    BattleStyle_DrawChoices(gTasks[taskId].tBattleStyle);
    BattleScene_DrawChoices(gTasks[taskId].tBattleSceneOff);
    Sound_DrawChoices(gTasks[taskId].tSound);
    Follower_DrawChoices(gTasks[taskId].tFollower);
    HighlightOptionMenuItem(gTasks[taskId].tMenuSelection);
    CopyWindowToVram(WIN_OPTIONS, COPYWIN_FULL);
}

void CB2_InitOptionMenu(void)
{
    u8 taskId;
    if (gSaveBlock2Ptr->optionsSeason > SEASON_WINTER) // invalid value
    {
        gSaveBlock2Ptr->optionsSeason = SEASON_SPRING;
        VarSet(VAR_CURRENT_SEASON, SEASON_SPRING);
    }
    switch (gMain.state)
    {
    default:
    case 0:
        SetVBlankCallback(NULL);
        gMain.state++;
        break;
    case 1:
        DmaClearLarge16(3, (void *)(VRAM), VRAM_SIZE, 0x1000);
        DmaClear32(3, OAM, OAM_SIZE);
        DmaClear16(3, PLTT, PLTT_SIZE);
        SetGpuReg(REG_OFFSET_DISPCNT, 0);
        ResetBgsAndClearDma3BusyFlags(0);
        InitBgsFromTemplates(0, sOptionMenuBgTemplates, ARRAY_COUNT(sOptionMenuBgTemplates));
        ChangeBgX(0, 0, BG_COORD_SET);
        ChangeBgY(0, 0, BG_COORD_SET);
        ChangeBgX(1, 0, BG_COORD_SET);
        ChangeBgY(1, 0, BG_COORD_SET);
        ChangeBgX(2, 0, BG_COORD_SET);
        ChangeBgY(2, 0, BG_COORD_SET);
        ChangeBgX(3, 0, BG_COORD_SET);
        ChangeBgY(3, 0, BG_COORD_SET);
        InitWindows(sOptionMenuWinTemplates);
        DeactivateAllTextPrinters();
        SetGpuReg(REG_OFFSET_WIN0H, 0);
        SetGpuReg(REG_OFFSET_WIN0V, 0);
        SetGpuReg(REG_OFFSET_WININ, WININ_WIN0_BG0);
        SetGpuReg(REG_OFFSET_WINOUT, WINOUT_WIN01_BG0 | WINOUT_WIN01_BG1 | WINOUT_WIN01_CLR);
        SetGpuReg(REG_OFFSET_BLDCNT, BLDCNT_TGT1_BG0 | BLDCNT_EFFECT_DARKEN);
        SetGpuReg(REG_OFFSET_BLDALPHA, 0);
        SetGpuReg(REG_OFFSET_BLDY, 4);
        SetGpuReg(REG_OFFSET_DISPCNT, DISPCNT_WIN0_ON | DISPCNT_OBJ_ON | DISPCNT_OBJ_1D_MAP);
        ShowBg(0);
        ShowBg(1);
        gMain.state++;
        break;
    case 2:
        ResetPaletteFade();
        ScanlineEffect_Stop();
        ResetTasks();
        ResetSpriteData();
        gMain.state++;
        break;
    case 3:
        LoadBgTiles(1, GetWindowFrameTilesPal(gSaveBlock2Ptr->optionsWindowFrameType)->tiles, 0x120, 0x1A2);
        gMain.state++;
        break;
    case 4:
        LoadPalette(sOptionMenuBg_Pal, BG_PLTT_ID(0), sizeof(sOptionMenuBg_Pal));
        LoadPalette(GetWindowFrameTilesPal(gSaveBlock2Ptr->optionsWindowFrameType)->pal, BG_PLTT_ID(7), PLTT_SIZE_4BPP);
        gMain.state++;
        break;
    case 5:
        LoadPalette(sOptionMenuText_Pal, BG_PLTT_ID(1), sizeof(sOptionMenuText_Pal));
        gMain.state++;
        break;
    case 6:
        PutWindowTilemap(WIN_HEADER);
        DrawTextOption();
        gMain.state++;
        break;
    case 7:
        gMain.state++;
        break;
    case 8:
        PutWindowTilemap(WIN_OPTIONS);
        DrawOptionMenuTexts();
        gMain.state++;
    case 9:
        DrawBgWindowFrames();
        gMain.state++;
        break;
    case 10:
    {
        switch(sCurrPage)
        {
        case 0:
            taskId = CreateTask(Task_OptionMenuFadeIn, 0);
            DrawOptionsPg1(taskId);
            break;
        case 1:
            taskId = CreateTask(Task_OptionMenuFadeIn_Pg2, 0);
            DrawOptionsPg2(taskId);
            break;            
        }
        gMain.state++;
        break;
    }
    case 11:
        BeginNormalPaletteFade(PALETTES_ALL, 0, 16, 0, RGB_BLACK);
        SetVBlankCallback(VBlankCB);
        SetMainCallback2(MainCB2);
        return;
    }
}

static u8 Process_ChangePage(u8 CurrentPage)
{
    if (JOY_NEW(R_BUTTON))
    {
        if (CurrentPage < PAGE_COUNT - 1)
            CurrentPage++;
        else
            CurrentPage = 0;
    }
    if (JOY_NEW(L_BUTTON))
    {
        if (CurrentPage != 0)
            CurrentPage--;
        else
            CurrentPage = PAGE_COUNT - 1;
    }
    return CurrentPage;
}

static void Task_ChangePage(u8 taskId)
{
    DrawTextOption();
    PutWindowTilemap(WIN_OPTIONS);
    DrawOptionMenuTexts();
    switch(sCurrPage)
    {
    case 0:
        DrawOptionsPg1(taskId);
        gTasks[taskId].func = Task_OptionMenuFadeIn;
        break;
    case 1:
        DrawOptionsPg2(taskId);
        gTasks[taskId].func = Task_OptionMenuFadeIn_Pg2;
        break;
    }
}

static void Task_OptionMenuFadeIn(u8 taskId)
{
    if (!gPaletteFade.active)
        gTasks[taskId].func = Task_OptionMenuProcessInput;
}

static void Task_OptionMenuProcessInput(u8 taskId)
{
    if (JOY_NEW(L_BUTTON) || JOY_NEW(R_BUTTON))
    {
        SaveCurrentSettings(taskId);
        FillWindowPixelBuffer(WIN_OPTIONS, PIXEL_FILL(1));
        ClearStdWindowAndFrame(WIN_OPTIONS, FALSE);
        sCurrPage = Process_ChangePage(sCurrPage);
        gTasks[taskId].func = Task_ChangePage;
    }
    else if (JOY_NEW(A_BUTTON))
    {
        if (gTasks[taskId].tMenuSelection == MENUITEM_CANCEL)
            gTasks[taskId].func = Task_OptionMenuSave;
    }
    else if (JOY_NEW(B_BUTTON))
    {
        gTasks[taskId].func = Task_OptionMenuSave;
    }
    else if (JOY_NEW(DPAD_UP))
    {
        if (gTasks[taskId].tMenuSelection > 0)
            gTasks[taskId].tMenuSelection--;
        else
            gTasks[taskId].tMenuSelection = MENUITEM_CANCEL;
        HighlightOptionMenuItem(gTasks[taskId].tMenuSelection);
    }
    else if (JOY_NEW(DPAD_DOWN))
    {
        if (gTasks[taskId].tMenuSelection < MENUITEM_CANCEL)
            gTasks[taskId].tMenuSelection++;
        else
            gTasks[taskId].tMenuSelection = 0;
        HighlightOptionMenuItem(gTasks[taskId].tMenuSelection);
    }
    else
    {
        u8 previousOption;

        switch (gTasks[taskId].tMenuSelection)
        {
        //case MENUITEM_TEXTSPEED:
        //    previousOption = gTasks[taskId].tTextSpeed;
        //    gTasks[taskId].tTextSpeed = TextSpeed_ProcessInput(gTasks[taskId].tTextSpeed);
//
        //    if (previousOption != gTasks[taskId].tTextSpeed)
        //        TextSpeed_DrawChoices(gTasks[taskId].tTextSpeed);
        //    break;case MENUITEM_BATTLEMODE
        case MENUITEM_RANDOMIZER:
            previousOption = gTasks[taskId].tRandomizer;
            gTasks[taskId].tRandomizer = Randomizer_ProcessInput(gTasks[taskId].tRandomizer);

            if (previousOption != gTasks[taskId].tRandomizer)
                Randomizer_DrawChoices(gTasks[taskId].tRandomizer);
            break;
        case MENUITEM_RANDO_MISC:
            previousOption = gTasks[taskId].tRandoMisc;
            gTasks[taskId].tRandoMisc = RandoMisc_ProcessInput(gTasks[taskId].tRandoMisc);

            if (previousOption != gTasks[taskId].tRandoMisc)
                RandoMisc_DrawChoices(gTasks[taskId].tRandoMisc);
            break;
        case MENUITEM_SCALING:
            previousOption = gTasks[taskId].tScaling;
            gTasks[taskId].tScaling = Scaling_ProcessInput(gTasks[taskId].tScaling);

            if (previousOption != gTasks[taskId].tScaling)
                Scaling_DrawChoices(gTasks[taskId].tScaling);
            break;
        case MENUITEM_COMPETITIVE:
            previousOption = gTasks[taskId].tCompetitive;
            gTasks[taskId].tCompetitive = Competitive_ProcessInput(gTasks[taskId].tCompetitive);

            if (previousOption != gTasks[taskId].tCompetitive)
                Competitive_DrawChoices(gTasks[taskId].tCompetitive);
            break;

            if (previousOption != gTasks[taskId].tWindowFrameType)
                FrameType_DrawChoices(gTasks[taskId].tWindowFrameType);
            break;
        case MENUITEM_SEASON:
            previousOption = gTasks[taskId].tSeason;
            gTasks[taskId].tSeason = Season_ProcessInput(gTasks[taskId].tSeason);

            if (previousOption != gTasks[taskId].tSeason)
                Season_DrawChoices(gTasks[taskId].tSeason);
            break;
        case MENUITEM_BATTLEMODE:
            previousOption = gTasks[taskId].tBattleMode;
            gTasks[taskId].tBattleMode = BattleMode_ProcessInput(gTasks[taskId].tBattleMode);

            if (previousOption != gTasks[taskId].tBattleMode)
                BattleMode_DrawChoices(gTasks[taskId].tBattleMode);
            break;
        default:
            return;
        }

        if (sArrowPressed)
        {
            sArrowPressed = FALSE;
            CopyWindowToVram(WIN_OPTIONS, COPYWIN_GFX);
        }
    }
}

static void Task_OptionMenuFadeIn_Pg2(u8 taskId)
{
    if (!gPaletteFade.active)
        gTasks[taskId].func = Task_OptionMenuProcessInput_Pg2;
}

static void Task_OptionMenuProcessInput_Pg2(u8 taskId)
{
    if (JOY_NEW(L_BUTTON) || JOY_NEW(R_BUTTON))
    {
        SaveCurrentSettings(taskId);
        FillWindowPixelBuffer(WIN_OPTIONS, PIXEL_FILL(1));
        ClearStdWindowAndFrame(WIN_OPTIONS, FALSE);
        sCurrPage = Process_ChangePage(sCurrPage);
        gTasks[taskId].func = Task_ChangePage;
    }
    else if (JOY_NEW(A_BUTTON))
    {
        if (gTasks[taskId].tMenuSelection == MENUITEM_CANCEL_PG2)
            gTasks[taskId].func = Task_OptionMenuSave;
    }
    else if (JOY_NEW(B_BUTTON))
    {
        gTasks[taskId].func = Task_OptionMenuSave;
    }
    else if (JOY_NEW(DPAD_UP))
    {
        if (gTasks[taskId].tMenuSelection > 0)
            gTasks[taskId].tMenuSelection--;
        else
            gTasks[taskId].tMenuSelection = MENUITEM_CANCEL_PG2;
        HighlightOptionMenuItem(gTasks[taskId].tMenuSelection);
    }
    else if (JOY_NEW(DPAD_DOWN))
    {
        if (gTasks[taskId].tMenuSelection < MENUITEM_CANCEL_PG2)
            gTasks[taskId].tMenuSelection++;
        else
            gTasks[taskId].tMenuSelection = 0;
        HighlightOptionMenuItem(gTasks[taskId].tMenuSelection);
    }
    else
    {
        u8 previousOption;

        switch (gTasks[taskId].tMenuSelection)
        {
        case MENUITEM_FOLLOWER:
            previousOption = gTasks[taskId].tFollower;
            gTasks[taskId].tFollower = Follower_ProcessInput(gTasks[taskId].tFollower);

            if (previousOption != gTasks[taskId].tFollower)
                Follower_DrawChoices(gTasks[taskId].tFollower);
            break;
        case MENUITEM_BATTLESCENE:
            previousOption = gTasks[taskId].tBattleSceneOff;
            gTasks[taskId].tBattleSceneOff = BattleScene_ProcessInput(gTasks[taskId].tBattleSceneOff);

            if (previousOption != gTasks[taskId].tBattleSceneOff)
                BattleScene_DrawChoices(gTasks[taskId].tBattleSceneOff);
            break;
        case MENUITEM_BATTLESTYLE:
            previousOption = gTasks[taskId].tBattleStyle;
            gTasks[taskId].tBattleStyle = BattleStyle_ProcessInput(gTasks[taskId].tBattleStyle);

            if (previousOption != gTasks[taskId].tBattleStyle)
                BattleStyle_DrawChoices(gTasks[taskId].tBattleStyle);
            break;
        case MENUITEM_SOUND:
            previousOption = gTasks[taskId].tSound;
            gTasks[taskId].tSound = Sound_ProcessInput(gTasks[taskId].tSound);

            if (previousOption != gTasks[taskId].tSound)
                Sound_DrawChoices(gTasks[taskId].tSound);
            break;
        case MENUITEM_BUTTONMODE:
            previousOption = gTasks[taskId].tButtonMode;
            gTasks[taskId].tButtonMode = ButtonMode_ProcessInput(gTasks[taskId].tButtonMode);

            if (previousOption != gTasks[taskId].tButtonMode)
                ButtonMode_DrawChoices(gTasks[taskId].tButtonMode);
            break;
        case MENUITEM_FRAMETYPE:
            previousOption = gTasks[taskId].tWindowFrameType;
            gTasks[taskId].tWindowFrameType = FrameType_ProcessInput(gTasks[taskId].tWindowFrameType);

        default:
            return;
        }

        if (sArrowPressed)
        {
            sArrowPressed = FALSE;
            CopyWindowToVram(WIN_OPTIONS, COPYWIN_GFX);
        }
    }
}

static void SaveCurrentSettings(u8 taskId)
{
    //gSaveBlock2Ptr->optionsTextSpeed = gTasks[taskId].tTextSpeed;
    gSaveBlock2Ptr->optionsBattleSceneOff = gTasks[taskId].tBattleSceneOff;
    gSaveBlock2Ptr->optionsBattleStyle = gTasks[taskId].tBattleStyle;
    gSaveBlock2Ptr->optionsSound = gTasks[taskId].tSound;
    gSaveBlock2Ptr->optionsButtonMode = gTasks[taskId].tButtonMode;
    gSaveBlock2Ptr->optionsWindowFrameType = gTasks[taskId].tWindowFrameType;
    gSaveBlock2Ptr->optionsSeason = gTasks[taskId].tSeason;
    gSaveBlock1Ptr->optionsRandomizer = gTasks[taskId].tRandomizer;
    gSaveBlock1Ptr->optionsRandoMisc = gTasks[taskId].tRandoMisc;
    gSaveBlock1Ptr->optionsScaling = gTasks[taskId].tScaling;
    gSaveBlock2Ptr->optionsCompetitive = gTasks[taskId].tCompetitive;

    VarSet(VAR_CURRENT_SEASON, gSaveBlock2Ptr->optionsSeason);
    if (gSaveBlock2Ptr->optionsCompetitive == 0) {
        FlagClear(FLAG_COMPETITIVE_MONS);
    } else 
    {
        FlagSet(FLAG_COMPETITIVE_MONS);
    }
    SaveRandomOptions();
    gSaveBlock2Ptr->battleMode = gTasks[taskId].tBattleMode;
    // Update follower visibility flag
    if (gTasks[taskId].tFollower == 0)
        FlagClear(FLAG_POKEMON_FOLLOWERS);
    else
        FlagSet(FLAG_POKEMON_FOLLOWERS);
}

static void Task_OptionMenuSave(u8 taskId)
{
    SaveCurrentSettings(taskId);
    BeginNormalPaletteFade(PALETTES_ALL, 0, 0, 16, RGB_BLACK);
    gTasks[taskId].func = Task_OptionMenuFadeOut;
}

static void Task_OptionMenuFadeOut(u8 taskId)
{
    if (!gPaletteFade.active)
    {
        DestroyTask(taskId);
        FreeAllWindowBuffers();
        SetMainCallback2(gMain.savedCallback);
    }
}

static void HighlightOptionMenuItem(u8 index)
{
    SetGpuReg(REG_OFFSET_WIN0H, WIN_RANGE(16, DISPLAY_WIDTH - 16));
    SetGpuReg(REG_OFFSET_WIN0V, WIN_RANGE(index * 16 + 40, index * 16 + 56));
}

static void DrawOptionMenuChoice(const u8 *text, u8 x, u8 y, u8 style)
{
    u8 dst[16];
    u16 i;

    for (i = 0; *text != EOS && i < ARRAY_COUNT(dst) - 1; i++)
        dst[i] = *(text++);

    if (style != 0)
    {
        dst[2] = TEXT_COLOR_RED;
        dst[5] = TEXT_COLOR_LIGHT_RED;
    }

    dst[i] = EOS;
    AddTextPrinterParameterized(WIN_OPTIONS, FONT_NORMAL, dst, x, y + 1, TEXT_SKIP_DRAW, NULL);
}

//static u8 TextSpeed_ProcessInput(u8 selection)
//{
//    if (JOY_NEW(DPAD_RIGHT))
//    {
//        if (selection <= 1)
//            selection++;
//        else
//            selection = 0;
//
//        sArrowPressed = TRUE;
//    }
//    if (JOY_NEW(DPAD_LEFT))
//    {
//        if (selection != 0)
//            selection--;
//        else
//            selection = 2;
//
//        sArrowPressed = TRUE;
//    }
//    return selection;
//}

//static void TextSpeed_DrawChoices(u8 selection)
//{
//    u8 styles[3];
//    s32 widthSlow, widthMid, widthFast, xMid;
//
//    styles[0] = 0;
//    styles[1] = 0;
//    styles[2] = 0;
//    styles[selection] = 1;
//
//    DrawOptionMenuChoice(gText_TextSpeedSlow, choicesXPos, YPOS_TEXTSPEED, styles[0]);
//
//    widthSlow = GetStringWidth(FONT_NORMAL, gText_TextSpeedSlow, 0);
//    widthMid = GetStringWidth(FONT_NORMAL, gText_TextSpeedMid, 0);
//    widthFast = GetStringWidth(FONT_NORMAL, gText_TextSpeedFast, 0);
//
//    widthMid -= 94;
//    xMid = (widthSlow - widthMid - widthFast) / 2 + choicesXPos;
//    DrawOptionMenuChoice(gText_TextSpeedMid, xMid, YPOS_TEXTSPEED, styles[1]);
//
//    DrawOptionMenuChoice(gText_TextSpeedFast, GetStringRightAlignXOffset(FONT_NORMAL, gText_TextSpeedFast, 198), YPOS_TEXTSPEED, styles[2]);
//}

static u8 Season_ProcessInput(u8 selection)
{
    if (JOY_NEW(DPAD_RIGHT))
    {
        if (selection < 3)   // 0,1,2 → increment
            selection++;
        else                 // 3 → wrap around to 0
            selection = 0;

        sArrowPressed = TRUE;
    }

    if (JOY_NEW(DPAD_LEFT))
    {
        if (selection > 0)   // 1,2,3 → decrement
            selection--;
        else                 // 0 → wrap around to 3
            selection = 3;

        sArrowPressed = TRUE;
    }

    return selection;
}

static void Season_DrawChoices(u8 selection)
{
    u8 styles[4];
    s32 x[4];
    s32 widths[4];
    const u8 *const names[] =
    {
        gText_SeasonSpring,
        gText_SeasonSummer,
        gText_SeasonFall,
        gText_SeasonWinter,
    };

    // Reset styles
    for (int i = 0; i < 4; i++)
        styles[i] = 0;

    styles[selection] = 1;

    // Get widths
    for (int i = 0; i < 4; i++)
        widths[i] = GetStringWidth(FONT_NORMAL, names[i], 0);

    // Layout: evenly space across the row
    // Left anchor same as TextSpeed (choicesXPos), right edge ~198
    s32 startX = choicesXPos;
    s32 endX = 198;
    s32 totalWidth = widths[0] + widths[1] + widths[2] + widths[3];
    s32 spacing = (endX - startX - totalWidth) / 3;

    x[0] = startX;
    x[1] = x[0] + widths[0] + spacing;
    x[2] = x[1] + widths[1] + spacing;
    x[3] = x[2] + widths[2] + spacing;

    // Draw all four
    for (int i = 0; i < 4; i++)
    {
        DrawOptionMenuChoice(names[i], x[i], YPOS_SEASON, styles[i]);
    }
}

static u8 BattleScene_ProcessInput(u8 selection)
{
    if (JOY_NEW(DPAD_LEFT | DPAD_RIGHT))
    {
        selection ^= 1;
        sArrowPressed = TRUE;
    }

    return selection;
}

static void BattleScene_DrawChoices(u8 selection)
{
    u8 styles[2];

    styles[0] = 0;
    styles[1] = 0;
    styles[selection] = 1;

    DrawOptionMenuChoice(gText_BattleSceneOn, choicesXPos, YPOS_BATTLESCENE, styles[0]);
    DrawOptionMenuChoice(gText_BattleSceneOff, GetStringRightAlignXOffset(FONT_NORMAL, gText_BattleSceneOff, 198), YPOS_BATTLESCENE, styles[1]);
}

static u8 Competitive_ProcessInput(u8 selection)
{
    if (JOY_NEW(DPAD_LEFT | DPAD_RIGHT))
    {
        selection ^= 1;
        sArrowPressed = TRUE;
    }

    return selection;
}

static void Competitive_DrawChoices(u8 selection)
{
    u8 styles[2];

    styles[0] = 0;
    styles[1] = 0;
    styles[selection] = 1;

    DrawOptionMenuChoice(gText_CompetitiveOff, choicesXPos, YPOS_COMPETITIVE, styles[0]);
    DrawOptionMenuChoice(gText_CompetitiveOn, GetStringRightAlignXOffset(FONT_NORMAL, gText_CompetitiveOn, 198), YPOS_COMPETITIVE, styles[1]);
}

static u8 Follower_ProcessInput(u8 selection)
{
    if (JOY_NEW(DPAD_LEFT | DPAD_RIGHT))
    {
        selection ^= 1;
        sArrowPressed = TRUE;
    }

    return selection;
}

static void Follower_DrawChoices(u8 selection)
{
    u8 styles[2];
    styles[0] = 0;
    styles[1] = 0;
    styles[selection] = 1;
    DrawOptionMenuChoice(gText_FollowerShow, choicesXPos, YPOS_FOLLOWER, styles[0]);
    DrawOptionMenuChoice(gText_FollowerHide, GetStringRightAlignXOffset(FONT_NORMAL, gText_FollowerHide, 198), YPOS_FOLLOWER, styles[1]);
}

static u8 BattleStyle_ProcessInput(u8 selection)
{
    if (JOY_NEW(DPAD_LEFT | DPAD_RIGHT))
    {
        selection ^= 1;
        sArrowPressed = TRUE;
    }

    return selection;
}

static void BattleStyle_DrawChoices(u8 selection)
{
    u8 styles[2];

    styles[0] = 0;
    styles[1] = 0;
    styles[selection] = 1;

    DrawOptionMenuChoice(gText_BattleStyleShift, choicesXPos, YPOS_BATTLESTYLE, styles[0]);
    DrawOptionMenuChoice(gText_BattleStyleSet, GetStringRightAlignXOffset(FONT_NORMAL, gText_BattleStyleSet, 198), YPOS_BATTLESTYLE, styles[1]);
}


static u8 Randomizer_ProcessInput(u8 selection)
{
    u8 lastOption = 4; // numberOptions - 1
    if (JOY_NEW(DPAD_RIGHT))
    {
        if (selection < lastOption)   // 0,1,2,3 → increment
            selection++;
        else                 // 4 → wrap around to 0
            selection = 0;

        sArrowPressed = TRUE;
    }

    if (JOY_NEW(DPAD_LEFT))
    {
        if (selection > 0)   // 1,2,3,4 → decrement
            selection--;
        else                 // 0 → wrap around to 4
            selection = lastOption;

        sArrowPressed = TRUE;
    }

    return selection;
}

static void Randomizer_DrawChoices(u8 selection)
{
    u8 numberOptions = 5;
    u8 styles[numberOptions];
    s32 x[numberOptions];
    s32 widths[numberOptions];
    const u8 *const names[] =
    {
        gText_RandomizerOff,
        gText_RandomizerRandom,
        gText_RandomizerLegendAware,
        gText_RandomizerBst,
        gText_RandomizerEvo,
    };

    // Reset styles
    for (int i = 0; i < numberOptions; i++)
        styles[i] = 0;

    styles[selection] = 1;

    // Get widths
    for (int i = 0; i < numberOptions; i++)
        widths[i] = GetStringWidth(FONT_NORMAL, names[i], 0);

    // Layout: evenly space across the row
    s32 startX = choicesXPos;
    s32 endX = 198;

    s32 totalWidth = 0;
    for (int i = 0; i < numberOptions; i++)
        totalWidth += widths[i];

    s32 spacing = (endX - startX - totalWidth) / 4;

    // Compute positions
    x[0] = startX;
    for (int i = 1; i < numberOptions; i++)
        x[i] = x[i - 1] + widths[i - 1] + spacing;

    // Draw all
    for (int i = 0; i < numberOptions; i++)
    {
        DrawOptionMenuChoice(names[i], x[i], YPOS_RANDOMIZER, styles[i]);
    }
}

//static const u8 gText_RandomizerOff[]   = _("{COLOR GREEN}{SHADOW LIGHT_GREEN}OFF");
//static const u8 gText_RandomizerRandom[]   = _("{COLOR GREEN}{SHADOW LIGHT_GREEN}RDM");
//static const u8 gText_RandomizerLegendAware[]   = _("{COLOR GREEN}{SHADOW LIGHT_GREEN}LGND");
//static const u8 gText_RandomizerBst[]   = _("{COLOR GREEN}{SHADOW LIGHT_GREEN}BST");
//static const u8 gText_RandomizerEvo[]   = _("{COLOR GREEN}{SHADOW LIGHT_GREEN}EVO");
//static const u8 gText_RandomizerMiscOff[]   = _("{COLOR GREEN}{SHADOW LIGHT_GREEN}OFF");
//static const u8 gText_RandomizerMiscItems[]   = _("{COLOR GREEN}{SHADOW LIGHT_GREEN}ITEMS");
//static const u8 gText_RandomizerMiscAbilities[]   = _("{COLOR GREEN}{SHADOW LIGHT_GREEN}ABILITES");
//static const u8 gText_RandomizerMiscBoth[]   = _("{COLOR GREEN}{SHADOW LIGHT_GREEN}BOTH");

static u8 RandoMisc_ProcessInput(u8 selection)
{
    if (JOY_NEW(DPAD_RIGHT))
    {
        if (selection < 3)   // 0,1,2 → increment
            selection++;
        else                 // 3 → wrap around to 0
            selection = 0;

        sArrowPressed = TRUE;
    }

    if (JOY_NEW(DPAD_LEFT))
    {
        if (selection > 0)   // 1,2,3 → decrement
            selection--;
        else                 // 0 → wrap around to 3
            selection = 3;

        sArrowPressed = TRUE;
    }

    return selection;
}

static void RandoMisc_DrawChoices(u8 selection)
{
    
    u8 styles[4];
    s32 x[4];
    s32 widths[4];
    const u8 *const names[] =
    {
        gText_RandomizerMiscOff,
        gText_RandomizerMiscItems,
        gText_RandomizerMiscAbilities,
        gText_RandomizerMiscBoth,
    };

    // Reset styles
    for (int i = 0; i < 4; i++)
        styles[i] = 0;

    styles[selection] = 1;

    // Get widths
    for (int i = 0; i < 4; i++)
        widths[i] = GetStringWidth(FONT_NORMAL, names[i], 0);

    // Layout: evenly space across the row
    // Left anchor same as TextSpeed (choicesXPos), right edge ~198
    s32 startX = choicesXPos;
    s32 endX = 198;
    s32 totalWidth = widths[0] + widths[1] + widths[2] + widths[3];
    s32 spacing = (endX - startX - totalWidth) / 3;

    x[0] = startX;
    x[1] = x[0] + widths[0] + spacing;
    x[2] = x[1] + widths[1] + spacing;
    x[3] = x[2] + widths[2] + spacing;

    // Draw all four
    for (int i = 0; i < 4; i++)
    {
        DrawOptionMenuChoice(names[i], x[i], YPOS_RANDO_MISC, styles[i]);
    }
}

static u8 Scaling_ProcessInput(u8 selection)
{
    if (JOY_NEW(DPAD_RIGHT))
    {
        if (selection < 3)
            selection++;
        else
            selection = 0;

        sArrowPressed = TRUE;
    }

    if (JOY_NEW(DPAD_LEFT))
    {
        if (selection > 0)
            selection--;
        else
            selection = 3;

        sArrowPressed = TRUE;
    }

    return selection;
}

static void Scaling_DrawChoices(u8 selection)
{
    u8 styles[4];
    s32 x[4];
    s32 widths[4];
    const u8 *const names[] =
    {
        gText_ScalingOff,
        gText_ScalingEasy,
        gText_ScalingNormal,
        gText_ScalingHard,
    };

    // Reset styles
    for (int i = 0; i < 4; i++)
        styles[i] = 0;

    styles[selection] = 1;

    // Get widths
    for (int i = 0; i < 4; i++)
        widths[i] = GetStringWidth(FONT_NORMAL, names[i], 0);

    // Layout: evenly space across the row
    s32 startX = choicesXPos;
    s32 endX = 198;

    s32 totalWidth = 0;
    for (int i = 0; i < 4; i++)
        totalWidth += widths[i];

    s32 spacing = (endX - startX - totalWidth) / 2;

    // Compute positions
    x[0] = startX;
    for (int i = 1; i < 4; i++)
        x[i] = x[i - 1] + widths[i - 1] + spacing;

    // Draw all three
    for (int i = 0; i < 4; i++)
    {
        DrawOptionMenuChoice(names[i], x[i], YPOS_SCALING, styles[i]);
    }
}


static u8 Sound_ProcessInput(u8 selection)
{
    if (JOY_NEW(DPAD_LEFT | DPAD_RIGHT))
    {
        selection ^= 1;
        SetPokemonCryStereo(selection);
        sArrowPressed = TRUE;
    }

    return selection;
}

static void Sound_DrawChoices(u8 selection)
{
    u8 styles[2];

    styles[0] = 0;
    styles[1] = 0;
    styles[selection] = 1;

    DrawOptionMenuChoice(gText_SoundMono, choicesXPos, YPOS_SOUND, styles[0]);
    DrawOptionMenuChoice(gText_SoundStereo, GetStringRightAlignXOffset(FONT_NORMAL, gText_SoundStereo, 198), YPOS_SOUND, styles[1]);
}

static u8 FrameType_ProcessInput(u8 selection)
{
    if (JOY_NEW(DPAD_RIGHT))
    {
        if (selection < WINDOW_FRAMES_COUNT - 1)
            selection++;
        else
            selection = 0;

        LoadBgTiles(1, GetWindowFrameTilesPal(selection)->tiles, 0x120, 0x1A2);
        LoadPalette(GetWindowFrameTilesPal(selection)->pal, BG_PLTT_ID(7), PLTT_SIZE_4BPP);
        sArrowPressed = TRUE;
    }
    if (JOY_NEW(DPAD_LEFT))
    {
        if (selection != 0)
            selection--;
        else
            selection = WINDOW_FRAMES_COUNT - 1;

        LoadBgTiles(1, GetWindowFrameTilesPal(selection)->tiles, 0x120, 0x1A2);
        LoadPalette(GetWindowFrameTilesPal(selection)->pal, BG_PLTT_ID(7), PLTT_SIZE_4BPP);
        sArrowPressed = TRUE;
    }
    return selection;
}

static void FrameType_DrawChoices(u8 selection)
{
    u8 text[16] = {EOS};
    u8 n = selection + 1;
    u16 i;

    for (i = 0; gText_FrameTypeNumber[i] != EOS && i <= 5; i++)
        text[i] = gText_FrameTypeNumber[i];

    // Convert a number to decimal string
    if (n / 10 != 0)
    {
        text[i] = n / 10 + CHAR_0;
        i++;
        text[i] = n % 10 + CHAR_0;
        i++;
    }
    else
    {
        text[i] = n % 10 + CHAR_0;
        i++;
        text[i] = CHAR_SPACER;
        i++;
    }

    text[i] = EOS;

    DrawOptionMenuChoice(gText_FrameType, choicesXPos, YPOS_FRAMETYPE, 0);
    DrawOptionMenuChoice(text, 128, YPOS_FRAMETYPE, 1);
}

static u8 ButtonMode_ProcessInput(u8 selection)
{
    if (JOY_NEW(DPAD_RIGHT))
    {
        if (selection <= 1)
            selection++;
        else
            selection = 0;

        sArrowPressed = TRUE;
    }
    if (JOY_NEW(DPAD_LEFT))
    {
        if (selection != 0)
            selection--;
        else
            selection = 2;

        sArrowPressed = TRUE;
    }
    return selection;
}

static void ButtonMode_DrawChoices(u8 selection)
{
    s32 widthNormal, widthLR, widthLA, xLR;
    u8 styles[3];

    styles[0] = 0;
    styles[1] = 0;
    styles[2] = 0;
    styles[selection] = 1;

    DrawOptionMenuChoice(gText_ButtonTypeNormal, choicesXPos, YPOS_BUTTONMODE, styles[0]);

    widthNormal = GetStringWidth(FONT_NORMAL, gText_ButtonTypeNormal, 0);
    widthLR = GetStringWidth(FONT_NORMAL, gText_ButtonTypeLR, 0);
    widthLA = GetStringWidth(FONT_NORMAL, gText_ButtonTypeLEqualsA, 0);

    widthLR -= 94;
    xLR = (widthNormal - widthLR - widthLA) / 2 + choicesXPos;
    DrawOptionMenuChoice(gText_ButtonTypeLR, xLR, YPOS_BUTTONMODE, styles[1]);

    DrawOptionMenuChoice(gText_ButtonTypeLEqualsA, GetStringRightAlignXOffset(FONT_NORMAL, gText_ButtonTypeLEqualsA, 198), YPOS_BUTTONMODE, styles[2]);
}

static u8 BattleMode_ProcessInput(u8 selection)
{
    if (JOY_NEW(DPAD_RIGHT))
    {
        if (selection <= 1)
            selection++;
        else
            selection = 0;

        sArrowPressed = TRUE;
    }
    if (JOY_NEW(DPAD_LEFT))
    {
        if (selection != 0)
            selection--;
        else
            selection = 2;

        sArrowPressed = TRUE;
    }
    return selection;
}

static void BattleMode_DrawChoices(u8 selection)
{
    u8 styles[3];
    s32 widthSingles, widthDoubles, widthMixed, xMid;

    styles[0] = 0;
    styles[1] = 0;
    styles[2] = 0;
    styles[selection] = 1;

    DrawOptionMenuChoice(gText_BattleModeSingles, 104, YPOS_BATTLEMODE, styles[0]);

    widthSingles = GetStringWidth(FONT_NORMAL, gText_BattleModeSingles, 0);
    widthDoubles = GetStringWidth(FONT_NORMAL, gText_BattleModeDoubles, 0);
    widthMixed = GetStringWidth(FONT_NORMAL, gText_BattleModeMixed, 0);

    widthDoubles -= 94;
    xMid = (widthSingles - widthDoubles - widthMixed) / 2 + 104;
    DrawOptionMenuChoice(gText_BattleModeDoubles, xMid, YPOS_BATTLEMODE, styles[1]);

    DrawOptionMenuChoice(gText_BattleModeMixed, GetStringRightAlignXOffset(FONT_NORMAL, gText_BattleModeMixed, 198), YPOS_BATTLEMODE, styles[2]);
}

static void DrawTextOption(void)
{
    u32 i, widthOptions, xMid;
    // Buffer for page indicators: dots + spaces + null terminator
    // Sized for PAGE_COUNT dots, (PAGE_COUNT-1) spaces, and multi-byte characters
    u8 pageDots[16] = _("");
    widthOptions = GetStringWidth(FONT_NORMAL, gText_Option, 0);

    for (i = 0; i < PAGE_COUNT; i++)
    {
        if (i == sCurrPage)
            StringAppend(pageDots, gText_LargeDot);
        else
            StringAppend(pageDots, gText_SmallDot);
        if (i < PAGE_COUNT - 1)
            StringAppend(pageDots, gText_Space);            
    }
    xMid = (8 + widthOptions + 5);
    FillWindowPixelBuffer(WIN_HEADER, PIXEL_FILL(1));
    AddTextPrinterParameterized(WIN_HEADER, FONT_NORMAL, gText_Option, 8, 1, TEXT_SKIP_DRAW, NULL);
    AddTextPrinterParameterized(WIN_HEADER, FONT_NORMAL, pageDots, xMid, 1, TEXT_SKIP_DRAW, NULL);
    AddTextPrinterParameterized(WIN_HEADER, FONT_NORMAL, gText_PageNav, GetStringRightAlignXOffset(FONT_NORMAL, gText_PageNav, 198), 1, TEXT_SKIP_DRAW, NULL);
    CopyWindowToVram(WIN_HEADER, COPYWIN_FULL);
}

static void DrawOptionMenuTexts(void)
{
    u8 i, items;
    const u8* const* menu = NULL;

    switch (sCurrPage){
    case 1:
        items = MENUITEM_COUNT_PG2;
        menu = sOptionMenuItemsNames_Pg2;
        break;
    default:
    case 0:
        items = MENUITEM_COUNT;
        menu = sOptionMenuItemsNames;
        break;
    }

    FillWindowPixelBuffer(WIN_OPTIONS, PIXEL_FILL(1));
    for (i = 0; i < items; i++)
        AddTextPrinterParameterized(WIN_OPTIONS, FONT_NORMAL, menu[i], 8, (i * 16) + 1, TEXT_SKIP_DRAW, NULL);
    CopyWindowToVram(WIN_OPTIONS, COPYWIN_FULL);
}

#define TILE_TOP_CORNER_L 0x1A2
#define TILE_TOP_EDGE     0x1A3
#define TILE_TOP_CORNER_R 0x1A4
#define TILE_LEFT_EDGE    0x1A5
#define TILE_RIGHT_EDGE   0x1A7
#define TILE_BOT_CORNER_L 0x1A8
#define TILE_BOT_EDGE     0x1A9
#define TILE_BOT_CORNER_R 0x1AA

static void DrawBgWindowFrames(void)
{
    //                     bg, tile,              x, y, width, height, palNum
    // Draw title window frame
    FillBgTilemapBufferRect(1, TILE_TOP_CORNER_L,  1,  0,  1,  1,  7);
    FillBgTilemapBufferRect(1, TILE_TOP_EDGE,      2,  0, 27,  1,  7);
    FillBgTilemapBufferRect(1, TILE_TOP_CORNER_R, 28,  0,  1,  1,  7);
    FillBgTilemapBufferRect(1, TILE_LEFT_EDGE,     1,  1,  1,  2,  7);
    FillBgTilemapBufferRect(1, TILE_RIGHT_EDGE,   28,  1,  1,  2,  7);
    FillBgTilemapBufferRect(1, TILE_BOT_CORNER_L,  1,  3,  1,  1,  7);
    FillBgTilemapBufferRect(1, TILE_BOT_EDGE,      2,  3, 27,  1,  7);
    FillBgTilemapBufferRect(1, TILE_BOT_CORNER_R, 28,  3,  1,  1,  7);

    // Draw options list window frame
    FillBgTilemapBufferRect(1, TILE_TOP_CORNER_L,  1,  4,  1,  1,  7);
    FillBgTilemapBufferRect(1, TILE_TOP_EDGE,      2,  4, 26,  1,  7);
    FillBgTilemapBufferRect(1, TILE_TOP_CORNER_R, 28,  4,  1,  1,  7);
    FillBgTilemapBufferRect(1, TILE_LEFT_EDGE,     1,  5,  1, 18,  7);
    FillBgTilemapBufferRect(1, TILE_RIGHT_EDGE,   28,  5,  1, 18,  7);
    FillBgTilemapBufferRect(1, TILE_BOT_CORNER_L,  1, 19,  1,  1,  7);
    FillBgTilemapBufferRect(1, TILE_BOT_EDGE,      2, 19, 26,  1,  7);
    FillBgTilemapBufferRect(1, TILE_BOT_CORNER_R, 28, 19,  1,  1,  7);

    CopyBgTilemapBufferToVram(1);
}
