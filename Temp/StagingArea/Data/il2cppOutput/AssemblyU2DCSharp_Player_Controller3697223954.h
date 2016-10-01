#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.AudioSource
struct AudioSource_t1135106623;
// Game_Controller
struct Game_Controller_t870087863;
// UnityEngine.AudioClip
struct AudioClip_t1932558630;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Player_Controller
struct  Player_Controller_t3697223954  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Transform Player_Controller::_transform
	Transform_t3275118058 * ____transform_2;
	// UnityEngine.AudioSource Player_Controller::_source
	AudioSource_t1135106623 * ____source_3;
	// Game_Controller Player_Controller::controller
	Game_Controller_t870087863 * ___controller_4;
	// UnityEngine.AudioClip Player_Controller::Hit_Sound
	AudioClip_t1932558630 * ___Hit_Sound_5;
	// UnityEngine.AudioClip Player_Controller::Caught_Ball_Sound
	AudioClip_t1932558630 * ___Caught_Ball_Sound_6;

public:
	inline static int32_t get_offset_of__transform_2() { return static_cast<int32_t>(offsetof(Player_Controller_t3697223954, ____transform_2)); }
	inline Transform_t3275118058 * get__transform_2() const { return ____transform_2; }
	inline Transform_t3275118058 ** get_address_of__transform_2() { return &____transform_2; }
	inline void set__transform_2(Transform_t3275118058 * value)
	{
		____transform_2 = value;
		Il2CppCodeGenWriteBarrier(&____transform_2, value);
	}

	inline static int32_t get_offset_of__source_3() { return static_cast<int32_t>(offsetof(Player_Controller_t3697223954, ____source_3)); }
	inline AudioSource_t1135106623 * get__source_3() const { return ____source_3; }
	inline AudioSource_t1135106623 ** get_address_of__source_3() { return &____source_3; }
	inline void set__source_3(AudioSource_t1135106623 * value)
	{
		____source_3 = value;
		Il2CppCodeGenWriteBarrier(&____source_3, value);
	}

	inline static int32_t get_offset_of_controller_4() { return static_cast<int32_t>(offsetof(Player_Controller_t3697223954, ___controller_4)); }
	inline Game_Controller_t870087863 * get_controller_4() const { return ___controller_4; }
	inline Game_Controller_t870087863 ** get_address_of_controller_4() { return &___controller_4; }
	inline void set_controller_4(Game_Controller_t870087863 * value)
	{
		___controller_4 = value;
		Il2CppCodeGenWriteBarrier(&___controller_4, value);
	}

	inline static int32_t get_offset_of_Hit_Sound_5() { return static_cast<int32_t>(offsetof(Player_Controller_t3697223954, ___Hit_Sound_5)); }
	inline AudioClip_t1932558630 * get_Hit_Sound_5() const { return ___Hit_Sound_5; }
	inline AudioClip_t1932558630 ** get_address_of_Hit_Sound_5() { return &___Hit_Sound_5; }
	inline void set_Hit_Sound_5(AudioClip_t1932558630 * value)
	{
		___Hit_Sound_5 = value;
		Il2CppCodeGenWriteBarrier(&___Hit_Sound_5, value);
	}

	inline static int32_t get_offset_of_Caught_Ball_Sound_6() { return static_cast<int32_t>(offsetof(Player_Controller_t3697223954, ___Caught_Ball_Sound_6)); }
	inline AudioClip_t1932558630 * get_Caught_Ball_Sound_6() const { return ___Caught_Ball_Sound_6; }
	inline AudioClip_t1932558630 ** get_address_of_Caught_Ball_Sound_6() { return &___Caught_Ball_Sound_6; }
	inline void set_Caught_Ball_Sound_6(AudioClip_t1932558630 * value)
	{
		___Caught_Ball_Sound_6 = value;
		Il2CppCodeGenWriteBarrier(&___Caught_Ball_Sound_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
