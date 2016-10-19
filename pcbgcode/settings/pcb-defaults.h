//
// Default values for generating gcode from a PCB.
//
// These settings were last changed with pcb-gcode-setup: 10.10.2016 15.47
//
//
// Changes you make in this file will be overwritten if you use pcb-gcode-setup.
//

int SINGLE_PASS = NO;
real ISO_MIN = 0.000000;
real ISO_MAX = 0.508000;
real ISO_STEP = 0.129007;

int GENERATE_TOP_OUTLINES = NO;
int GENERATE_TOP_DRILL = NO;
int GENERATE_TOP_FILL = NO;
int GENERATE_TOP_STENCIL = NO;

int GENERATE_BOTTOM_OUTLINES = NO;
int GENERATE_BOTTOM_DRILL = YES;
int GENERATE_BOTTOM_FILL = NO;
int GENERATE_BOTTOM_STENCIL = NO;

int MIRROR_BOTTOM = NO;
int SIMPLE_DRILL_CODE = YES;

int GENERATE_MILLING = YES;
int CLIMB_MILLING = YES;

int GENERATE_TEXT = NO;

int SPOT_DRILL = YES;
real SPOT_DRILL_DEPTH = -0.127000;

int DO_TOOL_CHANGE_WITH_ZERO_STEP = YES;

int FLIP_BOARD_IN_Y = NO;

//int OUTPUT_UNITS = U_MICRONS;
int OUTPUT_UNITS = U_MILLIMETERS;
//int OUTPUT_UNITS = U_MILS;
//int OUTPUT_UNITS = U_INCHES;
string NC_OPERATOR_MESSAGE = "";
int PREVIEW_WINDOW_WIDTH = 800;
int PREVIEW_WINDOW_HEIGHT = 600;