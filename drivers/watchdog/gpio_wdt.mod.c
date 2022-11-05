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
	{ 0xcd5a959d, "param_ops_bool" },
	{ 0x81c1d19d, "platform_driver_unregister" },
	{ 0xde164253, "__platform_driver_register" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x4121a11f, "devm_watchdog_register_device" },
	{ 0x30d8f0c8, "watchdog_init_timeout" },
	{ 0xe536ac87, "of_find_property" },
	{ 0x39e0287c, "of_property_read_variable_u32_array" },
	{ 0xdcb4af72, "devm_gpiod_get" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xbcb7079c, "of_property_read_string" },
	{ 0xc6f3cca5, "devm_kmalloc" },
	{ 0x19ae336a, "gpiod_direction_input" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xa07bbbe8, "gpiod_direction_output" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xfd389cbc, "gpiod_set_value_cansleep" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Clinux,wdt-gpio");
MODULE_ALIAS("of:N*T*Clinux,wdt-gpioC*");

MODULE_INFO(srcversion, "01163A0D9430CA4A42546FF");
