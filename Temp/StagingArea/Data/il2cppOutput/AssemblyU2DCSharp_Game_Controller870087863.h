#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Text
struct Text_t356221433;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.AudioSource
struct AudioSource_t1135106623;
// UnityEngine.AudioClip
struct AudioClip_t1932558630;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Game_Controller
struct  Game_Controller_t870087863  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Text Game_Controller::scoreText
	Text_t356221433 * ___scoreText_2;
	// UnityEngine.UI.Text Game_Controller::livesText
	Text_t356221433 * ___livesText_3;
	// UnityEngine.UI.Text Game_Controller::GameOverText
	Text_t356221433 * ___GameOverText_4;
	// UnityEngine.GameObject Game_Controller::Car01
	GameObject_t1756533147 * ___Car01_5;
	// UnityEngine.GameObject Game_Controller::Car02
	GameObject_t1756533147 * ___Car02_6;
	// UnityEngine.GameObject Game_Controller::Car03
	GameObject_t1756533147 * ___Car03_7;
	// UnityEngine.GameObject Game_Controller::Car04
	GameObject_t1756533147 * ___Car04_8;
	// UnityEngine.GameObject Game_Controller::Ball
	GameObject_t1756533147 * ___Ball_9;
	// UnityEngine.AudioSource Game_Controller::_source
	AudioSource_t1135106623 * ____source_10;
	// System.Int32 Game_Controller::score
	int32_t ___score_11;
	// System.Int32 Game_Controller::livesNumber
	int32_t ___livesNumber_12;
	// System.Int32 Game_Controller::plus1000
	int32_t ___plus1000_13;
	// System.Int32 Game_Controller::NumberOfCars
	int32_t ___NumberOfCars_14;
	// System.Boolean Game_Controller::IsGameOver
	bool ___IsGameOver_15;
	// UnityEngine.AudioClip Game_Controller::Hit_Car
	AudioClip_t1932558630 * ___Hit_Car_16;

