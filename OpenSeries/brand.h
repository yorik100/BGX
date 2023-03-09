#pragma once
#include "../plugin_sdk/plugin_sdk.hpp"

namespace brand
{
	void drawCircle(vector pos, int radius, int quality, bool legsense, unsigned long color, int thickness);
	inline bool isMoving(const game_object_script& target);
	inline float timeBeforeWHits(const game_object_script& target);
	inline float timeBeforeWHitsLocation(vector& position);
	inline float getPing();
	inline float getGodBuffTime(const game_object_script& target);
	inline float getNoKillBuffTime(const game_object_script& target);
	inline float getStasisTime(const game_object_script& target);
	inline float getTotalHP(const game_object_script& target);
	inline bool couldDamageLater(const game_object_script& target, const float time, float damage);
	inline float getTimeToHit(prediction_input& input, prediction_output& predInfo, const bool takePing);
	inline int alliesAroundTarget(const game_object_script& target, const float range);
	inline hit_chance getPredIntFromSettings(int hitchance);
	inline bool castQ(const game_object_script& target, std::string mode, const bool eCombo, bool ignoreHitChance);
	inline bool castW(const game_object_script& target, std::string mode, bool ignoreHitChance);
	inline bool castE(const game_object_script& target, std::string mode);
	inline bool castR(const game_object_script& target, std::string mode);
	inline prediction_output getQPred(const game_object_script& target);
	inline prediction_output getWPred(const game_object_script& target);
	inline bool qCanBeCasted(const game_object_script& target);
	inline float getExtraDamage(const game_object_script& target, const int shots, const float predictedHealth, const float damageDealt, const bool isCC, const bool firstShot, const bool isTargeted, const int passiveStacks);
	inline float getQDamage(const game_object_script& target);
	inline float getWDamage(const game_object_script& target);
	inline float getW2Damage(const game_object_script& target);
	inline float getEDamage(const game_object_script& target);
	inline float getRDamage(const game_object_script& target, const int shots, const float predictedHealth, const bool firstShot, const int passiveStacks);
	inline void draw_dmg_rl(const game_object_script& target, const float damage, unsigned long color);
	inline void draw_dmg_lr(const game_object_script& target, const float damage, unsigned long color);
	inline bool isYuumiAttached(const game_object_script& target);
	inline bool isRecalling(const game_object_script& target);
	inline bool isValidRecalling(const game_object_script& target, float range, const vector& from);
	inline bool customIsValid(const game_object_script& target, float range, const vector& from, bool invul);
	inline bool rCollision(const game_object_script& target);
	inline bool canRBounce(const game_object_script& target);
	inline int rBounceCount(const game_object_script& target);
	inline game_object_script findClosestMinion(const game_object_script& target);
	inline bool limitedTick(int msTime);
	inline bool eSpam();
	inline void calcs();
	inline bool debuffCantCast();
	inline bool isCastingSpell();
	inline bool canCastSpells();
	inline void targetSelectorSort();
	inline void combo();
	inline void harass();
	inline void particleHandling();
	inline void automatic();
	inline void createMenu();
	inline void on_update();
	inline void on_draw();
	inline void on_draw_real();
	inline void on_create(const game_object_script obj);
	inline void on_delete(const game_object_script obj);
	inline void on_buff(game_object_script& sender, buff_instance_script& buff, const bool gain);
	inline void on_buff_gain(game_object_script sender, buff_instance_script buff);
	inline void on_buff_lose(game_object_script sender, buff_instance_script buff);
	inline void on_cast_spell(spellslot spellSlot, game_object_script target, vector& pos, vector& pos2, bool isCharge, bool* process);
	inline void on_process_spell_cast(game_object_script sender, spell_instance_script spell);
	void load();
	void unload();
};
