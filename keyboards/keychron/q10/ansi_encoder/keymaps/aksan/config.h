// Configure the global tapping term (default: 200ms)
#define TAPPING_TERM 200
#define TAPPING_TERM_PER_KEY

// Enable rapid switch from tap to hold, disables double tap hold auto-repeat.
#define QUICK_TAP_TERM 0

// Disabling PERMISSIVE_HOLD due to too many misfires due to timing of finger release
// #define PERMISSIVE_HOLD

#define CHORDAL_HOLD

// Timeout for caps word to turn off when no keys are pressed
#define CAPS_WORD_IDLE_TIMEOUT 3000 // in ms
// Temporarily un-shift characters in the middle of caps word
#define CAPS_WORD_INVERT_ON_SHIFT

// Set threshold for holding key to get shifted state
#define AUTO_SHIFT_TIMEOUT 170 // in ms
// Allow shifted state to repeat by holding key beyond AUTO_SHIFT_TIMEOUT
#define AUTO_SHIFT_REPEAT
// Do not auto shift alpha characters due to HRM
#define NO_AUTO_SHIFT_ALPHA
// Do not auto shift symbols because :; is used for HRM and cannot be used for auto shift,
// so don't want to auto shift other symbols for consistency
#define NO_AUTO_SHIFT_SYMBOLS 