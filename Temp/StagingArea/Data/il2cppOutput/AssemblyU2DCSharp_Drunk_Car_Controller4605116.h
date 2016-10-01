#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
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

// Drunk_Car_Controller
struct  Drunk_Car_Controller_t4605116  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 Drunk_Car_Controller::_speed
	int32_t ____speed_2;
	// System.Int32 Drunk_Car_Controller::_drift
	int32_t ____drift_3;
	// System.String Drunk_Car_Controller::_driftPosition
	String_t* ____driftPosition_4;
	// UnityEngine.Transform Drunk_Car_Controller::_transform
	Transform_t3275118058 * ____transform_5;
	// Game_Controller Drunk_Car_Controller::controller
	Game_Controller_t870087863 * ___controller_6;

public:
	inline static int32_t get_offset_of__speed_2() { return static_cast<int32_t>(offsetof(Drunk_Car_Controller_t4605116, ____speed_2)); }
	inline int32_t get__speed_2() const { return ____speed_2; }
	inline int32_t* get_address_of__speed_2() { return &____speed_2; }
	inline void set__speed_2(int32_t value)
	{
		____speed_2 = value;
	}

	inline static int32_t get_offset_of__drift_3() { return static_cast<int32_t>(offsetof(Drunk_Car_Controller_t4605116, ____drift_3)); }
	inline int32_t get__drift_3() const { return ____drift_3; }
	inline int32_t* get_address_of__drift_3() { return &____drift_3; }
	inline void set__drift_3(int32_t value)
	{
		____drift_3 = value;
	}

	inline static int32_t get_offset_of__driftPosition_4() { return static_cast<int32_t>(offsetof(Drunk_Car_Controller_t4605116, ____driftPosition_4)); }
	inline String_t* get__driftPosition_4() const { return ____driftPosition_4; }
	inline String_t** get_address_of__driftPosition_4() { return &____driftPosition_4; }
	inline void set__driftPosition_4(String_t* value)
	{
		____driftPosition_4 = value;
		Il2CppCodeGenWriteBarrier(&____driftPosition_4, value);
	}

	inline static int32_t get_offset_of__transform_5() { return static_cast<int32_t>(offsetof(Drunk_Car_Controller_t4605116, ____transform_5)); }
	inline Transform_t3275118058 * get__transform_5() const { return ____transform_5; }
	inline Transform_t3275118058 ** get_address_of__transform_5() { return &____transform_5; }
	inline void set__transform_5(Transform_t3275118058 * value)
	{
		____transform_5 = value;
		Il2CppCodeGenWriteBarrier(&____transform_5, value);
	}

	inline static int32_t get_offset_of_controller_6() { return static_cast<int32_t>(offsetof(Drunk_Car_Controller_t4605116, ___controller_6)); }
	inline Game_Controller_t870087863 * get_controller_6() const { return ___controller_6; }
	inline Game_Controller_t870087863 ** get_address_of_controller_6() { return &___controller_6; }
	inline void set_controller_6(Game_Controller_t870087863 * value)
	{
		___controller_6 = value;
		Il2CppCodeGenWriteBarrier(&___controller_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
