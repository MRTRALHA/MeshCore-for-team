#pragma once

// =============================================================================
// TEAM custom protocol extensions for MeshCore companion_radio
//
// CMD and RESP codes use the 200-254 range so they never overlap with
// upstream stock codes (currently maxing out at CMD 64 / RESP 28).
// Keep all TEAM-specific protocol constants here to avoid merge conflicts
// when pulling upstream changes into MyMesh.cpp.
// =============================================================================

// TEAM custom command codes (200-254)
#define CMD_GET_RADIO_SETTINGS        200
#define CMD_SET_MAX_HOPS              201  // Adaptive forwarding control
#define CMD_SET_FORWARD_LIST          202  // [count][6-byte pubkey prefix] * count
#define CMD_GET_AUTONOMOUS_SETTINGS   203  // returns persisted autonomous settings
#define CMD_SET_AUTONOMOUS_SETTINGS   204  // set persisted autonomous settings

// TEAM custom response codes (200-254)
#define RESP_CODE_AUTONOMOUS_SETTINGS 200
