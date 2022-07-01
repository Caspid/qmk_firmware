# MCU name
MCU = STM32F072

# Bootloader selection
BOOTLOADER = stm32-dfu

# Enter lower-power sleep mode when on the ChibiOS idle thread
OPT_DEFS += -DCORTEX_ENABLE_WFI_IDLE=TRUE

# Build Options
#   change yes to no to disable
#
BOOTMAGIC_ENABLE = yes      # Enable Bootmagic Lite
EXTRAKEY_ENABLE = yes       # Audio control and System control
NKRO_ENABLE = yes           # Enable N-Key Rollover
BACKLIGHT_ENABLE = no       # Enable keyboard backlight functionality
RGBLIGHT_ENABLE = no        # Enable keyboard RGB underglow
AUDIO_ENABLE = no           # Audio output

# Newly disabled
COMMAND_ENABLE = no        # Commands for debug and configuration
CONSOLE_ENABLE = no        # Console for debug
MOUSEKEY_ENABLE = no       # Mouse keys


# New additions
DEBOUNCE_TYPE = asym_eager_defer_pk
## DEBOUNCE_TYPE = sym_eager_pk
KEY_OVERRIDE_ENABLE = yes
VIA_ENABLE = yes
# Will change this later
LEADER_ENABLE = no
UNICODE_ENABLE = no
TAP_DANCE_ENABLE = no

LTO_ENABLE = yes 	# Decreases firmware size 
MUSIC_ENABLE = no