public:
	inline static int32_t get_offset_of_scoreText_2() { return static_cast<int32_t>(offsetof(Game_Controller_t870087863, ___scoreText_2)); }
	inline Text_t356221433 * get_scoreText_2() const { return ___scoreText_2; }
	inline Text_t356221433 ** get_address_of_scoreText_2() { return &___scoreText_2; }
	inline void set_scoreText_2(Text_t356221433 * value)
	{
		___scoreText_2 = value;
		Il2CppCodeGenWriteBarrier(&___scoreText_2, value);
	}

	inline static int32_t get_offset_of_livesText_3() { return static_cast<int32_t>(offsetof(Game_Controller_t870087863, ___livesText_3)); }
	inline Text_t356221433 * get_livesText_3() const { return ___livesText_3; }
	inline Text_t356221433 ** get_address_of_livesText_3() { return &___livesText_3; }
	inline void set_livesText_3(Text_t356221433 * value)
	{
		___livesText_3 = value;
		Il2CppCodeGenWriteBarrier(&___livesText_3, value);
	}

	inline static int32_t get_offset_of_GameOverText_4() { return static_cast<int32_t>(offsetof(Game_Controller_t870087863, ___GameOverText_4)); }
	inline Text_t356221433 * get_GameOverText_4() const { return ___GameOverText_4; }
	inline Text_t356221433 ** get_address_of_GameOverText_4() { return &___GameOverText_4; }
	inline void set_GameOverText_4(Text_t356221433 * value)
	{
		___GameOverText_4 = value;
		Il2CppCodeGenWriteBarrier(&___GameOverText_4, value);
	}

	inline static int32_t get_offset_of_Car01_5() { return static_cast<int32_t>(offsetof(Game_Controller_t870087863, ___Car01_5)); }
	inline GameObject_t1756533147 * get_Car01_5() const { return ___Car01_5; }
	inline GameObject_t1756533147 ** get_address_of_Car01_5() { return &___Car01_5; }
	inline void set_Car01_5(GameObject_t1756533147 * value)
	{
		___Car01_5 = value;
		Il2CppCodeGenWriteBarrier(&___Car01_5, value);
	}

	inline static int32_t get_offset_of_Car02_6() { return static_cast<int32_t>(offsetof(Game_Controller_t870087863, ___Car02_6)); }
	inline GameObject_t1756533147 * get_Car02_6() const { return ___Car02_6; }
	inline GameObject_t1756533147 ** get_address_of_Car02_6() { return &___Car02_6; }
	inline void set_Car02_6(GameObject_t1756533147 * value)
	{
		___Car02_6 = value;
		Il2CppCodeGenWriteBarrier(&___Car02_6, value);
	}

	inline static int32_t get_offset_of_Car03_7() { return static_cast<int32_t>(offsetof(Game_Controller_t870087863, ___Car03_7)); }
	inline GameObject_t1756533147 * get_Car03_7() const { return ___Car03_7; }
	inline GameObject_t1756533147 ** get_address_of_Car03_7() { return &___Car03_7; }
	inline void set_Car03_7(GameObject_t1756533147 * value)
	{
		___Car03_7 = value;
		Il2CppCodeGenWriteBarrier(&___Car03_7, value);
	}

	inline static int32_t get_offset_of_Car04_8() { return static_cast<int32_t>(offsetof(Game_Controller_t870087863, ___Car04_8)); }
	inline GameObject_t1756533147 * get_Car04_8() const { return ___Car04_8; }
	inline GameObject_t1756533147 ** get_address_of_Car04_8() { return &___Car04_8; }
	inline void set_Car04_8(GameObject_t1756533147 * value)
	{
		___Car04_8 = value;
		Il2CppCodeGenWriteBarrier(&___Car04_8, value);
	}

	inline static int32_t get_offset_of_Ball_9() { return static_cast<int32_t>(offsetof(Game_Controller_t870087863, ___Ball_9)); }
	inline GameObject_t1756533147 * get_Ball_9() const { return ___Ball_9; }
	inline GameObject_t1756533147 ** get_address_of_Ball_9() { return &___Ball_9; }
	inline void set_Ball_9(GameObject_t1756533147 * value)
	{
		___Ball_9 = value;
		Il2CppCodeGenWriteBarrier(&___Ball_9, value);
	}

	inline static int32_t get_offset_of__source_10() { return static_cast<int32_t>(offsetof(Game_Controller_t870087863, ____source_10)); }
	inline AudioSource_t1135106623 * get__source_10() const { return ____source_10; }
	inline AudioSource_t1135106623 ** get_address_of__source_10() { return &____source_10; }
	inline void set__source_10(AudioSource_t1135106623 * value)
	{
		____source_10 = value;
		Il2CppCodeGenWriteBarrier(&____source_10, value);
	}

	inline static int32_t get_offset_of_score_11() { return static_cast<int32_t>(offsetof(Game_Controller_t870087863, ___score_11)); }
	inline int32_t get_score_11() const { return ___score_11; }
	inline int32_t* get_address_of_score_11() { return &___score_11; }
	inline void set_score_11(int32_t value)
	{
		___score_11 = value;
	}

	inline static int32_t get_offset_of_livesNumber_12() { return static_cast<int32_t>(offsetof(Game_Controller_t870087863, ___livesNumber_12)); }
	inline int32_t get_livesNumber_12() const { return ___livesNumber_12; }
	inline int32_t* get_address_of_livesNumber_12() { return &___livesNumber_12; }
	inline void set_livesNumber_12(int32_t value)
	{
		___livesNumber_12 = value;
	}

	inline static int32_t get_offset_of_plus1000_13() { return static_cast<int32_t>(offsetof(Game_Controller_t870087863, ___plus1000_13)); }
	inline int32_t get_plus1000_13() const { return ___plus1000_13; }
	inline int32_t* get_address_of_plus1000_13() { return &___plus1000_13; }
	inline void set_plus1000_13(int32_t value)
	{
		___plus1000_13 = value;
	}

	inline static int32_t get_offset_of_NumberOfCars_14() { return static_cast<int32_t>(offsetof(Game_Controller_t870087863, ___NumberOfCars_14)); }
	inline int32_t get_NumberOfCars_14() const { return ___NumberOfCars_14; }
	inline int32_t* get_address_of_NumberOfCars_14() { return &___NumberOfCars_14; }
	inline void set_NumberOfCars_14(int32_t value)
	{
		___NumberOfCars_14 = value;
	}

	inline static int32_t get_offset_of_IsGameOver_15() { return static_cast<int32_t>(offsetof(Game_Controller_t870087863, ___IsGameOver_15)); }
	inline bool get_IsGameOver_15() const { return ___IsGameOver_15; }
	inline bool* get_address_of_IsGameOver_15() { return &___IsGameOver_15; }
	inline void set_IsGameOver_15(bool value)
	{
		___IsGameOver_15 = value;
	}

	inline static int32_t get_offset_of_Hit_Car_16() { return static_cast<int32_t>(offsetof(Game_Controller_t870087863, ___Hit_Car_16)); }
	inline AudioClip_t1932558630 * get_Hit_Car_16() const { return ___Hit_Car_16; }
	inline AudioClip_t1932558630 ** get_address_of_Hit_Car_16() { return &___Hit_Car_16; }
	inline void set_Hit_Car_16(AudioClip_t1932558630 * value)
	{
		___Hit_Car_16 = value;
		Il2CppCodeGenWriteBarrier(&___Hit_Car_16, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
