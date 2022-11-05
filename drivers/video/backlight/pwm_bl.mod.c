#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;
BUILD_LTO_INFO;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x460c70a6, "module_layout" },
	{ 0x81c1d19d, "platform_driver_unregister" },
	{ 0xde164253, "__platform_driver_register" },
	{ 0xda1a0029, "_dev_warn" },
	{ 0x2576c130, "pwm_request" },
	{ 0xb2351ad2, "devm_kfree" },
	{ 0xe536ac87, "of_find_property" },
	{ 0x39e0287c, "of_property_read_variable_u32_array" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xa07bbbe8, "gpiod_direction_output" },
	{ 0x3fe70146, "regulator_is_enabled" },
	{ 0x3a760923, "gpiod_get_value_cansleep" },
	{ 0x84744745, "backlight_device_register" },
	{ 0x527d328e, "devm_pwm_get" },
	{ 0xe201ffb8, "devm_regulator_get" },
	{ 0x644ac6b8, "devm_gpiod_get_optional" },
	{ 0xc6f3cca5, "devm_kmalloc" },
	{ 0xa6c96402, "_dev_err" },
	{ 0xd769d20f, "regulator_enable" },
	{ 0x474e22f, "pwm_free" },
	{ 0x4b5a0671, "backlight_device_unregister" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xf9a482f9, "msleep" },
	{ 0x3967f406, "regulator_disable" },
	{ 0x8672b7c8, "pwm_apply_state" },
	{ 0xfd389cbc, "gpiod_set_value_cansleep" },
};

MODULE_INFO(depends, "backlight");

MODULE_ALIAS("of:N*T*Cpwm-backlight");
MODULE_ALIAS("of:N*T*Cpwm-backlightC*");

MODULE_INFO(srcversion, "ABED95AB3ACFE0E5B05BF94");
