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
// Game_Controller
struct Game_Controller_t870087863;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Car_Controller
struct  Car_Controller_t3672093505  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Transform Car_Controller::_transform
	Transform_t3275118058 * ____transform_2;
	// System.Int32 Car_Controller::Speed
	int32_t ___Speed_3;
	// Game_Controller Car_Controller::controller
	Game_Controller_t870087863 * ___controller_4;

public:
	inline static int32_t get_offset_of__transform_2() { return static_cast<int32_t>(offsetof(Car_Controller_t3672093505, ____transform_2)); }
	inline Transform_t3275118058 * get__transform_2() const { return ____transform_2; }
	inline Transform_t3275118058 ** get_address_of__transform_2() { return &____transform_2; }
	inline void set__transform_2(Transform_t3275118058 * value)
	{
		____transform_2 = value;
		Il2CppCodeGenWriteBarrier(&____transform_2, value);
	}

	inline static int32_t get_offset_of_Speed_3() { return static_cast<int32_t>(offsetof(Car_Controller_t3672093505, ___Speed_3)); }
	inline int32_t get_Speed_3() const { return ___Speed_3; }
	inline int32_t* get_address_of_Speed_3() { return &___Speed_3; }
	inline void set_Speed_3(int32_t value)
	{
		___Speed_3 = value;
	}

	inline static int32_t get_offset_of_controller_4() { return static_cast<int32_t>(offsetof(Car_Controller_t3672093505, ___controller_4)); }
	inline Game_Controller_t870087863 * get_controller_4() const { return ___controller_4; }
	inline Game_Controller_t870087863 ** get_address_of_controller_4() { return &___controller_4; }
	inline void set_controller_4(Game_Controller_t870087863 * value)
	{
		___controller_4 = value;
		Il2CppCodeGenWriteBarrier(&___controller_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
