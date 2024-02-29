#ifndef CONFIG_HPP
#define CONFIG_HPP
#pragma once
#include <string>
#include "xor.hpp"

namespace {
	// Config
	const ::std::string NAME = XorStr("UCHF");
	const ::std::string CHEAT_VERSION = XorStr("v1.3.3");
	const ::std::string RELEASE_DATE = XorStr("[29 February, 2024]");
	const wchar_t* HOST = L"api.github.com";
	const wchar_t* PATH = L"/repos/dimalmfao/uchf/tags?per_page=1";
	const wchar_t* TARGET = L"cs2.exe"; // to change cuz dont knwo the cs2 exe name
	const wchar_t* CLIENT_DLL = L"client.dll"; 
	const wchar_t* ENGINE_DLL = L"engine.dll"; //              ^
	LPCSTR WINDOW_NAME = "Counter-Strike 2"; // same with this ^

	// Common
	struct coords_vector {
		float x, y, z;
	};

	struct hacks_coords {
		COORD no_flash, activate_trigger, use_trigger, enemy_wh, radar_hack, bunny_hop, aimbot, process, game, version, language;
	};

	struct hacks_state {
		bool no_flash = false;
		bool activate_trigger = false;
		bool use_trigger = false;
		bool enemy_wh = false;
		bool radar_hack = false;
		bool bunny_hop = false;
		bool aimbot = false;
		bool process = false; 
		bool game = false;
	};
}
#endif